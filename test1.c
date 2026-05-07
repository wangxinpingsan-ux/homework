#include <stdio.h>

int main(void)
{

    int b = 6, total = 0;
    int number[10] = {10, 78, 32,100,45,99};
    int max = number[0], min = number[0];

    printf("enter number (-1 to end ):");

    for (int i = 1; i < b; i++)
    {

        //max = number[0];
        if (number[i] > max)
        {
            max=number[i];
        }
        else if (number[i] < max)
        {
            
        }
        printf("max is %d\n", max);
    }

    for (int i = 1; i < b; i++)
    {

        if (number[i] < min)
        {
            min=number[i];
        }
        else if (number[i] > min)
        {
            
        }
        printf("min is %d\n", min);
    }
    return 0;
}