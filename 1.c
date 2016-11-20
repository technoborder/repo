#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<mcheck.h>
int cmp(const void* x1, const void* x2){
	char* xx1=* (char * const *) x1;
	char* xx2=* (char * const *) x2;
  return ( strlen(xx1) - strlen(xx2) );              
}
void vvod(char **str, int k){
	char buffer[1024];
	for (int x=0; x<k; x++){
		scanf(" %[^\n]",buffer);
		int len=strlen(buffer);
		str[x]=(char*)malloc(len*sizeof(char));
		strcpy(str[x], buffer);
	}
}
void vivod(char **str, int k){
	int dl;
	printf("Строки и количество элементов в строках:\n");
	for (int i=0; i<k; i++){
		dl=strlen(str[i]);
		printf("%s\n", str[i]);
		printf("%d\n", dl);
	}
}
void vivoditog(char **str, int k){
	int dl;
	printf("2 элемент строки и количество элементов в строках отсортированных:\n");
	for (int i=0; i<k; i++){
		dl=strlen(str[i]);
		printf("%c\n", str[i][1]);
		printf("%d\n", dl);
	}
}
int main(){
	int n;
	printf("Введите количество строк:\n");
	scanf("%d", &n);
	printf("Введите строки\n");
	char **str;
	str=(char**)malloc(n*sizeof(char*));
	vvod(str, n);
	vivod(str, n);
	qsort(str, n, sizeof(char*), cmp);
	vivoditog(str, n);
	for (int i=0; i<n; i++){
		free(str[i]);
		}
	free(str);
}
