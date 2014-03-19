#include<stdio.h>
#include<conio.h>

float fahrenheit(int);

void main()
{
	float c;
	printf("Centigrade olarak sicaklik giriniz : ");
	scanf_s("%f",&c);
	printf("Fahrenheit olarak sicaklik : %4.2f F",fahrenheit(c)); 

	getch();
}

float fahrenheit(int x)
{
	return (1.8*x)+32;
}
