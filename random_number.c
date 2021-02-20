#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define min1 30
#define max1 59

#define min2 50
#define max2 80

#define min3 40
#define max3 100

int main(void) {
    int  i;
    FILE* fp = NULL;
    char name[20];
    int g1, g2, g3;
    fp = fopen("student-name.txt", "r");
    FILE* fp2 = NULL;
    fp2 = fopen("exam.txt", "w");
    
    srand(time(NULL));
    //값출력 배열 저장 대신 생성 뒤 바로 출력
    for (int i = 0; i < 10; i++) {
        fscanf(fp, "%s", &name);
        g1 = rand() % (max1 - min1 + 1) + min1;
        g2 = rand() % (max2 - min2 + 1) + min2;
        g3 = rand() % (max3 - min3 + 1) + min3;
        fprintf(fp2, "%s %d %d %d\n", name, g1, g2, g3);
    }
   

  



}
