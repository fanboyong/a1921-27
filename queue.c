#include "queue.h"



//初始化
void fInitQueue(LinkQueue *q) {
        q->front = (node*)malloc(sizeof(node));
        q->rear = q->front ;
        q->size = 0;


}
//判断k是否为空
int fEmpty(LinkQueue *q) {

        return q->front == NULL;

}

//元素x进队列
void fPush(LinkQueue *q, dataType x) {
        node *p = (node *)malloc(sizeof(node));
        p->data = x; p->next = NULL;
        if(fEmpty(q))
                q->front=q->rear=p;
                else{
                q->rear->next = p;
                q->rear = p;
                printf("入队元素为：%d\n", p->data);
                q->size++;
        }


}
//出队列
void fPop(LinkQueue *q) {
        node *p = q->front->next;
        q->front->next = p->next;
        printf("出队元素为：%d\n",p->data);
        q->size--;
        free(p);
        return;
}
//取队头元素
dataType fFront(LinkQueue *q) {
        return q->front->next->data;
}
//取队尾元素
dataType fBack(LinkQueue *q) {
        return q->rear->data;
}
//求链队长度
int Length(LinkQueue *q){

        return q->size;
}
//初始化优先队列
PriQueue* CreateQueue(){
PriQueue *b = (PriQueue *)malloc(sizeof(PriQueue));
        b->a = 0;
        return b;
}
//判断空
int sEmpty(PriQueue *b) {
        return b->a == 0;
}
//进队列
void sPush(PriQueue *b, dataType x) {
        if (b->a == MaxSize) exit(1);
        int j = b->a-1;
        while (j>=0 && b->data[j]>x) {
                b->data[j+1] = b->data[j];
                j--;
        }
        b->data[j+1] = x;
        b->a++;
}

void sPop(PriQueue *b) {
if (sEmpty(b)) exit(1);
for (int i = 1; i<b->a; i++)                                                                                            
b->data[i-1] = b->data[i];
        b->a--;
}
//取队头
dataType sFront(PriQueue *b){
if (sEmpty(b)) exit(1);
        return b->data[0];
}

void fprint(LinkQueue *q){
         node *p = q->front->next;
        while (p){
                printf("%d ", p->data);
                p = p->next;
        }
}
Dequeue * InDequeue(){
        Dequeue *h;
        h = (Dequeue*)malloc(sizeof(Dequeue));
        h->up = h->down = h ;
        return h;
}
int Empty(Dequeue *H){
        return H->down == H;
}
void Push_front(Dequeue *H, dataType x){
        struct Node *s = (struct Node*)malloc(sizeof(struct Node));
        s->data = x;                                                                                                            s->up = H;
        s->down = H->down;
        H->down->up = s;
        H->down = s;
        printf("元素%d从左端入队\n", s->data);
        H->g++;
}
void Push_back(Dequeue *H, dataType x){
        struct Node *s = (struct Node*)malloc(sizeof(struct Node));
        s->data = x;
        s->up = H->up;
        s->down = H;
        H->up->down = s;
        H->up= s;
        printf("元素%d从右端入队\n", s->data);
        H->g++;
}
void Pop_front(Dequeue *H){
        if (Empty(H)) exit(1);
        struct  Node *p = H->down;
        p->down->up = H;
        H->down = p->down;
        printf("元素%d从左端出队\n", p->data);
        H->g--;
        free(p);
}
void Pop_back(Dequeue *H){
        if(Empty(H)) exit(1);
        struct Node *p = H->up;
        p->up->down = H;
        H->up = p->up;
        printf("元素%d从右端出队\n", p->data);
        H->g--;
        free(p);
        }
dataType front(Dequeue *H){
        if(Empty(H)) exit(1);
        return H->down->data;
}
dataType back(Dequeue *H){
        if(Empty(H)) exit(1);
        return H->up->data;
}
int size(Dequeue *H) {
        return H->g;
}
void print(Dequeue *H){
        struct Node *p = H->down;
        while (p != H){
                printf("%d ", p->data);
                p = p->down;
        }
}
