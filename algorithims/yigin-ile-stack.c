#include<stdio.h>
#define N 10
int stack[N];
int top = -1;
void push(int a) {
if(top == N-1) {
printf(“Yiginda yer yoktur.\n”);
}
else {
stack[++ top] = a;
printf(“%d yigina eklendi.\n”, a);
}
}
int pop() {
if(top < 0) {
printf(“Yiginda eleman yoktur.\n”);
return -1;
}
else {
int a = stack[top --];
printf(“%d yigindan cikarildi.\n”, a);
return a;
}
}
int peek() {
if(top < 0) {
printf(“Yiginda eleman yoktur.\n”);
return -1;
}
else {
printf(“%d yiginin tepe noktasindadir.\n”, stack[top]);
return stack[top];
}
}