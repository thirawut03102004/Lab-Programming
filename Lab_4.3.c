#include <stdio.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void SaveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void GoNext1( struct studentNode *walk ) ;

int main() {
    struct studentNode s1, s2, s3, s4 ;
    struct studentNode *start, *now1, **now2 ;
    
    start = &s1 ;
    SaveNode( &s1, "one", 6, 'M', 3.11 ) ;

    s1.next = &s2 ;
    SaveNode( &s2, "two", 8, 'F', 3.22 ) ;

    s2.next = &s3 ;
    SaveNode( &s3, "three", 10, 'M', 3.33 ) ;

    s3.next = &s4 ;
    SaveNode( &s4, "four", 12, 'F', 3.44 ) ;
    
    s4.next = NULL ;

    now1 = start ;
    now2 = &start ;

    GoNext1( now1 ) ;
    printf( ", %s", now1->name ) ;

    return 0 ;
}

void SaveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    int i = 0 ;
    while ( n[i] != '\0' && i < 19 ) {
        child->name[i] = n[i] ;
        i++ ;
    }
    child->name[i] = '\0' ;
    
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}

void GoNext1( struct studentNode *walk ) {
    if ( walk != NULL && walk->next != NULL ) {
        walk = walk->next ;
        printf( "%s", walk->name ) ;
    }
}