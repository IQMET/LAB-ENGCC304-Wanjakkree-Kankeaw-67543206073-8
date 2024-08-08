#include <stdio.h>

int main() {
    
    int P;
    char x;

    printf("hello\n");
    printf("please enter number only,\n");

    scanf( "%d" , &P);
    scanf( "%c" , &x);

    if(P>=80){
        x = 'A';
    }
    else if(P>=75){
        x = 'B';
    }
    else if(P>=70){
        x = 'b';
    }
    else if(P>=65){
        x = 'C';
    }
    else if(P>=60){
        x = 'c';
    }
    else if(P>=55){
        x = 'D';
    }
    else if(P>=50){
        x = 'd';
    }
    else if(P<=49){
        x = 'F';
    }
    switch (x){ 
        case 'A':
    printf("Grade A\n");
            break;
        case 'B':
    printf("Grade B+\n");
            break;
        case 'b':
    printf("Grade B\n");
            break;
        case 'C':
    printf("Grade C+\n");
            break;
        case 'c':
    printf("Grade C\n");
            break;
        case 'D':
    printf("Grade D+\n");
            break;
        case 'd':
    printf("Grade D\n");
            break;
        case 'F':
    printf("Grade F\n");
            break;
            
    }
}//end function