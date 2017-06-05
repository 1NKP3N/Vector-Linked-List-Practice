#include "MyVector.h"

MyVector::~MyVector()
{
    std::cout << "Destructing MyVector\n";
    free(vals);
    vals = nullptr;
}

/*
MyVector::MyVector(const MyVector& other)
{
    //copy ctor
}
*/

void MyVector::push_back(int value) {
    //std::cout << "MyVector push_back(" << value << ")\n";
    if (size() == m_capacity) {
        resize();
    }
    vals[size()] = value;
    m_size += 1;
}

int MyVector::pop_back() {
    if (size() <= 0)   // sad range check, throw exception?
        return 0;
    int val = vals[size()];
    m_size -= 1;

    return val;
}

void MyVector::insert(int index, int value){
    std::cout << "Inserting " << value << " at MyVector[" << index << "]: " << std::endl;
    push_back(0);
    
    for(int j = size() - 1; j > index; --j){
        vals[j] = vals[j - 1];
    }
    
    vals[index] = value;
        
}

int MyVector::at(int index) {
    std::cout << "Element at MyVector[" << index << "]: ";
    return vals[index];
}

int MyVector::front(){
    std::cout << "First element in MyVector: ";
    return vals[0];
}

int MyVector::back(){
    std::cout << "Last element in MyVector: ";
    return vals[size() - 1];
}

void MyVector::erase(int index){
    

}

std::string MyVector::toString() const {
    std::string str{'['};

    for (unsigned i{0}; i < size(); i += 1) {
        str += std::to_string(vals[i]) + ",";
    }

    if (size() > 0) {
        str.pop_back();  // remove last extra comma
    }

    str.push_back(']');

    return str;
}

void MyVector::resize() {
    unsigned int newSize{m_capacity * 2 + 1};
    int *newMem = (int*)malloc(newSize * sizeof(int));

    if (newMem == nullptr) {
        std::cout << "*** Out of memory: MyVector.resize() ***\n";
        return;
    }

    for (unsigned int i = 0; i < size(); i += 1) {
        newMem[i] = vals[i];
    }

    free(vals);
    vals = newMem;
    m_capacity = newSize;
}
