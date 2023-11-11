// javascript contorl API; application program interface
// ways to print in api
console.log("Hello World", 4 + 6, "another log");
// alert("me");
// document.write("This Is Document write");
console.warn("this is an warning in yellow made by user; its me");
console.error("this is an error in end made by user; its me");


// javascript variable
// what are variable?--> containors to store data values
// datatypes in javascript 
//number
var num1 = 34;
var num2 = 56;
console.log(num1+num2);
//string
var str1="this is a string";
var str2="this is also a string";
//objects
var marks={
    ravi: 34,
    raju: 78,
    harry: 99.98
}
console.log(num1,str1,marks); //we can do this opteration n colsole too
// Boolean
var a=true;
var b=false;
console.log(a,b);

// var und=undefined;
var und; //vo chees tho defined hi hoti hai
console.log(und);

var n=null;
console.log(n);
/*
at a very high level,there are two types of datatype in javascprit
primitive: undefined,null,number, string,boolean,symbol
reference: arrays and objects
*/
var arr=[1,2,3,"baba",4,5]



let myDate= new Date();  
console.log(myDate);
console.log(myDate.getTime());
console.log(myDate.getFullYear());
console.log(myDate.getDay());
console.log(myDate.getHours());
console.log(myDate.getMinutes());


// DOM manipulations
let opid = document.getElementById('click');
console.log(opid);

let elemClass = document.getElementsByClassName('container');
console.log(elemClass);
elemClass[0].style.background = "yellow";
elemClass[0].classList.add("bg-primary")


