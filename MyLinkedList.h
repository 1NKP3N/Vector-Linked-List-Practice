#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include "MyList.h"

class MyLinkedList : public MyList
{
public:
    MyLinkedList() : first{nullptr} {
        std::cout << "Creating MyLinkedList\n";
    }

    MyLinkedList(const MyLinkedList& other) : first{nullptr} {      // copy constructor, must do!
        std::cout << other.size() << std::endl; // delete
        std::cout << "MyLinkedList ctor not implemented, danger Will Robinson\n";
    }

    virtual ~MyLinkedList();

        MyLinkedList& operator=(const MyLinkedList& rhs) {
            std::cout << rhs.size() << std::endl; // delete
            std::cout << "MyLinkedList operator= not implemented\n";
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

protected:
    class Node {
    public:
        Node() : data{0}, m_next{nullptr}, m_prev{nullptr}
        { /* empty body */ }

        static Node* makeNode(int value, Node* prev, Node* next) {
            Node* node = (Node*)malloc(sizeof(Node));

            if (node == nullptr) {
                std::cout << "*** Out of memory: MyVector.resize() ***\n";

                return nullptr;
            }
            node->setValue(value);
            node->setPrev(prev);
            node->setNext(next);
            return node;
        }

        void setNext(Node* ptr) {
            m_next = ptr;
        }

        void setPrev(Node* ptr) {
            m_prev = ptr;
        }

        void setValue(int val) {
            data = val;
        }

        Node* next() const {
            return m_next;
        }

        Node* prev() const {
            return m_prev;
        }

        int value() const {
            return data;
        }

    private:
        int data;
        Node* m_next;
        Node* m_prev;
    }; // end of class Node //

private:
    Node* first;
}; // end of class MyLinkedList //

#endif // MYLINKEDLIST_H
