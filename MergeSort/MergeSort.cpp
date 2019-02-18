//
// Created by Greg LaKomski on 1/17/19.
// Completed by Patrick Martinez
//


#include<iostream>
#include<cmath>
#include<cstdio>
#include <vector>
using std::cout;
using std::endl;

class Solution{

 private:

  std::vector<int> merge(std::vector<int> a, std::vector<int> b) {

    auto aSize = a.size();
    auto bSize = b.size();
    auto outsize = aSize + bSize;
    std::vector<int> out;

    auto aptr = 0;
    auto bptr = 0;

    for (auto i = 0; i < outsize; i++) {


        if (a.at(aptr) <= b.at(bptr)) {
            out.push_back(a.at(aptr));
            aptr++;

            // If at end of loop, add the rest of items in b and return
            if (aptr == aSize) {
                for (;bptr < bSize; bptr++)
                    out.push_back(b.at(bptr));
                return out;
            }

        }
        else {
            out.push_back(b.at(bptr));
            bptr++;

            if (bptr == bSize) {
                for (;aptr < aSize; aptr++)
                    out.push_back(a.at(aptr));
                return out;
            }

        }
    }
    
    return out;

  }


 public:


  std::vector<int> mergeSort (std::vector<int> input){

    std::vector<int> out;

    if(input.size()<=1){
      return input;
    }

    auto inputHalfSize = input.size()/2;
    std::vector<int> leftHalf(input.begin(),input.begin() + inputHalfSize);
    std::vector<int> rightHalf(input.begin() + inputHalfSize, input.end());
          
          return merge(mergeSort(leftHalf), mergeSort(rightHalf));

  }


};
