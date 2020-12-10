#ifndef _queue_h_
#define _queue_h_
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#define MaxSize 500
#include "queue.h"
typedef int dataType;
typedef struct node{
        dataType data;
        struct node *next;
}node;
typedef struct {
        struct node *front, *rear; int size;
}LinkQueue;
typedef struct{
        dataType data[MaxSize]; int a;
}PriQueue;
typedef struct Node{
        dataType data;
        struct Node *up,*down;int g;
}Dequeue;
void fInitQueue();
int fEmpty();
void fPush();
void fPop();
dataType fFront();
dataType fBack();
int Length();
PriQueue * CreateQueue();
int sEmpty();
void sPush();
void sPop();
dataType sFront();
void fprint();
Dequeue * InDequeue();
int Empty();
void Push_front();
void Push_back();
void Pop_front();
void Pop_back();
dataType front();
dataType back();
int size();
void print();

#endif
