/*
  Evaluation Of postfix Expression in C++
  Input Postfix expression must be in a desired format.
  Operands must be integers and there should be space in between two operands.
  Only '+'  ,  '-'  , '*' and '/'  operators are expected.
*/
#include<iostream>
#include<stack>
#include<string>

class PostFix{

 private:

  // Function to verify whether a character is numeric digit.
  bool IsNumericDigit(char C)
  {
    if(C >= '0' && C <= '9') return true;
    return false;
  }



 public:

  int evaluatePostFix(std::string expr){

    std::stack<int> S;

    for (auto i = 0; i < expr.length(); i++) {
        if (IsNumericDigit(expr[i])) {
            std::string temp;
            while (IsNumericDigit(expr[i])) {
                temp.push_back(expr[i]);
                i++;
            }
            S.push(std::stoi(temp));
            continue;
        }

        if (expr[i] == ' ')
            continue;

        int x = S.top();
        S.pop();
        int y = S.top();
        S.pop();
        switch (expr[i])
        {

            case '+':
                S.push(x + y);
                break;
            case '*':
                S.push(x * y);
                break;
            case '/':
                S.push(y / x);
                break;
            case '-':
                S.push(y - x);
                break;
        }

    }
     
    return S.top();
    }
};