#include <stdio.h>
int main() 
{
    int amtgiven,billamt;
    scanf("%d\n%d",&amtgiven,&billamt);
    printf("Quotient:%d",(amtgiven/billamt));
    printf("\nRemainder:%d",(amtgiven%billamt));
    return 0;
}
