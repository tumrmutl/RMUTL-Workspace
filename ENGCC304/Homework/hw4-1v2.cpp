/*
    แสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a


printf( "_ _ _ _", _, _, _, _) ; 
*/

#include <stdio.h>

int main() {
    
    int a = 10 ;
    float b = 20 ;
    char c[] = "Haha" ; //String
    char d = 'a' ;
    printf( "\n\n" ) ;

    printf( "%d %.1f %s %c", a, b, c, d ) ;

    printf( "\n\n" ) ;

    return 0 ;
}//end function