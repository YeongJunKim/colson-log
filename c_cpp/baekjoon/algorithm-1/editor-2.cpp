/**
 * @file editor-2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief baekjoon - 1406
 * @version 0.1
 * @date 2022-03-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <algorithm>
#include <bitset>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main(int argc, char *argv[])
{
    std::string str;
    int n;

    std::cin >> str >> n;

    std::list<char> editor;

    for (int i = 0; i < str.size(); i++)
    {
        editor.push_back(str[i]);
    }

    auto it = editor.end();

    for (int i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;
        if (c == 'L' && it != editor.begin())
            it--;
        else if (c == 'D' && it != editor.end())
            it++;
        else if (c == 'B' && it != editor.begin())
        {
            it--;
            it = editor.erase(it);
        }
        else if(c == 'P')
        {
            char p;
            std::cin >> p;
            editor.insert(it, p);
        }
    }

    std::copy(editor.begin(), editor.end(),std::ostream_iterator<char>(std::cout));
    std::cout << std::endl;

    return 0;
}