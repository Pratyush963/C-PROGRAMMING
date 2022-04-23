#include <stdio.h>
int main()
{
    int m,n,a,t;
    scanf("%d %d",&m,&n);
    a=m*n;
    if(a%2==0)
        t=a/2;
    else
        t=(a/2)+1;
    printf("%d",t);        
    return 0;
}
