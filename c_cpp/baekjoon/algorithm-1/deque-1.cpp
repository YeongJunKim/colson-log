/**
 * @file deque-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-03-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <deque>
#include <iostream>

std::deque<int> deque;

bool operator==(const std::string &str1, const std::string &str2)
{
    if (str1.compare(str2) == 0)
        return true;
    return false;
}

int main(int argc, char *argv[])
{
    int n;
    std::string cmd;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> cmd;
        if (cmd == "push_front")
        {
            int x;
            std::cin >> x;
            deque.push_front(x);
        }
        else if (cmd == "push_back")
        {
            int x;
            std::cin >> x;
            deque.push_back(x);
        }
        else if (cmd == "pop_front")
        {
            if (deque.size() == 0)
                std::cout << "-1" << std::endl;
            else
            {
                std::cout << deque.front() << std::endl;
                deque.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (deque.size() == 0)
                std::cout << "-1" << std::endl;
            else
            {
                std::cout << deque.back() << std::endl;
                deque.pop_back();
            }
        }
        else if (cmd == "size")
        {
            std::cout << deque.size() << std::endl;
        }
        else if (cmd == "empty")
        {
            if (deque.empty())
                std::cout << "1" << std::endl;
            else
                std::cout << "0" << std::endl;
        }
        else if (cmd == "front")
        {
            if (deque.size() == 0)
                std::cout << "-1" << std::endl;
            else
                std::cout << deque.front() << std::endl;
        }
        else if (cmd == "back")
        {
            if (deque.size() == 0)
                std::cout << "-1" << std::endl;
            else
                std::cout << deque.back() << std::endl;
        }
    }
    return 0;
}