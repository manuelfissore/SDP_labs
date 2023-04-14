//
// Created by Manuel Fissore on 29/03/23.
//
#include <vector>
#ifndef ES3_STACK_H
#define ES3_STACK_H

using namespace std;
class Stack {
    private:
        vector <int> myStack;
    public:
        Stack();
        void push(int e);
        int pop();
        void visit();
        int getSize();
        bool isEmpty();
};


#endif //ES3_STACK_H
