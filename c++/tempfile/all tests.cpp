// #include <iostream>
// int print() // note: return type of int
// {
// std::cout << "A";
//     return 5; // the function will return to the caller here
//     std::cout << "B"; // this will never be printed
// }
// int main()
// {
//     std::cout << print(); // print() returns value 5, which will be print to the console
//     return 0;
// }

// #include <iostream>
// int print() // note: return type of int
// {
//     std::cout << "A";
//     return 5; // the function will return to the caller here
//     std::cout << "B"; // this will never be printed
// }
// int main()
// {
//     std::cout << print(); // print() returns value 5, which will be print to the console
//     return 0;
// }
// // or************************************
// #include <iostream>
// int getValueFromUser()
// {
// std::cout << "Enter an integer: ";
// int input{};
// std::cin >> input;
// 	return input;
// }
// void printDouble(int value)
// {
// 	std::cout << value << " doubled is: " << value * 2 << '\n';
// }
// int main()
// {
// 	printDouble(getValueFromUser());
// 	return 0;
// }

// #include <iostream>
// void doublePrint(int x)
// {std::cout<<x<<" After double: "<<x*2;
// }
// int main()
// {
// std::cout<<"Enter number: ";
// int n{};
// std::cin>>n;
// doublePrint(n);
// return 0;
// }

// #include <iostream>
// void doIt(int x)
// {
// int y{ 4 };
// std::cout << "doIt: x = " << x << " y = " << y << '\n';
// x = 3;
// std::cout << "doIt: x = " << x << " y = " << y << '\n';
// }
// int main()
// {
// int x{ 1 };
// int y{ 2 };
// std::cout << "main: x = " << x << " y = " << y << '\n';
// doIt(x);
// std::cout << "main: x = " << x << " y = " << y << '\n';
// return 0;
// }

// #include <iostream>
// int add(int x,int y);
// int main(){
// std::cout<<"The Sum is: "<<add(3,4)<<"\n";
// return 0;
// }

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int max_of_four(int a, int b, int c, int d)
// {if (a > b)
//     {if (a > c){
//         if (a > d)
//             {return a;}
//         else
//             {return d;}
//         return a;
//         }else
//         {return c;}
//              return a;}
//     else if (b > c)
//     {if (b > d)
//     {return b;}
//     else
//     {return d;}
// return b;
// }else if (c > d)
// { return c;
// }
// else if (d > c) {
// return d;}
// { return b;
// }
// }
// int main()
// {int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
//     return 0;
// }

// // #include <iostream> // imports the declaration of std::cout
// // using namespace std; // makes std::cout accessible as "cout"
// // int cout() // defines our own "cout" function in the global namespace
// // { return 5;
// // }
// // int main()
// // {
// // cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?
// //     return 0;
// // }

// // Object-like macros don’t affect other preprocessor directives
// // "Alex" MY_NAME <<
// #include <iostream>
// #define MY_NAME  "Alex"
// int main(){
// //    #ifdef MY_NAME
//     std::cout << "My name is: "<<MY_NAME;
//     // #endif
//     return 0;
// }

// #include <iostream>
// #define PRINT_JOE
// int main(){
// #ifdef PRINT_JOE
//     std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
// #endif
// #ifdef PRINT_BOB
//     std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
// #endif
//     return 0;
// }

// // The below code only prints “Joe”, because “Bob” and “Steve” are excluded from compilation by the #if 0 preprocessor directive
// #include <iostream>
// int main()
// {std::cout << "Joe\n";
// #if 0 // Don't compile anything starting here
//     std::cout << "Bob\n"; std::cout << "Steve\n";
// #endif // until this point
//     return 0;
// }

// // To temporarily re-enable code that has been wrapped in an #if 0, you can change the #if 0 to #if 1:
// #include <iostream>
// int main()
// {std::cout << "Joe\n";
// #if 1 // always true, so the following code will be compiled
//     std::cout << "Bob\n";std::cout << "Steve\n";
// #endif
//     return 0;
// }

// bool isEqual(int x, int y)
// {return (x == y); // operator== returns true if x equals y, and false otherwise
// }

// #include <iostream>
// int main()
// {char ch1{ 'a' }; // (preferred)
// std::cout << ch1; // cout prints character 'a'
// char ch2{ 98 }; // code point for 'b' (not preferred)
// std::cout << ch2; // cout prints a character ('b')
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
//     char ch{};
//     std::cin >> ch; // ch = 'a', "bcd" is left queued.
//     std::cout << "You entered: " << ch << '\n';
//     // Note: The following cin doesn't ask the user for input, it grabs queued input!
//     std::cin >> ch; // ch = 'b', "cd" is left queued.
//     std::cout << "You entered: " << ch << '\n';
//     return 0;
// }

// #include <iostream>
// int main(){
//     rep:
//     char ch{}; // 97 is ASCII code for 'a'
// std::cout<<"Enter A single charectar for its ASCII code: ";
// std::cin>>ch;
//     std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int
//     char r{};
//     std::cout<<"Do U Want To Reapeat (y/n): ";
//     std::cin>>r;
//     std::cout<<"\n";
//     if(r=='y'){
//      goto rep;
//     }else{
// return 0;
//     }
//     return 0;
//     }

// //  0 before the number means this is octal
// // 0x before the number means this is hexadecimal
// // int bin{};    // assume 16-bit ints
// //     bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
// //     bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
// //     bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
// //     bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
// //     bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
// //     bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
// //     bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
// //     bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
// //     bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
// //     bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
// //     bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable
// //     we can use binary literals by using the 0b prefix:

// #include <iostream>
// int main()
// {
//     int x { 12 };
//     std::cout << x << '\n'; // decimal (by default)
//     std::cout << std::hex << x << '\n'; // hexadecimal
//     std::cout << x << '\n'; // now hexadecimal
//     std::cout << std::oct << x << '\n'; // octal
//     std::cout << std::dec << x << '\n'; // return to decimal
//     std::cout << x << '\n'; // decimal
//     return 0;
// }

// #include <bitset> // for std::bitset //to get binary as output
// #include <iostream>
// int main()
// {
// 	// std::bitset<8> means we want to store 8 bits
// 	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
// 	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101
// 	std::cout << bin1 << '\n' << bin2 << '\n';
// 	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it
// 	return 0;
// }

// #include <iostream>
// #include <string>
// int main()
// {   std::string name { "Alex" }; // initialize name with string literal "Alex"
//     name = "John";               // change name to "John"
// 	std::cout<<name;
// 	std::string empty{ };
// 	std::cout << '[' << empty << ']';
//     return 0;
// }

// // corrtect way of input of string
// #include <iostream>
// #include <string> // For std::string and std::getline
// int main()
// {
// std::cout << "Enter your full name: ";
//     std::string name{};
//     std::getline(std::cin >> std::ws, name); // read a full line of text into name
//     std::cout << "Enter your favorite color: ";
//     std::string color{};
//     std::getline(std::cin >> std::ws, color); // read a full line of text into color
//     std::cout << "Your name is " << name << " and your favorite color is " << color <<'\n';
//     std::string name{ "Alex" };
//     std::cout << name << " has " << name.length() << " characters\n";
//     return 0;
// }

// // This program produces the same output as the prior one, but no copies of the string “Hello, world!” are made.
// // #include <iostream>
// // #include <string_view>
// // void printSV(std::string_view str) // now a std::string_view is avaialbe only for c++ 17 onwards
// // {std::cout << str << '\n';
// // }
// // int main()
// // {std::string_view s{ "Hello, world!" }; // now a std::string_view
// //     printSV(s);
// //     return 0;
// // }

// #include <iostream>
// namespace Foo // define a namespace named Foo
// {// This doSomething() belongs to namespace Foo
//     int doSomething(int x, int y)
//     {
//         return x + y;
//     }
// }
// namespace Goo // define a namespace named Goo
// { // This doSomething() belongs to namespace Goo
// int doSomething(int x, int y)
//     {
//         return x - y;
//     }
// }
// int main()
// {
//     int v{Foo::doSomething(4, 3)};//7
//     int h{Goo::doSomething(4, 3)};//1
//     int k{};
//     k=v+h;//8
//     std::cout<< k;
//     return 0;
// }


//scope resolution
// #include <iostream>
// void print() // this print() lives in the global namespace
// {
// 	std::cout << " there\n";
// }
// namespace Foo
// {
// 	void print() // this print() lives in the Foo namespace
// 	{
// 		std::cout << "Hello";
// 	}
// 	void printHelloThere()
// 	{   print();   // calls print() in Foo namespace
// 		::print(); // calls print() in global namespace
// 	}
// }
// int main()
// {
// 	Foo::printHelloThere();
// 	return 0;
// }

// #include <iostream>
// namespace Foo
// {
// 	int multi(int a,int b){
// 		return a*b;
// 	}
// 	namespace Goo // Goo is a namespace inside the Foo namespace
//     {int add(int x, int y)
//         {return x + y;}}}
// // nested namespaces can also be declared this way:
// // namespace Foo::Goo
// // {int add(int x, int y)
// //   {return x + y;}
// // }
// int main()
// {
// 	std::cout << Foo::multi(2,5) <<'\n';
//     std::cout << Foo::Goo::add(1, 2) << '\n';
//     return 0;
// }

// #include <iostream>
// int main()
// {
// 	std::cout<<"Enter First Number:";
// 	int x{};
// 	std::cin >> x;
// 	std::cout<<"Enter Second Number:";
// 	int y{};
// 	std::cin >> y;
// 	int u{(x > y) ? x : y};
// 	std::cout << u;
// }

// #include <iostream>
// // Variables declared outside of a function are global variables
// int g_x {}; // global variable g_x
// void doSomething()
// {
//     // global variables can be seen and used everywhere in the file
//     g_x = 3;
//     std::cout << g_x << '\n';
// }
// int main()
// {
//     std::cout << g_x << '\n';
//     doSomething();
//     std::cout << g_x << '\n';
//     // global variables can be seen and used everywhere in the file
//     g_x = 5;
//     std::cout << g_x << '\n';
//     return 0;
// }
// // g_x goes out of scope here

// // Variables declared inside a namespace but outside a function are global variables.

// #include <iostream>
// int main()
// { // outer block
//     int apples { 5 }; // here's the outer block apples
//     { // nested block
//         // apples refers to outer block apples here
//         std::cout << apples << '\n'; // print value of outer block apples
//         int apples{ 0 }; // define apples in the scope of the nested block, the defination is imp which make the it hidden
//without defination it wont work
//         // apples now refers to the nested block apples
//         // the outer block apples is temporarily hidden
//         apples = 10; // this assigns value 10 to nested block apples, not outer block apples
//         std::cout << apples << '\n'; // print value of nested block apples
//     } // nested block apples destroyed
//     std::cout << apples << '\n'; // prints value of outer block apples
//     return 0;
// } // outer block apples destroyed

// #include <iostream>
// int value { 5 }; // global variable
// int main()
// {
//     int value { 7 }; // hides the global variable value
//     ++value; // increments local value, not global value
//     --(::value); // decrements global value, not local value (parenthesis added for readability)
//     std::cout << "local variable value: " << value << '\n';
//     std::cout << "global variable value: " << ::value << '\n';
//     return 0;
// } // local value is destroyed

// void sayHi(); // forward declaration for function sayHi, makes sayHi accessible in this file

// #include <iostream>
// int getInteger()
// {
// 	static bool s_isFirstCall{ true };//decleared true over Here
// 	if (s_isFirstCall)
// 	{
// 		std::cout << "Enter an integer: ";
// 		s_isFirstCall = false;
// 	}
// 	else
// 	{
// 		std::cout << "Enter another integer: ";
// 	}
// 	int i{};
// 	std::cin >> i;
// 	return i;
// }
// int main()
// {
// 	int a{ getInteger() };
// 	int b{ getInteger() };
// 	int c{ getInteger() };
// 	std::cout << a << " + " << b<< " + " << c  << " = " << (a + b + c) << '\n';
// bool ai;//defualt False
// std::cout<<ai;
// 	return 0;
// }

// #include <iostream>
// constexpr int greater(int x, int y)
// {
//     return (x > y ? x : y);
// }
// int main()
// {
//     constexpr int g { greater(5, 6) };            // case 1: evaluated at compile-time
//     std::cout << g << " is greater!\n";
//     int x{ 5 }; // not constexpr
//     std::cout << greater(x, 6) << " is greater!\n"; // case 2: evaluated at runtime
//     std::cout << greater(5, 6) << " is greater!\n"; // case 3: may be evaluated at either runtime or compile-time
//     return 0;
// }

// #include <iostream>
// inline namespace V1 // declare an inline namespace named V1
//if we dont give it a name as v1 and leave it as inline namespace it will by default call this one without prefix:: 
// {
//     void doSomething()
//     {
//         std::cout << "V1\n";
//     }
// }
// namespace V2 // declare a normal namespace named V2
// {
//     void doSomething()
//     {
//         std::cout << "V2\n";
//     }
// }
// int main()
// {
//     V1::doSomething(); // calls the V1 version of doSomething()
//     V2::doSomething(); // calls the V2 version of doSomething()
//     doSomething(); // calls the inline version of doSomething() (which is V1)
//     return 0;
// }

// #include <iostream>
// void printDigitName(char x)
// {
//     switch (x) // x is evaluated to produce value 2
//     {
//         case 'a':
//             std::cout << "Apple";
//             return;
//         case 'b': // which matches the case statement here
//             std::cout << "Ball"; // so execution starts here
//             return; // and then we return to the caller
//         case 'c':
//             std::cout << "Cat";
//             return;
//         default:
//             std::cout << "Unknown";
//             return;
//     }
// }
// int main()
// {
//     char x{};
//     std::cin>>x;
//     std::cout<<x<<" "<<"for ";
//     printDigitName(x);
//     std::cout<<'\n';
//     return 0;
// }

// #include <iostream>
// bool isVowel(char c)
// {
//     return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
//         c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
// }
// int main(){
//     char c='i';
//     std::cout<<isVowel(c);
//     return 0;
// }

// #include <iostream>
// int main(){
//     int outer{5};
//     while(outer >= 1){
//             int inner{outer-1};
//             while (inner >= 1)
//             {
//                std::cout<<"*"<<" ";
//                --inner;
//             }
//             int inner2{outer};
//             while (outer <= inner2)
//             {
//                std::cout<<inner<<" ";
//                --inner2;
//             }
//             std::cout<<"\n";
//     --outer;
//     }
//     return 0;
// }

// #include <iostream>
// int main()
// {
// 	for (char c{ 'a' }; c <= 'e'; ++c) // outer loop on letters
// 	{
// 		std::cout << c; // print our letter first
// 		for (int i{ 0 }; i < 3; ++i) // inner loop on all numbers
// 			std::cout << i;
// 		std::cout << '\n';
// 	}
// 	return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int main(){
//     string a,b;
//     cin>>a;
//     cin>>b;
//     int len = a.size();
//     int len2 =b.size();
//     cout<<len<<" "<<len2<<'\n';
//     for (int j{};j<=len ; j++){
//     for (char d{0}; d <= j; d++){
//         d=a[j];
//         cout<<a[j];
//         break;
//     }
//     }
//     cout<<endl;
//     for (int j{};j<=len2 ; j++){
//     for (char d{0}; d <= j; d++){
//         d=b[j];
//         cout<<b[j];
//         break;
//     }
//     }
//     cout<<len<<" "<<len2<<'\n';
    
//     return 0;
// }

// static int s_state { 3 }; // only initialized the first time this function is called

// //this program can deal any input senerico
// #include <cassert>// for assert()
// #include <limits>
// #include <iostream>
// void ignoreLine()
// {
// 	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// }
// double getDouble()
// {
// 	while (true) // loop until user enters a valid input
// 	{
// 		std::cout << "Please enter a value: ";
// 		int num{};
// 		std::cin >> num;

//   // ** //assert(num > 0.0 && "this is wrong"); // ** //this checks wheater the num is right by given condition and if its right proceeds and if wrong it will end and print the string provided after &&  
//   //   Here’s why this works: A string literal always evaluates to Boolean true. So if found is false, false && true is false. If found is true, true && true is true. Thus, logical AND-ing a string literal doesn’t impact the evaluation of the assert. anouter type of assert is static_assert(condition, diagnostic_message)  ,A static_assert is an assertion that is checked at compile-time rather than at runtime, with a failing static_assert causing a compile error.

// 		// Check for failed extraction
// 		if (!std::cin) // if the previous extraction failed
// 		{
// 			// let's handle the failure
// 			std::cin.clear(); // put us back in 'normal' operation mode aka clear input buffer errors so the extraction operator will be enabled again
// 			ignoreLine(); // to clear the input buffer
// 			std::cout << "Oops, that input is invalid. Please try again.\n";
// 		}
// 		else
// 		{
// 			ignoreLine(); // remove any extraneous input		}
// 			return num;
// 		}
// 	}
// }
// char getOperator()
// {
// 	while (true) // Loop untill user enter valid input
// 	{
// 		std::cout << "Please enter one of the following:+,-,* or /: ";
// 		char symbol{};
// 		std::cin >> symbol; // if extraction operator goes in failure mode , if this is skipt and program enters infinite loop
// 		// Check if the user input is valid
// 		switch (symbol)
// 		{
// 		case '+':
// 		case '-':
// 		case '*':
// 		case '/':
// 			return symbol;
// 		default:
// 			std::cout << "Oops, that input is invalid. Please try again.\n";
// 		}
// 		if (!std::cin)
// 		{
// 			std::cin.clear(); // remove all the errors from the input buffer and this way windows enables extraction again
// 			ignoreLine();
// 		}
// 	}
// }
// void printResult(double num1, char symbol, double num2)
// {
// 	switch (symbol)
// 	{
// 	case '+':
// 		std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
// 		break;
// 	case '-':
// 		std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';
// 		break;
// 	case '*':
// 		std::cout << num1 << " * " << num2 << " is " << num1 * num2 << '\n';
// 		break;
// 	case '/':
// 		std::cout << num1 << " / " << num2 << " is " << num1 / num2 << '\n';
// 		break;
// 	default: // Being robust means handling unexpected parameters as well, even though getOperator() guarantees operation is valid in this particular program
// 		std::cout << "Something went wrong: printResult() got an invalid operator.\n";
// 	}
// }
// int main()
// {
// 	double num1{ getDouble() };
// 	char symbol{ getOperator() };
// 	double num2{ getDouble() };
// 	printResult(num1, symbol, num2);
// 	return 0;
// }

// //Algorithm to gentrate 100 random number
// #include <iostream>
// // For illustrative purposes only, don't use this
// unsigned int LCG16() // our PRNG
// {
//     static unsigned int s_state{ 5323 };
//     // Generate the next number
//     // We modify the state using large constants and intentional overflow to make it hard
//     // for someone to casually determine what the next number in the sequence will be.
//     s_state = 8253729 * s_state + 2396403; // first we modify the state
//     return s_state % 32768; // then we use the new state to generate the next number in the sequence
// }
// int main()
// {
//     // Print 100 random numbers
//     for (int count{ 1 }; count <= 100; ++count)
//     {
//         std::cout << LCG16() << '\t';
//         // If we've printed 10 numbers, start a new row
//         if (count % 10 == 0)
//             std::cout << '\n';
//     }
//     return 0;
// }

#include <iostream>
void printInt(int x)
{
    std::cout << x << '\n';
}
int main()
{
    printInt(2);
    short s{ 3 }; // there is no short literal suffix, so we'll use a variable for this one
    printInt(s); // numeric promotion of short to int
    printInt('a'); // numeric promotion of char to int
    printInt(true); // numeric promotion of bool to int
    return 0;
}