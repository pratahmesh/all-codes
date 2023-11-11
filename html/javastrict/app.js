// function op (name){
//     console.log('Hello '+name)
// }
// op('Pratham');

// console.log();//global
// setTimeout();
// clearTimeout();
// setInterval();
// clearInterval();

// var message='';
// console.log(global.message);//shows undefined because it is not gobally its just in app.js

// var sayHello = function(){x
// //this will be overwritten in other folders if same name is used
// }
// window.sayHello();
// console.log(module);


// import export of modules
// we use require function,it take the path
// requrie('./subfolder/logger')
// *const a = require('./logger');
// console.log(a); //show the logger is sucessfully added
///log is the object passed by logger.js 
// *a.log('message'); //value to message in logger.js,incase of many fuctions 
////when only a fuction is inported we can directly call it 
// *a('hello word');


// PATH MODULE
// const path = requrie('path');
// var pathOBJ = path.parse(__filename);
// console.log(pathOBJ);

// //* OS MODULE
// import { totalM, freeM } from 'os'; //works when we use "type":"module",
// *const os = require('os');
// var totalM = os.totalmem();
// var freeM = os.freemem();
// // console.log('Total Memory: '+totalM+'Free Memory: '+freeM);
// console.log(`Total Memory: ${totalM}`);
// console.log(`Free Memory: ${freeM}`);

// const fs = require('fs');
// import { readdir } from 'fs';
// // syncrons
// // const files1 = fs.readdirSync('./');
// // console.log(files1);
// // asyncrons
// readdir('./',function(err, files){
// if (err) console.log('Error', err);
// else console.log('Result', files);
// });

// const EventEmitter = require('events');//EventEmitter is a class
// const emitter = new EventEmitter();//emitter is a object
// //Register a listener
// emitter.on('Same name as emit raised',function(){
//     console.log('Listener called');
// });
// //Raise an event
// emitter.emit('Same name as emit raised');

// event arugment
const EventEmitter = require('events');//EventEmitter is a class
const emitter = new EventEmitter();//emitter is a object
//Register a listener
// use =>arrow function or simple write function
emitter.on('Same name as emit raised',(arg) => {
    console.log('Listener called',arg);
});
//Raise an event
emitter.emit('Same name as emit raised',{id: 1, url: 'http://'});  




 

