#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>
#include <sstream>
#include <stdlib.h>

/// Pure Interface....
class MyList
{
public:
    MyList() = default;
    virtual ~MyList() = 0;

    //virtual MyList& operator=(const MyList&) = 0;
    virtual std::string toString() const = 0;
    virtual void push_back(int) = 0;
    virtual int pop_back() = 0;
    //virtual MyList* slice(int, int) = 0;
    //virtual int at(int) = 0;
    unsigned int size() const {
        return m_size;
    }
    virtual void insert(int, int) = 0;
    virtual int at(int) = 0;
    virtual int front() = 0;
    virtual int back() = 0;
    virtual void erase(int) = 0;
    virtual void clear() = 0;

protected:
    unsigned int m_size{0};

private:
};

#endif // MYLIST_H
