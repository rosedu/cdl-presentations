#include <stdio.h>
int main( )
{
    int a[]={1,2,3,4,5,6},p=0,q;
    for(q=0;q<6;q=q+1);
        p += a[q];
    q=0;
    while(q<6)
        printf("%d ",a[q]);
        q++;
    printf("%d ",p);
    return 1;
}
