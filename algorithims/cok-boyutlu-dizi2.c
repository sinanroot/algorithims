#include <stdio.h>
int main(void) {
int d[3][2][2] = {12,11,10,9,8,7,6,5,4,3,2,1};
int i, j, k;
for(i=0; i<3; i++) {
for(j=0; j<2; j++) {
for(k=0; k<2; k++) {
printf(ā%d\nā, d[i][j][k]);
}
}
}
getch();
return 0;
}