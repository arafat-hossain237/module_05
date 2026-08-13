#include <stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int digital=x/1000;
    if(digital%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
    
}