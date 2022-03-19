/**
 * @file Josephus-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief backjoon - 1158
 * @version 0.1
 * @date 2022-03-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bitset>
#include <iostream>
#include <list>

int main(int argc, char *argv[])
{
    int N;
    int K;

    std::cin >> N >> K;

    std::list<int> josephus;
    for (int i = 1; i <= N; i++)
    {
        josephus.push_back(i);
    }
    
    std::cout << "<";
    auto it = josephus.begin();
    int c;
    while (1)
    {
        for (c = 0; c < K - 1; c++) {
            it++;
            if(it == josephus.end())
                it = josephus.begin();
        }
        std::cout << *it;
        it = josephus.erase(it);
        if(josephus.size() == 0)
            break;
        std::cout << ", ";
        if(it == josephus.end())
            it = josephus.begin();
    }
    std::cout << ">" << std::endl;
    return 0;
}
