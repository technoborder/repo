#include <stdio.h>
#include <string.h>
#include <mcheck.h>
#include <stdlib.h>
#define N 5
int cmp(const void* x1, const void* x2){
	char* xx1=* (char * const *) x1;
	char* xx2=* (char * const *) x2;
  return ( strlen(xx1) - strlen(xx2) );              
}
int main(int argc, char **argv)
{
	char **mas;
	char buf[1024];
	mas = (char**)malloc(sizeof(char*)*N);
	printf("Введите пять строк:");
	for (int i=0; i<N;i++){
		scanf("%s", buf);
		int len = strlen(buf);
		mas[i] = (char*)malloc(sizeof(char)*len);
		strcpy(mas[i],buf);
	}
	qsort(mas, N, sizeof(char*), cmp);
	printf("\n");
	for (int i=0; i<N;i++){
		printf("%s\n", mas[i]);
	}
	for (int i=0; i<N; i++){
		free(mas[i]);
		}
	free(mas);
	return 0;
}
