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

typedef struct ofis Zp;
void read(Zp* zarplat)
{
		printf("Введите фамилию работника\n");
		scanf("%s",zarplat->family);
	    printf("Введите год рождения работника\n");
		scanf("%i",&zarplat->year);
		printf("Введите номер отдела работника\n");
		scanf("%i",&zarplat->num);
		printf("Введите отклад работника\n");
		scanf("%i",&zarplat->oklad);
}
void readst(Zp** zarplat, int count)
{
		for (int i=0; i<count;i++)
		{
		zarplat[i]=(Zp*)malloc(sizeof(Zp));
		read(zarplat[i]);
		}
}
void printfofis(Zp** zarplat, int count)
{
	for (int i=0; i<count;i++)
	{
		printf("Фамилия:");
		printf("%s\n", zarplat[i]->family);
		printf("Год рождения:");
		printf("%d\n", zarplat[i]->year);
		printf("Номер отдела:");
		printf("%d\n", zarplat[i]->num);
		printf("Оклад:");
		printf("%d\n", zarplat[i]->oklad);
	}
}
int cmp(const void *p1, const void *p2)
{
	Zp * zp1=*(Zp**)p1;
	Zp * zp2=*(Zp**)p2;
	return zp1->year - zp2->year;
}
int main(int argc, char **argv)
{
	int count=15;
	printf("Введите кол-во:");
	scanf("%i", &count);
	struct ofis** mas=(struct ofis**)malloc(sizeof(struct ofis)*2*count);
	readst(mas,count);
	qsort(mas, count, sizeof(Zp*), cmp);
	printfofis(mas, count);
	for (int i=0; i<count; i++)
	{
		free(mas[i]);
	}
	free(mas);
	return 0;
}

