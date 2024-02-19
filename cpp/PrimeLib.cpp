// PrimeLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"


bool isPrime(int num)
{
    if (num == 0 || num == 1)
        return false;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
    return true;
}
