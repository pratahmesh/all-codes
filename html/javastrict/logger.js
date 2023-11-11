// node does not excute are code directly it wrapps the code inside each module (inside of a function)
// (function (exports, require, module, __filename, __dirname){
    //code we write
// })
//at run time are code is converted to function like acove 
console.log(__filename);
console.log(__dirname);

var url = 'http://mylogger.io/log';

function log(message){
    //send an htto request
    console.log (message);
}
// one way exporting by object
//work when "type":"module", is removed from package.json
// *module.exports.log = log; //exports is a object,log is the name of object
// module.exports.endPoint = url; //exports is a object,endPoint is the name
//second way for exporting only one function
module.exports = log; 
// const _log = log;
// export { _log as log }; for es6 version



