#include <iostream>
#include <vector>
#include "MergeSort.cpp"
#include <iterator>
#include <sstream>
int main() {

  std::vector<int> inputData {3,1,5,8,5,6,3,9,4};
  std::vector<int> answer (inputData);
  Solution mySolution;
  answer = mySolution.mergeSort(inputData);

  std::ostringstream vts;
  
  // copy each element of the vector except last into the ostringstream with "," delimiter

  std::copy(answer.begin(), answer.end()-1,std::ostream_iterator<int>(vts,","));
  
  // deal with the last element to avoid a trailing "," using back() which is last
  vts << answer.back();
  
  // convert ostringstream to string and print it out
  std::cout << vts.str() ;

  return 0;
}