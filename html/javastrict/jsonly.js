// VARIABLES
// before es6 we use to use 'var' keyword to declare a variable
// let name='Prathamesh';
// let n;//default value of variable is undefined
// console.log(name);//Prathamesh is in output
// let firstName='Prathamesh';
// let LastName='Jakkula';
// console.log(firstName,LastName);

// CONSTANTS
// const intrestrate=0.3;
// // intrestrate=1; this won't overwite as its constant
// console.log(intrestrate);

// PRIMATIVES/VALUE DATA TYPES
// String,Number,Boolean,undefined,null

// let name='MOSH';
// let age=30;
// let Boolean=true;
// let firstName=undefined;
// let LastName=null;
// typeof firstName
// 'undefined'

 // let number = 4;
        // if (number === 1){
        //     console.log('It is one')
        // }
        // else{
        //     console.log('Not a one...')
        // }  
        //== Checks for value only whereas === Checks for value and type
        // if (1 == '1') true and if (1 === '1') false // !=(value only)and !==(value and type)

        //   let repos =  confirm("Do You Want Ice-Cream ?");
        //   if (repos){
        //     alert("Here You Go!");
        //   }else{ 
        //     alert("Too Bad");
        //   }

        // let answer = prompt("What is 4 + 5 ?:");
        // if (answer == 9) {
        //     alert("WonderFull !!")
        // }else if (answer === "") {
        //     alert("You Did't Even Try")
        // }else{
        //         alert ("Whoopss ! Try again..")
        // }

        // const username = prompt("Username?");
        // const password = prompt("Password?");
        // if (username === "Prathamesh" && password === "op" || username === "admin"){
        //     alert("Welcome")
        // }else{
        //     alert("Nope!")
        // }

        // let check;
        // check =12;//true
        // check = 0;//false
        // if(check){console.log("Check is true")}else{ console.log("Check is False")}  
// all string are true but empty string is false  
//empty array & object is true
//undifined and null is false 

//REFERENCE TYPES
// Object,Array,function

// // {}; is  a object litreal,keys are the value of the objects
// let person = {
//     name:'Vikas',
//     age:30
// };
// console.log(person);
// //two way to change the properties
// // Dot Notation
// person.name='vinayak';
// console.log(person.name);//indivisualy access
// //Bracket Notation
// let selection='name'
// person[selection]='vishal';
// console.log(person.name);

// let car = {
//     name: 'Corolla',
//     brand: 'Toyota',
//     color: 'white',
// }
// //console.log(car.name);
// //console.log(car['name']);
// car.name = 'abc';//overwrite
// car['name']= 'abc2';
// car.origin = 'japan';
// // delete car.origin;//to delete properties
// console.log(car);
// console.log(Object.keys(car));
// console.log(Object.values(car));



// ARRARYS []is a array literal,it is dynamic can be change ,typeof is 'object'
// let selectedColors =['red','blue',5];
// selectedColors[3]='green';
// console.log(selectedColors);
// console.log(selectedColors.length);
// console.log(selectedColors[1]);

// let fruits = ['apple','orange','kiwi','derian']
// console.log(fruits[0]);//we can overwrite
// console.log(fruits.slice(1,3));
// console.log(fruits.length);
// fruits.pop();//removes derian
// fruits.push('grape');
// console.log(fruits);
// fruits.shift();//removes first element
// fruits.unshift('banana');//add to the first element
// console.log(fruits);

// //loops
// let fruits = ['apple','orange','kiwi','derian']
// for(let index = 0;index < fruits.length;index++){
//    console.log(fruits[index]);
// }
// let car = {
//         name: 'Corolla',
//         brand: 'Toyota',
//         color: 'white',
//     }
// for(let index = 0;index < Object.keys(car).length;index++){
//     const key = Object.keys(car)[index];
//     const value = car[key];
//     console.log(key,value);
//     // console.log(Object.keys(car)[index],Object.values(car)[index])
// }
// // defult for loop
// for (const keysss in car){
//     const value = car[keysss];
//     console.log(keysss,value);
// } 
// // of loop
// for(const fruit of fruits){
//     console.log(fruit);
// }

// let li = 0;
// let response = false;

// while(!response){
//     response = confirm("Please Click Ok To this Loop.. You have clicked on Cancel for " + String(li) + " times")
//     li++;
// }



//FUNCTION   no ; at end because its not variable declearation
// function greet(name)//parameter is at the time of declearation
// {
//     console.log('Hello '+name);
// }
// greet('Ram');//calling function //argument is the actually value which is suppiled to the parameter
// greet('Sham');

// //Performing a task
// function greet(name,LastName)//parameter is at the time of declearation
// {
//     // console.log('Hello',name,LastName);
//     console.log('Hello '+name+' '+LastName);
// }
// greet('Ram','Ragunathan');

// //Calclulating a value
// function sqaure(number){
//    return number*number;
// }
// // let n=sqaure(2); //can also be done
// // console.log(n);
// console.log(sqaure(4))

// function sayHello(){
//     console.log('hello 1');
// } 
// sayHello();
// //to create an anonimus function
// let sayHello2 = function(){
//     console.log('hello 2');
// } 
// sayHello2();
// let sayHello3 = () =>  { //arrow function to mamke as above anonimous function
//     console.log('hello 3');
// }
// sayHello3();


// let hey = 'I am magician. I trick people :)';
// console.log(hey.toLowerCase());
// console.log(hey.toUpperCase());
// console.log(hey.split(' '));
// console.log(hey.slice(0,13));
// console.log(hey.charAt(3));


// const ans = prompt ('Enter Your email: ');
// const mustPresent = ['.','@'];
// const splitted = ans.split('');
// const hasvalidsymbols = mustPresent.every((Symbol) => {
// return splitted.includes(Symbol);
// }) 

// if(!hasvalidsymbols){
//     alert('Uh Oh, Please include ' + mustPresent.join (' and '));
// }else{
//     alert('VALID');
// }
 
// try{
//     let hey = 'there';
//     hey();
// }
// catch(error){
//     console.log(error);
// }
// console.log('after error');

//throw new Error
// throw new Error('The arguments supplied must be number');
// if (!(x instanceof Number)  || !(y instanceof Number))

