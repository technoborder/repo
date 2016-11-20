#include <stdio.h>
#include <string.h>
#include <mcheck.h>
#include <stdlib.h>
#define N 2
length = inp_str(char* string, int maxlen, int **n)
{   
	mtrace();
	char buf[1024];
	string = (char**)malloc(sizeof(char*)*N);
	for (int i=0; i<N;i++){
		scanf("%s", buf);
		int len = strlen(buf);
		string[i] = (char*)malloc(sizeof(char)*len);
		n[i]=i;
		strcpy(string[i],buf);
		return len;
	}
	}
void cmp(int maxlen, int length, int numder)
{
	
	}
void out_str(char* string, int length, int number)
{
	printf ('string',"\n",'length',"\n",'number')
	}
int main(int argc, char **argv)
{
	char **mas;
	int dlina = length;
	int **num;
	inp_str(&mas, sizeof(char), &num);
	out_str(&mas, dlina, &num);
	return 0;
}

