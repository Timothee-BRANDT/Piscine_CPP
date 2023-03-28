#include "RPN.hpp"

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cout << "Invalid parameters. Please use this format -> ./RPN \"7 7 * 7 -\"";
    return 1;
  }
  else
  {
    RPN stack;
    std::string str = argv[1];
    int result = stack.execute_stack(str);
    std::cout << "Result -> " << result << std::endl;
  }
  return 0;
}
