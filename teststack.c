#include "stack.h"


int main(int argc,char **argv) {
        LinkStack *S = InitStack();
        Push(S, 10);
        Push(S, 20);
        Push(S, 30);
        Push(S, 40);
        Push(S, 50);
        Push(S, 60);
        Push(S, 70);
        Pop(S);
        Pop(S);
        Push(S, 80);
        printf("栈有%d个元素，栈顶的元素为：%d\n", size(S), StackTop(S));
        counter();
}
