//
// Created by Greg LaKomski on 2/8/19.
//


#include<iostream>
#include<cmath>
#include<cstdio>
#include <vector>
class Solution{

 private:

 std::vector<int> mergeCountInv(std::vector<int> a, std::vector<int> b, int & numInv) {

     auto aSize = a.size();
     auto bSize = b.size();
     auto outsize = aSize + bSize;
     std::vector<int> out;

     auto aPtr = 0;
     auto bPtr = 0;

     for (auto i = 0; i < outsize; i++) {


         if (a.at(aPtr) <= b.at(bPtr)) {
             out.push_back(a.at(aPtr));
             aPtr++;

             // If at end of loop, add the rest of items in b and return
             if (aPtr == aSize) {
                 for (;bPtr < bSize; bPtr++)
                     out.push_back(b.at(bPtr));
                 return out;
             }

         }
         else {
             out.push_back(b.at(bPtr));
             bPtr++;

             numInv += ((outsize/2) - aPtr);

             if (bPtr == bSize) {
                 for (;aPtr < aSize; aPtr++)
                     out.push_back(a.at(aPtr));
                 return out;
             }

         }
     }

     return out;

  }


 public:


  std::vector<int> cntInv(std::vector<int> input, int & numInv){

      std::vector<int> out;

      if(input.size()<=1){
          return input;
      }

      auto inputHalfSize = input.size()/2;
      std::vector<int> leftHalf(input.begin(),input.begin() + inputHalfSize);
      std::vector<int> rightHalf(input.begin() + inputHalfSize, input.end());

      return mergeCountInv(cntInv(leftHalf, numInv), cntInv(rightHalf, numInv), numInv);

  }
};