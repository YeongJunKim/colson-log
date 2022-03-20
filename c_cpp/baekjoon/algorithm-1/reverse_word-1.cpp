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
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
    int num;
    std::string str;
    std::stringstream ss;

    std::cin >> num;
    std::cin.ignore();
    for (int i = 0; i < num; i++)
    {
        // 버에 정수 값을 입력한 뒤 누른 엔터('\n')가 그대로 남아 있어 getline()에 들어가기 때문에 std::cin.ignore()함수를 사용

        getline(std::cin, str);
        std::stringstream ss(str);
        std::string s;

        while (std::getline(ss, s, ' '))
        {
            std::cout << "now: " << s << std::endl;
            for (auto it = s.rbegin(); it != s.rend(); it++)
                std::cout << *it;
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}