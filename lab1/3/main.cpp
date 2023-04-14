#include <iostream>
#include "Stack.h"


int main() {
    Stack stack;
    stack.push(4);
    stack.push(6);
    stack.visit();
    stack.pop();
    stack.visit();
    std::cout<< stack.isEmpty()<<endl;
    std::cout<< stack.getSize()<<endl;
}
