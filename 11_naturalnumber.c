//recursive function to calculate the sum of first n natural numbers
#include <stdio.h>
int naturalno(int n)
{
    if (n<=1)
    {
            return n;
    }
    else{
        return n + naturalno(n - 1);
    }
}


int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("sum of first %d natural number is %d",num,naturalno(num));
    return 0;
}