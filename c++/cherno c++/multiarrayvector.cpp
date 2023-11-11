//vector is an array with heap allocation
#include <iostream>
#include "array.h"
#include "Vector.h"

int main(){
    Array<std::string>data;
    data[0]="Prathamesh";
    data[1]="C++";
    
    Vector<std::string> vector;
    vector.Pushback("Prathamesh");
    vector.Pushback("C++");
    vector.Pushback("vector");
 std::cin.get();
    }
