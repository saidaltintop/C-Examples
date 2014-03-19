#include <stdio.h>
#include <conio.h>

int sumdigit(int);

void main()
{
	int sayi,t;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	t=sumdigit(sayi);
	printf("Girilen sayinin rakamlar toplami = %d",t);
	getch();
}

int sumdigit(int x)
{
	int a,toplam=0;
	while (x>0)
	{
		a=x%10;
		toplam=toplam+a;
		x=x/10;
	}
	return toplam;
}
