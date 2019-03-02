//
//


#include<iostream>
#include<cmath>
#include<cstdio>
#include<stack>

class DeleteMid{

 public:

  void deleteMid(std::stack<int> &mystack, int n, int curr=0){

      int tempVar;

                  // If stack is empty or all items
                  // are traversed
      if ((curr == n/2) || mystack.empty()) {
          mystack.pop();
          return;
      }
                  // Remove current item
      else {
          tempVar = mystack.top();
          mystack.pop();
      }
                  // Remove other items
      deleteMid(mystack, n, ++curr);

                  // Put all items back except middle
      mystack.push(tempVar);


  }
};