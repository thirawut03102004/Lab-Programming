#include <stdio.h>

void go( int ***p, int **z ) {
    *p = z; 
}

int main() {
    int b = 10;
    int c = 20;
    int *m = &b;
    int *n = &c;
    int **a;

    go( &a, &m );
    printf( "%d %p %p %p\n", **a, *a, a, &a );

    go( &a, &n );
    printf( "%d %p %p %p\n", **a, *a, a, &a );

    return 0;
}