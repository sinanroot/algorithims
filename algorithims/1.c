#include<stdio.h>
#define N 10
int tamsayilar[N] = {1, 6, 9, 88, -5, 42, -73,
99, 3, 5};
int search(int a) {
int i;
for(i=0; i<N; i++) {
if(a == tamsayilar[i]) {
return 1;
}
}
return 0;
}
int main(void) {
int n;
for(n=1; n<50; n++) {
if(search(n) == 1) {
printf(ā%d dizide vardir.\nā, n);
}
else {
printf(ā%d dizide yoktur.\nā, n);
}
}
getch();
return 0;
}