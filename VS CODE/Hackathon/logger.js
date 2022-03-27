const EventEmitter = require('events');

const emitter = new EventEmitter();
var url = "https://mylogger.io/log";

class Logger extends EventEmitter{
    log(message){
    
        console.log(message);
        this.emit('messageLogged', {id: 1, url: 'http://',message:"Login success"});
    
    }
}


module.exports = Logger;