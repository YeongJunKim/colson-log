/**
 * @file parenthesis_string.cpp
 * @author colson (dud3722000@naver.com)
 * @brief backjoon - 9012
 * @version 0.1
 * @date 2022-03-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;
        int calc = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str.at(i) == '(')
                calc++;
            else if (str.at(i) == ')')
                calc--;
            if (calc < 0)
            {
                break;
            }
        }
        if (calc == 0)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}