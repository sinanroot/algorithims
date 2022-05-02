#include<stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* top = NULL;
void push(int a) {
struct Node* t = (struct Node*) malloc(sizeof(struct Node));
t->data = a;
if(top == NULL){
top = t;
top->next = NULL;
}
else {
t->next = top;
top = t;
}
printf(“%d yigina eklendi\n”, a);
}
int pop() {
if(top == NULL) {
printf(“Yiginda eleman yoktur\n”);
return -1;
}
else {
struct Node* t = top;
int a = t->data;
top = top->next;
printf(“%d yigindan cikarildi\n”, a);
free(t);
return a;
}
}
int peek() {
if(top == NULL) {
printf(“Yiginda eleman yoktur\n”);
return -1;
}
else {
printf(“%d yiginin tepe noktasindadir\n”, top->data);
return top->data;
}
}