#include<stdio.h>
#include<conio.h>

int armstrong(int x);

void main()
{
	int sayi,t;
	printf("Sayiyi giriniz : ");
	scanf_s("%d",&sayi);
	
	t=armstrong(sayi);
	
	if (sayi==t)
	{
		printf("Girilen sayi armstrong sayisi");
	}
	else
	{
		printf("Girilen sayi armstrong sayisi degil..");
	}
	getch();
}

int armstrong(int x)
{
	int a,b=0;
	while (x>0)
	{
		a=x%10;
		b = b+(a*a*a);
		x=x/10;
	}
	return b;
} 
