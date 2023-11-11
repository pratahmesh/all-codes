// stack allocated array they are fixed sized
// other is vector allocated is array with is heap, they dynamic reclycale
// slow downs the program due to heap

//    // stack allocator
// int array[5];
//    // heap allocator
// int* heapArray = new int[5];
// //diffrence is them is th keyword NEW in heapArray

// int size =5;
// int array[size];  //cannot be done through stack allocator, this must be a constantepr whict is known by the compiler
// we can do dynamic allocation through stack with the help of pointer
// int* heapArray = new int[size];
// delete[] heapArray; // we have to delete the heap allocator but not in case of stack

// C++ standard lybrai
// std::array<int ,10> collection; //<type , size>

// #include <iostream>
// #include <array>
// using namespace std;
// class Array
// {
// public:
//     Array(int size)
//     {
//         m_data = (int *)alloca(size); // alloca can dynamically allocate stack  //best if we are not specified by size of the array , extremly usefull
//     }

// private:
//     int m_Data;
// };

//  int main()
// {
//     int size = 5;
//     Array data(size);
// }

#include <iostream>
#include <array>
#include <cstring>
template <typename T, size_t S> // typename T actuall data that we store and size_t S is the number we have
class Array
{
public:
    constexpr int Size() const { return S; } // the job of the function is to return the the value of 5 or S

    T &operator[](size_t index) { return m_Data[index]; }             // pull out the value by index operator and refrence is used to over come the problem
    const T &operator[](size_t index) const { return m_Data[index]; } // pull out the value by index operator

    T *Data() { return m_Data; }
    const T *Data() const { return m_Data; }

private:
    T m_Data[S];
};

int main()
{
    int size = 5;
        // Array<int,5> data;
    Array<std::string, 2> data;

    // const auto& arrayReference = data;
    // static_assert(data.Size()<10,"Size is too large!");//to dicided the range of size
         // memset(&data[0],0,data.Size() * sizeof(int));
         //    data[1]=3;
         //     data[4]=16;
    data[0] = "prathamesh";
    data[1] = "DONE";
    for (size_t i = 0; i < data.Size(); i++)
    {

        std::cout << data[i] << std::endl;
    }
    std::cin.get();
}