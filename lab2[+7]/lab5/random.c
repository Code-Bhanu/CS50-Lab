#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int lower = 25 , upper = 35;
    srand(time(NULL));
    number = (rand() % (upper - lower +1)) + lower;
    printf("%d\n", number);
}