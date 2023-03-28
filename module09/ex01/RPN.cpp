#include "RPN.hpp"

RPN::RPN() {};

RPN::RPN(RPN const &rhs) { *this = rhs; }

RPN &RPN::operator=(RPN const &rhs)
{
    stack = rhs.stack;
    return (*this);
}

RPN::~RPN(){};

void RPN::print_stack(std::stack<int> &s)
{
    if (s.empty())
        return;
    int element = s.top();
    s.pop();
    print_stack(s);
    std::cout << element << " ";
    s.push(element);
}

int RPN::execute_stack(std::string &str)
{

    std::stack<int> stack;
    std::istringstream iss(str);
    std::string token;

    while (iss >> token) // get next token after each space or tab
    {
        print_stack(stack);
        std::cout << "\n";
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2) // if there is not at least 2 numbers before operation
            {
                std::cout << "2 numbers is needed before doing some operation" << std::endl;
                return 0;
            }
            int nb2 = stack.top();
            stack.pop();
            int nb1 = stack.top();
            stack.pop();
            if (token == "+")
            {
                stack.push(nb1 + nb2);
                std::cout << "Push " << nb1 << " + " << nb2 << std::endl;
            }
            else if (token == "-")
            {
                stack.push(nb1 - nb2);
                std::cout << "Push " << nb1 << " - " << nb2 << std::endl;
            }
            else if (token == "*")
            {
                stack.push(nb1 * nb2);
                std::cout << "Push " << nb1 << " * " << nb2 << std::endl;
            }
            else if (token == "/")
            {
                if (nb2 == 0)
                {
                    std::cerr << "You can't divide by 0" << std::endl;
                    return 0;
                }
                stack.push(nb1 / nb2);
                std::cout << "Push " << nb1 << " / " << nb2 << std::endl;
            }
        }
        else
        {
            int number;
            std::istringstream(token) >> number;
            if (number > 9 || number < 0)
            {
                std::cout << "Number must be in range of 0-9" << std::endl;
                return (0);
            }
            stack.push(number);
            std::cout << "Push " << number << " to Stack" << std::endl;
        }
    }
    if (stack.size() != 1) // if RPN is well formated, only one last element in the stack, the result
    {
        std::cout << "Bad RPN Format" << std::endl;
        return 0;
    }
    return stack.top();
}
