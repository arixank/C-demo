#include <stdio.h>

void main()
{
    int age;
    printf("Hello welcome to voting simulation \n");
    printf("\nHey , what's your age ? \n");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("You're eligible to vote\n");
    }
    else
    {
        printf("You're not eligible to vote!!");
    }
}