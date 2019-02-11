#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include "stdlib.h"

// for both of these functions you are not allowed to either multiply or add more than
// one number with another single number

class Solution {

 private:
  // takes two non reversed strings representing long ints and adds them returning a string for the product
  std::string gradeSchoolAdd(std::string &num1, std::string &num2) {

    // check for either of the numbers being zero and just return the correct sum

    if (stoi(num1.substr(0, 1)) == 0 && stoi(num2.substr(0, 1)) == 0) {
      return "0";
    }
    if (stoi(num1.substr(0, 1)) == 0 && stoi(num2.substr(0, 1)) != 0) {
      return num2;
    }
    if (stoi(num1.substr(0, 1)) != 0 && stoi(num2.substr(0, 1)) == 0) {
      return num1;
    }

    // OK we know that none of the numbers are zeros

    // reverse the strings

    auto num1r = num1;
    reverse(num1r.begin(), num1r.end());

    auto num2r = num2;
    reverse(num2r.begin(), num2r.end());

    auto lenNum1 = num1.size();
    auto lenNum2 = num2.size();

    ///check the lengths and left pad with zeros so that they are equal
    // required so is indexable

    auto sizeForCalc = (lenNum1 > lenNum2)?lenNum1:lenNum2;

    if (lenNum1 > lenNum2) {
      for (auto j = 0; j < (lenNum1 - lenNum2); j++) {
        num2r.push_back('0');
      }
    }
    if (lenNum2 > lenNum1) {
      for (auto j = 0; j < (lenNum2 - lenNum1); ++j) {
        num1r.push_back('0');
      }
    }

    /// sequentially add the digits

    auto carry = 0;
    auto subtotal = 0;
    auto digit = 0;
    std::string answer{""}; // the sum of the numbers

    for (auto i = 0; i < sizeForCalc; ++i) {
      subtotal = (stoi(num1r.substr(i, 1)) + stoi(num2r.substr(i, 1))) + carry;
      carry = subtotal / 10;
      digit = subtotal % 10;
      char temp = '0' + digit;
      answer.push_back(temp);
    }
    /// you have finished the last digit now take care of the carry
    if (carry != 0) { answer.push_back('0' + carry); }

    reverse(answer.begin(), answer.end());
    return answer;
  }


 public:


  // takes two non reversed strings representing long ints and multiplies them returning a string for the product

  std::string recIntMult( std::string num1, std::string num2) {

      std::string result = "0";

    // if the size of the two numbers to multiply is 1, use * and return result

    if( num1.size() == 1){
      return std::to_string(stoi(num1) * stoi(num2));
    }
    else{
        auto num1Length = num1.length();
        auto num2Length = num2.length();

        auto a = num1.substr(0, num1Length/2);
        auto b = num1.substr(num1Length/2);
        auto c = num2.substr(0, num2Length/2);
        auto d = num2.substr(num2Length/2);

        auto ac = recIntMult(a, c);
        auto bd = recIntMult(b, d);
        auto ad = recIntMult(a, d);
        auto bc = recIntMult(b, c);

        for (auto i = 0; i < num1Length; i++)
            ac.push_back('0');

        std::string abcd = gradeSchoolAdd(ad, bc);

        for (auto i = 0; i < num1Length/2; i++)
            abcd.push_back('0');

        result = gradeSchoolAdd(ac, bd);
        result = gradeSchoolAdd(result, abcd);
    }

    return result;

  }

};

