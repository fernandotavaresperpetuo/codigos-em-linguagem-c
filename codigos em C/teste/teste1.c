#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fib(int x)
{
    if(x <= 0){
        return x;
        }else{
            return fib(x-1) + fib(x-2);
            }
}
