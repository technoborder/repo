#include <stdio.h>
#include <string.h>
#include <mcheck.h>
#include <stdlib.h>
struct ofis
 {
	char family[20];
	int year;
	int num;
	int oklad;
	}; 
int cmp(const void* x1, const void* x2)
{
	struct ofis * xx1=* (struct ofis  ** ) x1;
	struct ofis * xx2=* (struct ofis  ** ) x2;
  return   xx1->year - xx2->year;           
}
int main(void)
{   int N;
	printf("Введите количество работников\n");
	scanf("%i", &N);
	struct ofis Zp[N];
	printf("Введите данные о работнике\n");
	for (int i=0; i<N;i++)
	{
		printf("\n");
		printf("%i", (i+1));
		printf(" работник\n");
		printf("Введите фамилию работника\n");
		scanf("%s",Zp[i].family);
	    printf("Введите год рождения работника\n");
		scanf("%i",&Zp[i].year);
		printf("Введите номер отдела работника\n");
		scanf("%i",&Zp[i].num);
		printf("Введите отклад работника\n");
		scanf("%i",&Zp[i].oklad);
     }
    qsort(&Zp, N, sizeof(struct ofis), cmp);
	printf("\n");
     for (int i=0; i<N;i++)
	{
		
		printf("%s\n",Zp[i].family);
		printf("%i\n",Zp[i].year);
		printf("%i\n",Zp[i].num);
		printf("%i\n",Zp[i].oklad);
		printf("\n");
     }
}
