/**
 * @author colson
 * @email dud3722000@naver.com
 * @create date 2022-01-03 23:49:27
 * @modify date 2022-01-03 23:49:27
 * @desc [main.cpp]
 */
#include <iostream>

#ifdef TEST1
#include "test1.h"
#endif 
#ifdef TEST2
#include "test2.h"
#endif

int main(int argc, char *argv[])
{
    std::cout << "test: " << test(-1) << std::endl;

    return 0;
}
