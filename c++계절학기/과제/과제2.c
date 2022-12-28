//#include "stdio.h"
//#include "stdlib.h"
//
//struct item{
//    int score;
//    struct item* next;
//};
//
//void append(struct item ** ppS,int num){
//    struct item *temp = (struct item*)malloc(sizeof(struct item));
//    temp->score=num;
//    temp->next=NULL;
//    if(*ppS==NULL){
//        *ppS=temp;
//    }else {
//        struct item *t=*ppS;
//        while (t->next != NULL) {
//            t = t->next;
//        }
//        t->next = temp;
//    }
//}
//
//void del_end(struct item** ppS){
//    printf("마지막 노드 삭제\n");
//    if(*ppS==NULL){
//        printf("삭제할 노드가 없습니다.\n");
//    }else {
//        struct item *temp = *ppS;
//        struct item *before = *ppS;
//        while (temp->next != NULL) {
//            before = temp;
//            temp = temp->next;
//        }
//        if(*ppS==temp){
//            *ppS=NULL;
//            return;
//        }
//        before->next = NULL;
//        free(temp);
//    }
//}
//
//void printAll(struct item * pS){
//    if(pS==NULL){
//        printf("인쇄할 노드가 없다.\n");
//    }else {
//        for (;pS; pS = pS->next) {
//            printf("%d", pS->score);
//            printf("->");
//        }
//        printf("END\n");
//    }
//}
//
//int main(){
//    struct item *pStart=0;
//    int data;
//    while (scanf("%d",&data)==1){
//        append(&pStart,data);
//    }
//    printAll(pStart);
//    del_end(&pStart);
//    printAll(pStart);
//}