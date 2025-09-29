
#include <stdio.h>

int main()
{   
    int num1, num2, num3;

    printf("Enter your first number\n");
    scanf("%d", &num1);

    printf("Enter your second number\n");
    scanf("%d", &num2);

    printf("Enter your third number\n");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The first number is the largest number\n");
        }
        else
        {
            printf("The third number is the largest number\n");
        }
    }
    else  
    {
        if (num2 > num3)
        {
            printf("The second number is the largest number\n");
        }
        else
        {
            printf("The third number is the largest number\n");
        }
    }

    return 0;
}
