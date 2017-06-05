#ifndef MYVECTOR_H
#define MYVECTOR_H

#include "MyList.h"

class MyVector : public MyList
{
public:
    MyVector() {
        std::cout << "creating MyVector\n";
    };

    MyVector(const MyVector& other) {      // copy constructor, must do!
        std::cout << other.size() << std::endl;  // delete
        std::cout << "MyVector ctor not implemented, danger Will Robinson\n";
    }
    virtual ~MyVector();

    MyVector& operator=(const MyVector&) {
        std::cout << "MyVector operator= not implemented\n";
        return *this;
    }

    virtual std::string toString() const override;
    virtual void push_back(int) override;
    virtual int pop_back() override;
    
    virtual void insert(int, int) override;
    virtual int at(int) override;
    virtual int front() override;
    virtual int back() override;
    virtual void erase(int) override;
    virtual void clear() override;

protected:

private:
    int* vals{nullptr};
    unsigned int m_capacity{0};
    void resize();
};

#endif // MYVECTOR_H
