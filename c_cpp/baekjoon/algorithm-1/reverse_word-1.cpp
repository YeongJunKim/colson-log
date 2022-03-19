/**
 * @file reverse_word-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 9093
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <iterator>
#include <string>

int main(int argc, char *argv[])
{
    std::string str;
    std::cin >> str;

    for (auto rit = str.rbegin(); rit != str.rend(); rit++)
        std::cout << *rit;
    
    std::cout << std::endl;
    return 0;
}