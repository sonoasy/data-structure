#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int  i;
    //시드값 시간에따라 변경
    srand(time(NULL));
    
    for (i = 0; i < 5; i++)
        printf("%d %d\n", i, rand());
    return 0;
}
