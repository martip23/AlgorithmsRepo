// Created by Greg LaKomski on 2/21/19.
//


#include<iostream>
#include<cmath>
#include<cstdio>
#include <stack>

class VerifyParens{

 public:


    bool areParanthesisBalanced(std::string expr) {

        std::stack<char> s;
        std::stack<char> auxStack;
        char temp;

        for (char x : expr) {
            if ((x == '(') || (x == '{') || (x == '['))
                s.push(x);

            else if ((x == ')') || (x == '}') || (x == ']')) {
                if (s.empty())
                    return false;

                if (x == ')') {
                    x = s.top();
                    s.pop();
                    if (x == '{' || x == '[')
                        return false;
                }
                if (x == '}') {
                    x = s.top();
                    s.pop();
                    if (x == '[' || x == '(') {
                        return false;
                    }
                }
                if (x == ']') {
                    x = s.top();
                    s.pop();
                    if (x == '(' || x == '{')
                        return false;
                }
            }
        }
        return s.empty();
    }

};
