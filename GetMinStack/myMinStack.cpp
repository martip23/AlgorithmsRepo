// written by Greg Lakomski 2/19/2019
#include <iostream>
#include <stack>
#include <climits>  // for INT_MAX


class Solution{

 private:
  std::stack<int> mainStack;
  std::stack<int> Aux;

 public:

  int getMin(std::stack<int> & myStack){

    return Aux.top();

  }

  void push(std::stack<int> & myStack, int element){

    mainStack.push(element);
    Aux.push(element);

  }


  int pop(std::stack<int> & myStack){


    auto returnVal = mainStack.top();
    mainStack.pop();
    Aux.pop();
    return returnVal;

  }


  bool isEmpty(std::stack<int> & myStack){

      return myStack.empty();

  }

};
