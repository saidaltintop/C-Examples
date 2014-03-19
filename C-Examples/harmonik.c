#include <stdio.h>
#include <conio.h>

float harmonik(float,float);

void main()
{
	float a,b;
	printf("Bir sayi giriniz : ");
	scanf_s("%f",&a);
	printf("Bir sayi daha giriniz : ");
	scanf_s("%f",&b);

	printf("Girilen sayilarin harmonik ortalamasi : %f",harmonik(a,b));
	getch();
}

float harmonik(float x,float y)
{
	float t;
	t=(2*x*y)/(x+y);
	return t;
} 
