#ifndef _stack_h_
#define _stack_h_
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "stack.h"
typedef int  DataType;
typedef struct StackNode{
                    DataType data;
                    struct StackNode *next
}StackNode;
typedef struct{
                    StackNode *top;
                    int a;
}LinkStack;

LinkStack* InitStack();                          //初始化链栈
int StackEmpty(LinkStack *S);                    //判断空栈
void Push(LinkStack *S, DataType x);             //元素x进栈
void Pop(LinkStack *S);                          //出栈
DataType StackTop(LinkStack *S);                 //取栈顶元素
int size(LinkStack *S);                          //求栈的元素个数
int priority(char x);                            //求优先级
double compute(double x, double y, char op);


#endif
