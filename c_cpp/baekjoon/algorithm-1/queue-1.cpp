/**
 * @file queue-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 10845
 * @version 0.1
 * @date 2022-03-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <queue>

std::queue<int> q;

int main(int argc, char *argv[])
{
    int n;

    std::cin >> n;

    std::string cmd;

    for (int i = 0; i < n; i++)
    {
        std::cin >> cmd;

        if (cmd.compare("push") == 0)
        {
            int p;
            std::cin >> p;
            q.push(p);
        }
        else if (cmd.compare("pop") == 0)
        {
            if (q.size() < 1)
                std::cout << "-1" << std::endl;
            else
            {
                std::cout << q.front() << std::endl;
                q.pop();
            }
        }
        else if (cmd.compare("size") == 0)
        {
            std::cout << q.size() << std::endl;
        }
        else if (cmd.compare("empty") == 0)
        {
            if (q.empty())
                std::cout << "1" << std::endl;
            else
                std::cout << "0" << std::endl;
        }
        else if (cmd.compare("front") == 0)
        {
            if (q.size() < 1)
                std::cout << "-1" << std::endl;
            else
                std::cout << q.front() << std::endl;
        }
        else if (cmd.compare("back") == 0)
        {
            if (q.size() < 1)
                std::cout << "-1" << std::endl;
            else
                std::cout << q.back() << std::endl;
        }
    }

    return 0;
}