/**
 * @author colson
 * @email dud3722000@naver.com
 * @create date 2022-01-03 23:49:16
 * @modify date 2022-01-03 23:49:16
 * @desc [test1.h]
 */
#include <stdio.h>

#ifdef __cplusplus
    extern "C" {
#endif 

int test(int input)
{
    return -input;
}

#ifdef __cplusplus
    }
#endif
