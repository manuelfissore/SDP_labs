//
// Created by Manuel Fissore on 29/03/23.
//

#include "Stack.h"
#include <iostream>


Stack::Stack() = default;;

int Stack::getSize() {
    return (int) myStack.size();
};
bool Stack::isEmpty() {
   return myStack.empty();
}
 int Stack::pop() {
     int tmp = myStack.back();
     myStack.pop_back();
     return tmp;
}

void Stack::push(int e) {
    myStack.push_back(e);
}

void Stack::visit() {
    for (auto e: myStack)
        std::cout << e << " ";
    std::cout << endl;
}