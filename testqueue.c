#include "queue.h"

int main() {
        {
        LinkQueue queue, *q=&queue;
        fInitQueue(q);
        printf("\n*****链队列实验测试结果*****\n");
        fPush(q, 3);
        fPush(q, 6);
        fPush(q, 9);
        fPush(q, 12);
        fPop(q);
        fPop(q);
        fPop(q);
        fPush(q, 333);
        fPush(q, 666);
        fPush(q, 999);
        printf("最终链队列中元素位置如下：\n");
        printf("*******************************\n");
        printf("*                             *\n");
        printf("* 队头  ");
        fprint(q);
        printf("  队尾 *\n");
        printf("*                             *\n");
        printf("*******************************\n");
        printf("队头元素为：%d\n", fFront(q));
        printf("队尾元素为：%d\n", fBack(q));
        printf("队列长度为：%d\n", Length(q));
        }
        {
        printf("\n");
        PriQueue *b = CreateQueue();
        srand(time(0));
        printf("*******************************优先队列实验结果**********************************\n");
        printf("将下列20个数加入优先队列，并进行从小到大排序：  \n");
        printf("*********************************************************************************\n");
        printf("*                                                                               *\n");
        printf("*   ");
        for (int i = 0; i<20; i++){
                int t=rand() %200;
                printf("%d ", t);
                sPush(b, t);
        }
        printf(" *\n");
        printf("*                                                                               *\n");
        printf("*********************************************************************************\n");
        printf("\n");
        printf("出队列的顺序为：\n");
        printf("*********************************************************************************\n");
        printf("*                                                                               *\n");
        printf("  小 ");
        while (!sEmpty(b)) {
                printf("%d ", sFront(b));
                sPop(b);

        }
        printf("  大 \n");
        printf("*                                                                               *\n");
        printf("*********************************************************************************\n");

        }
       {
               printf("----------双端队列实验结果------------\n");
               Dequeue *H = InDequeue();
               H->g = 0;
               Push_back(H, 1);
               Push_front(H, 2);
               Push_back(H, 3);
               Push_front(H, 4);
               Push_front(H, 5);
               Push_front(H, 6);
               Push_back(H, 7);
               Push_back(H, 8);
               Pop_front(H);
               Pop_back(H);
               printf("最终双端队列中元素位置如下：\n");
               printf("****************************\n");
               printf("*                          *\n");
               printf("* 左端  ");
               print(H);
               printf("  右端 *\n");
               printf("*                          *\n");
               printf("****************************\n");
               printf("左端元素：%d\n", front(H));
               printf("右端元素：%d\n", back(H));
               printf("队内元素个数为:%d\n", size(H));
               return 1;
       }
}
