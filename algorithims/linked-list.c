struct Node {
int data;
struct Node* next;
};
struct Node* head = NULL;

void insert(int a) {
struct Node* t = (struct Node*) malloc(sizeof(struct Node));
t->data = a;
t->next = head;
head = t;
}

void delete(){
if(head != NULL) {
struct Node *t = head;
head = head->next;
free(t);
}
}


void traverse(){
struct Node *t = head;
while(t != NULL){
printf(“%d “ , t->data);
t = t->next;
}
}