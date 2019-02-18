#include <iostream>
#include <vector>

void binSearch (std::vector<int> a, int &missingNum);

int main() {

    std::vector<int> A {0,1,2,6,9,11,15};

    //Brute Force
    for (int i = 0; i < 32; i++) {
        if (A.at(i) != i)
            std::cout << "The smallest missing element is " << A.at(i) << std::endl;
    }

    auto aSize = A.size();
    auto mid = aSize/2;
    int missingNum = aSize/2;

    binSearch(A, missingNum);

    return missingNum;
}

void binSearch (std::vector<int> a, int &missingNum) {
    if (a.at(missingNum) > missingNum) {
        auto aSize = a.size();
        auto mid = aSize/2;
        missingNum += aSize/2;
    }


}