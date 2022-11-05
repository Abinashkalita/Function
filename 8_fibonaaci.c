#include <stdio.h>
int fibonaaci(int num)
{
    //base conditions
    //num==0   ------->return 0
    //num==1   ------->return 1
    if (num==0){
        return 0;
    }
    else if (num==1){
        return 1;
    }
    else{
        return fibonaaci(num-1) + fibonaaci(num-2);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Fibonaaci series of %dth number is %d",num,fibonaaci(num));
    return 0;
}