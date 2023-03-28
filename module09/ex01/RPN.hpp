#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>

class RPN
{
public:
    RPN();
    RPN &operator=(RPN const &rhs);
    RPN(RPN const &rhs);
    ~RPN();
    void print_stack(std::stack<int> &s);
    int execute_stack(std::string &str);

private:
    std::stack<int> stack;
};