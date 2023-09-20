/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/
#include <stdio.h>
int main () {
    int N , hold = 0;
    int arr_old[ ] = { 9, 2, 6, 1, 7 } ;
    int arr_ip[ 100 ] , arr_new [ 100 ] ;



    printf( "Enter new element of Array :\n" ) ;
    scanf ( "%d", &N ) ;

    for (int i = 0 ; i < N ; i++) {
        printf( "Input :\n" ) ;
        scanf( "%d", &arr_ip[ i ] ) ;
    }
    
    for (int  i = 0 ; i < 5 ; i++) { 
        arr_new[ i ] = arr_old[ i ] ;
    }
    
    for (int i = 0 ; i < N ; i++) {
        arr_new[ i + 5 ] = arr_ip[ i ] ;
    }
    
    for ( int i = 0 ; i < N + 5 ; i++ ) {
        for ( int j = i + 1 ; j < N + 5 ; j++ ) {
            if ( arr_new[ i ] > arr_new[ j ] ) {
                hold = arr_new[j] ;
                arr_new[ j ] = arr_new[ i ] ;
                arr_new[ i ] = hold ;
            }
        }
    }
    printf( "Old Array:" ) ;
    for (int i = 0 ; i < 5 ; i++) {
        printf( " %d",arr_old[ i ] ) ;
    }

    printf( "\n" ) ;

    printf( "New Array:" ) ;

    for (int i = 0 ; i < N + 5 ; i++ ) {
        printf( " %d",arr_new[ i ] ) ;
    }
    
    return 0 ;

}