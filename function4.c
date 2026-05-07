#include <stdio.h>
#include <stdbool.h>

bool prime(int n);
int main(void)
{
    int number = 0, inspect = 0;

    printf("enter number :");
    scanf("%d", &number);

    if (number == 2)
    {
        inspect = false; // 是質數
    }

    inspect = prime(number);

    if (inspect == true)
    {
        printf("%d is not prime ", number);
    }
    else
    {
        printf("%d is  prime ", number);
    }
}
bool prime(int n)
{
    int x = 2, y = 0;
    while (x < n)
    {
        y = n % x;
        while (y == 0 && x != n)
        {
            return true; // 不是質數
        }
        x++;
    }
    return false; // 是質數
}
