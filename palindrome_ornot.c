#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if(x < 0)
    {
        return false;
    }

    long num1=0, num2=0, y = x;
    while(y != 0)
    {
        num1 = y%10;
        num2 = num2*10+num1;
        y = y/10;
    }
    
    if(num2 == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
