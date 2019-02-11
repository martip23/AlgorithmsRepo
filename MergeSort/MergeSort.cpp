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

    auto outsize = a.size() + b.size();
    std::vector<int> out(outsize, 0);

    ----- your code here ----
    
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
          
          mergeSort();

  }


};
