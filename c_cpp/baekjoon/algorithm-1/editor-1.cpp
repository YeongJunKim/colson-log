/**
 * @file editor-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 1406
 * @version 0.1
 * @date 2022-03-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main(int argc, char *argv[])
{
    std::string str;
    int n;

    std::cin >> str;
    std::cin >> n;


    int cursorPos = str.size();
    for (int i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;
        if (c == 'L')
        {
            if (cursorPos > 0)
                cursorPos -= 1;
        }
        else if (c == 'D')
        {
            if (cursorPos != str.size())
                cursorPos += 1;
        }
        else if (c == 'B')
        {
            if(cursorPos > 0)
            {
                
            str.erase(cursorPos-1, 1);
            if(cursorPos-1 == str.size())
                cursorPos = str.size();
            else
                cursorPos = cursorPos - 1;
            }
            
        }
        else if (c == 'P')
        {
            std::string add;
            std::cin >> add;
            str.insert(cursorPos, add);
            cursorPos += 1;
        }

    }
    std::cout << str << std::endl;

    return 0;
}