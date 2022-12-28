//1.메모리 동적 할당
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main()
//
//char* name_a;
//
//char* name_b;
//
//char buffer[20];
//
//int len;
//
//scanf("%s",&buffer);
//
//len = strlen(buffer);
//
//name_a = malloc(len);
//
//strcpy(name_a,buffer);
//
//
//scanf("%s",&buffer);
//
//len = strlen(buffer);
//name_b = malloc(len);
//strcpy(name_b,buffer);
//
//printf("%s\n",name_a);
//
//printf("%s\n",name_b);
//
//
//2.포인터 배열
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//	char *strptr[3];
//	char buf[80];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("%d번째 문자열 : ", i + 1);
//		scanf("%s", buf);
//
//		strptr[i] = (char *)malloc(sizeof(char) * strlen(buf)+1);
//		strcpy(strptr[i], buf);
//	}
//
//	for (i = 2; i >= 0; i--) {
//		printf("%s\n", strptr[i]);
//		free(strptr[i]);
//	}
//
//	return 0;
//}