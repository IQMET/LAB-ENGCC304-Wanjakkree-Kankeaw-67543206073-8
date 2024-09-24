#include <stdio.h>

int main() {
    int N;

    printf ( "Enter N\n" ) ;
    scanf ( "%d" , &N ) ; 
    int array[N] ;

    for ( int i = 0; i < N; i++ ) {
        printf ( "Enter value[%d]\n" , i ) ;
        scanf ( "%d" , &array[i] ) ;
    }

    printf ( "Output:\n" ) ;
    printf ( "Index:\n" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "%d ", i );
    }

    printf ( "\nArray:" ) ;
    for ( int i = 0 ; i < N ; i++ ) {

        if (array[i]==2) {
            printf ( "2 " ) ;
        }
        if (array[i]%2==0) {
            printf( "# " ) ;
        } 
        else printf( "%d " , array[i] ) ;  
    }

    return 0;
}//end main function
