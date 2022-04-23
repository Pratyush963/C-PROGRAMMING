#include <stdio.h>
int main() 
{   
    int s,d,h,m,sc;
    scanf("%d",&s);
    d=s/86400;
    h=(s%86400)/3600;
    m=((s%86400)%3600)/60;
    sc=((s%86400)%3600)%60;
    printf("The Duration is %d days %d hours %d minutes %d seconds",d,h,m,sc);
    return 0;
}
