#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int Number ;
    int random ;
    int n ;
    int low = 1 ;
    int high = 100 ;
    int x = 100 ;

    srand(time(NULL)) ;
    printf( "Do you want to play game (1=play,-1=exit)" ) ;
    scanf("%d", &n) ;

    if (n == 1)
    {
        random = rand() % 100 + 1 ;
        printf( "Score=%d\n" , x) ;
        do
        {
            printf ( "Guess the winning number (%d-%d)\n" , low , high ) ;
            scanf ( "%d" , &Number) ;

            if (Number != random){
                x = x - 10 ;
                if (Number > random)
                {
                    printf ( "Sorry, the winning number is LOWER than %d. (Score=%d)\n" , Number, x ) ;
                    high = Number - 1 ;
                }//end if
                else if (Number < random)
                {
                    printf ( "Sorry, the winning number is HIGHER than %d. (Score=%d)\n" , Number, x ) ;
                    low = Number + 1 ;
                }//end else if
                if ( x <= 0)
                {
                    printf ( "nah you lose\n" ) ;
                    break ;
                }//end if
            }//end if
        } while (Number != random) ;
        //end do while
        printf ( "The winning number is %d. Score this game: %d\n" , random, x) ;
    }// end if

    return 0 ;
}// end main function
