#include "listg.h"
#include "listg.c"
 int main(int argc, char **argv)
{
     List *list = (List *)malloc(sizeof(List));
     initList(list);
     addHead(list, 5);
     addHead(list, 10);
     addHead(list, 15);
     addHead(list, 20);
     addTail(list, 18);
     listinsert(list, 1,100);
     listdelete(list, 5);
     empty(list);
     dispList(list);
     getdatalist(list, 1);
     printf("链表长度: %d\n", getLength(list));
     yuesefu();
     return 0;     
}
