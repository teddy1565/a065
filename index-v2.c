#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char INPUT[7];
    scanf("%s",INPUT);
    int temp;
    for (int i=0;i<6;i++) {
        temp = INPUT[i]-INPUT[i+1];
        if (temp>=0) {
            printf("%d",temp);
        } else {
            printf("%d",(~temp)+1);
        }
    }
    printf("\n");
    return 0;
}