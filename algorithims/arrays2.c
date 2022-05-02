#include <stdio.h>
#define N 5
int main(void) {
int dizi1[N] = {1,2,3,4,5};
int dizi2[N] = {1,2};
int i;
for(i=0; i<N; i++) {
printf(“dizi1[%d] = %d\t”, i, dizi1[i]);
printf(“dizi2[%d] = %d\n”, i, dizi2[i]);
}
getch();
return 0;
}