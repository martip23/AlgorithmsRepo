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
    /**
     * Written by Lakomski, do not edit
     */
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
    // there might be a case where num1 < num2 so set sizeForCalc to largest

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
/**
 * No >1 digit multiplication involved!
 */
  std::string gradeSchoolMult( std::string num1, std::string num2) {

      //If either num is 0, return 0
      if (stoi(num1.substr(0, 1)) == 0 || stoi(num2.substr(0, 1)) == 0) {
          return "0";
      }

      /**
       * Reverse those bad boys, remember their size.
       */
      auto num1r = num1;
      reverse(num1r.begin(), num1r.end());

      auto num2r = num2;
      reverse(num2r.begin(), num2r.end());

      auto lenNum1 = num1.size();
      auto lenNum2 = num2.size();

      // List of strings to hold sub products as they are created.
      std::vector<std::string> subProducts;
      // Holds subproduct before pushing to vector
      std::string subProduct = "";
      // Holds final product
      std::string finalProduct = "0";

      for (auto i = 0; i < lenNum1; i++) {

          // Make sure subproducts list is clear for next row 1 number
          subProducts.clear();
            for (auto j = 0; j < lenNum2; j++) {

                // Clear subproduct for next row 2 pass
                subProduct.erase();

                // Multiply first (last in reversed int) number
                auto tempProduct = stoi(num1r.substr(i,1)) * stoi(num2r.substr(j,1));
                // If no carry, just put at end
                if (tempProduct < 10) {
                    subProduct.push_back('0' + tempProduct);
                    }
                // Else, push both.
                else {
                    // Add to last place
                    subProduct.push_back('0' + tempProduct % 10);
                    // Add to last place + 1
                    subProduct.push_back('0' + tempProduct/10);
                }
                // Push result of subProduct to subProducts list
                subProducts.push_back(subProduct);
            }

            // Unreverse the numbers, pad with 0s, then add to final product
            for (auto j = 0; j < lenNum2; j++) {
                reverse(subProducts.at(j).begin(), subProducts.at(j).end());
                auto numToAdd = subProducts[j];
                std::string stringPadding (i+j, '0');
                numToAdd += stringPadding;
                finalProduct = gradeSchoolAdd(finalProduct, numToAdd);
            }
      }
      return finalProduct;
  }
};
 