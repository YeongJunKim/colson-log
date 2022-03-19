/**
 * @file stack-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief backjoon - 10828
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>

template <typename T> class Stack
{
  public:
    Stack() = default;
    ~Stack() = default;

  private:
    std::vector<T> _stack;

  public:
    void push(int data)
    {
        _stack.push_back(data);
    }
    int pop()
    {
        if (_stack.empty())
            return -1;
        int ret = _stack.at(_stack.size()-1);
        _stack.pop_back();
        return ret;
    }
    int size()
    {
        return _stack.size();
    }
    int top()
    {
        if (_stack.empty())
            return -1;
        return _stack.at(_stack.size()-1);
    }
    int empty()
    {
        return static_cast<int>(_stack.empty());
    }
};

int main(int argc, char *argv[])
{
    Stack<int> stack;
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
            std::cout << stack.pop() << std::endl;
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
            std::cout << stack.top() << std::endl;
        }
    }

    return 0;
}