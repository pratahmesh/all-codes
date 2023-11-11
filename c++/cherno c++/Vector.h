#pragma once

template<typename T>
class Vector{
    public:
    Vector(){
        //allocate 2 elements
        realloc(2);
    }
    
    private:
    T* m_Data=nullptr;
size_t m_size =0;//number of element that is acttualy inside our vector
size_t m_capacity=0;//how many element worth of meomery is allocated
}