//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct item {
//    int score;
//    struct item* next;
//};
//
//
//void append(struct item ** ppS, int num) {
//    struct item* p = (struct item*)malloc(sizeof(struct item));
//    p->score = num;
//    if (*ppS == NULL) {
//        *ppS = p;
//    }else {
//        struct item* temp = *ppS;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = p;
//    }
//}
//
//void del_end(struct item** ppS) {
//    if (*ppS == NULL) {
//        printf("인쇄할 노드가 없습니다.");
//    }
//    else{
//        struct item* temp = *ppS;
//        struct item* before = *ppS;
//        while (temp->next != NULL) {
//            before = temp;
//            temp = temp->next;
//        }
//        before->next = NULL;
//        free(temp);
//    }
//}
//
//void print_all(struct item* pS) {
//    printf("TOP:");
//    for (; pS; pS = pS->next) {
//        printf("%d->", pS->score);
//    }
//    printf("END\n");
//}
//int main() {
//    struct item* pStart = 0;
//    int data;
//    while (scanf("%d", &data) == 1) {
//        append(&pStart, data);
//    }
//
//    print_all(pStart);
//    del_end(&pStart);
//    print_all(pStart);
//    return 0;
//}