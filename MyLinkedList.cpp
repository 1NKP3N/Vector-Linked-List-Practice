#include "MyLinkedList.h"

MyLinkedList::~MyLinkedList()
{
    std::cout << "Destructing MyLinkedList\n";
    Node* tmp = first;

    for (unsigned int i = 0; i < size(); i += 1) {
        // *********** IMPLEMENT
    }
    first = nullptr;
}

/*
MyLinkedList::MyLinkedList(const MyLinkedList& other)
{
    //copy ctor
}
*/

/*
 * Add new value to end of the list
 */
void MyLinkedList::push_back(int value) {
    //std::cout << "MyLinkedList push_back(" << value << ")\n";

    if (size() == 0) {  // empty list, add first element
        first = Node::makeNode(value, nullptr, nullptr);

        if (first == nullptr) {
            std::cout << "*** Out of memory: MyLinkedList.push_back() ***\n";
            return;
        }

        // first is an address to a block of memory
        first->setNext(first);
        //(*first).setNext(first);
        first->setPrev(first);
    }
    else { // existing list, add to end of list
        //                          ###      prev        next
        // ************ IMPLEMENT
    }
    m_size += 1;
}

/*
 *  Not yet implemented
 */
int MyLinkedList::pop_back() {
    m_size -= 1;
    return 1;
}

/*
 * Print as: [data,data,...,data]
 */
std::string MyLinkedList::toString() const {
    std::string str{"["};
    Node* tmp = first;

    for (unsigned int i = 0; i < size(); i += 1) {
        str += (std::to_string(tmp->value()) + ",");
        tmp = tmp->next();
    }

    if (size() > 0) { // remove trailing comma
        str.pop_back();
    }

    str += "]";
    return str;
}

void MyLinkedList::insert(int index, int value){
    
}

int MyLinkedList::at(int index){
    return index;
}

int MyLinkedList::front(){
    return size();
}

int MyLinkedList::back(){
    return size();
}

void MyLinkedList::erase(int index){
    
}


