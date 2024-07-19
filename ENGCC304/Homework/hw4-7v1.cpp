/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/

#include <stdio.h>
int main() {
    float cc ;
    printf( "\n\nEnter C : " ) ;
    scanf( "%f", &cc ) ;
    printf( "%.2f 'C = %.2f 'F \n\n", cc, ( 1.80 * cc ) + 32 ) ;
    return 0 ;
}//end function