/**
 * @file reverse_world2-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 17413
 * @version 0.1
 * @date 2022-03-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
    std::string str;

    getline(std::cin, str);

    bool isTag = false;
    std::string s;
    
    for (auto it = str.begin(); it != str.end(); it++)
    {
        if (isTag)
        {
            if (*it == '>')
                isTag = false;
            std::cout << *it;
        }
        else
        {
            if (*it == '<')
            {
                if (s.size() > 0)
                {
                    for (auto sit = s.rbegin(); sit != s.rend(); sit++)
                        std::cout << *sit;
                    s.clear();
                }
                std::cout << "<";
                isTag = true;
            }
            else if (*it == ' ')
            {
                for (auto sit = s.rbegin(); sit != s.rend(); sit++)
                    std::cout << *sit;
                s.clear();
                std::cout << " ";
            }
            else
                s.push_back(*it);
        }
    }

    if (s.size() > 0)
        for (auto sit = s.rbegin(); sit != s.rend(); sit++)
            std::cout << *sit;

    std::cout << std::endl;

    return 0;
}