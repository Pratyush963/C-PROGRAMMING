#include <stdio.h>
int main()
{
    float distance,m,f,i,c;
    scanf("%f",&distance);
    m=distance*1000;
    f=distance*(3280.84);
    i=distance*(39370.1);
    c=distance*100000;
    printf("%.2f m \n%.2f ft \n%.2f in \n%.2f cm \n",m,f,i,c);       
    return 0;
}
