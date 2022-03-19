/**
 * @file stack-2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief backjoon - 10828
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stack>

int main(int argc, char *argv[])
{
    std::stack<int> stack;

    std::string str;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        if (str.compare("push") == 0)
        {
            int data;
            std::cin >> data;
            stack.push(data);
        }
        else if (str.compare("pop") == 0)
        {
            if (stack.empty())
                std::cout << "-1" << std::endl;
            else
            {
                std::cout << stack.top() << std::endl;
                stack.pop();
            }
        }
        else if (str.compare("size") == 0)
        {
            std::cout << stack.size() << std::endl;
        }
        else if (str.compare("empty") == 0)
        {
            std::cout << stack.empty() << std::endl;
        }
        else if (str.compare("top") == 0)
        {
            if (stack.empty())
                std::cout << "-1" << std::endl;
            else
                std::cout << stack.top() << std::endl;
        }
    }
}