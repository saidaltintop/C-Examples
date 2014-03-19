#include<stdio.h>
#include<conio.h>

int binler(int);
int yuzler(int);
int onlar(int);
int birler(int);

void main()
{
	int sayi;
	printf("4 Basamakli bir sayi giriniz : ");
	scanf("%d",&sayi);
	if (sayi<1000 || sayi > 9999)
	{
		printf("Lutfen 4 Basamakli sayi giriniz!!!\a");
	}
	else
	{
		printf("\nBinler = %d",binler(sayi));
		printf("\n\nYuzler = %d",yuzler(sayi));
		printf("\n\nOnlar = %d",onlar(sayi));
		printf("\n\nBirler = %d",birler(sayi));
	}

	getch();
}

int binler(int x)
{
	return x/1000;
}
int yuzler(int x)
{
	int a;
	a=x % 1000;
	return a/100;
}
int onlar(int x)
{
	int a,b;
	a=x%1000;
	b=a%100;
	return b/10;
}
int birler(int x)
{
	return x%10;
}
