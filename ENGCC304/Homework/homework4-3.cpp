/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
  -------------------- 
    Test case:
        2 3 1
    Output:
        Answer = 6
-------------------
    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>
int main() {
    int a, b, c ;
    int ans ;
    scanf( "%d %d %d", &a, &b, &c ) ;
    ans = a + b + c ;
    printf( "\n Answer = %d \n", ans ) ;
    return 0 ;
}//end function