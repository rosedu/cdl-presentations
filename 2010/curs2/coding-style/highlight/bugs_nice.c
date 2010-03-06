#include <stdio.h>

int main( void )
{
    int a[ ] = { 1, 2, 3, 4, 5, 6 };
    int i;
    int sum = 0;

    for ( i = 0; i < 6; i++ )
    {
        sum += a[ i ];
    }

    i = 0;
    while ( i < 6 )
    {
        printf( "%d ", a[ i ] );
        i++;
    }

    printf( "%d ", sum );

    return 0;
}
