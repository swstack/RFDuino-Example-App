var noble = require('noble')

var RFDUINO_NAME = 'RFDuino'

noble.on('stateChange', function(state) {
  if (state === 'poweredOn') {
    noble.startScanning()
  } else {
    noble.stopScanning()
  }
});

noble.on('discover', function(peripheral) {
  var adv = peripheral.advertisement
  var name = adv.localName ? adv.localName : 'Unknown Name'
  if (name == RFDUINO_NAME) {
  	noble.stopScanning()
  	peripheral.connect(function(err) {
      if (err)
      	console.log('Error: ' + err)
      else
      	console.log('Connected.')
  	})
  }
})
