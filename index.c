#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char INPUT[7];
    int OUTPUT[6];
    scanf("%s",INPUT);
    for (int i=0;i<6;i++) {
        OUTPUT[i] = INPUT[i]-INPUT[i+1];
        if (OUTPUT[i]>=0) {
            continue;
        } else {
            OUTPUT[i] = (~OUTPUT[i])+1;
        }
    }
    for(int i=0;i<6;i++) {
        printf("%d",OUTPUT[i]);
    }
    printf("\n");
    return 0;
}