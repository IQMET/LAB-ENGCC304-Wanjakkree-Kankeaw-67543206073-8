#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Enter value:");
    scanf("%d", &N);
    if (N%2== 0) {
        printf("Series:");
        for (i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    } else {
        printf("Series:");
        for (i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    }
    return 0;
}//end function
