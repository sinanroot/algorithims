#include <stdio.h>
#define N 6
int queue[N];
int front = 0, rear = 0, count = 0;
void enqueue(int a) {
if(count == N) {
printf(“Kuyrukta yer yoktur.\n”);
}
else {
queue[rear] = a;
rear ++;
if(rear == N) rear = 0;
count ++;
printf(“%d kuyruga eklendi.\n”, a);
}
}
void dequeue() {
if(count == 0) {
printf(“Kuyrukta eleman yoktur.\n”);
}
else {
int a = queue[front];
front ++;
if(front == N) front = 0;
count --;
printf(“%d kuyruktan cikarildi.\n”, a);
}
}