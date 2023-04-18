#include <iostream>

/* Feladat */
int divisible(int a, int b)
{
    int sum;

    for (int i = a; i <= b; i++) 
    {   
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    std::cout << divisible(3, 100);
    return 0;
}