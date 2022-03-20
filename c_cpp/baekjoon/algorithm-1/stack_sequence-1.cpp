/**
 * @file stack_sequence-1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-03-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stack>
#include <vector>

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> vt;
    std::stack<int> st;

    int input[100000] = {
        0,
    };

    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    for (int i = 0; i < n; i++)
    {
        st.push(i+1);
        vt.push_back('+');
        
        
        
    }


    return 0;
}