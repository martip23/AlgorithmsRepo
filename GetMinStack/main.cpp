#include <iostream>
#include <stack>
#include "myMinStack.cpp"


int main(){

    Solution mysolution;

    std::stack<int> myStack;

    mysolution.push(myStack,6);
    mysolution.push(myStack,5);
    mysolution.push(myStack,4);
    mysolution.push(myStack,3);
    mysolution.push(myStack,2);
    mysolution.push(myStack,1);
    auto min = mysolution.getMin(myStack);
    std::cout << min << std::endl;
    mysolution.pop(myStack);
    min = mysolution.getMin(myStack);
    std::cout << min << std::endl;

}