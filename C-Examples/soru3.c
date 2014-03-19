#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<Windows.h>

float birincifonksiyon(float);
float ikincifonksiyon(float);
float üçüncüfonksiyon(float);

int main()
{
	float sayi;
	float a;
	char cevap;

	printf("\n\nBir sayi giriniz : ");
	scanf_s("%f",&sayi);

	if (sayi>=20)
	{
		a=birincifonksiyon(sayi);

		printf("Girilen degere göre islemin sonucu : %f",a);
	}

	if (sayi>10 && sayi<20)
	{
		a=ikincifonksiyon(sayi);

		printf("Girilen degere göre islemin sonucu : %f",a);
	}

	if (sayi>0 && sayi<10)
	{
		a=üçüncüfonksiyon(sayi);

		printf("Girilen degere göre islemin sonucu : %f",a);
		
	}

	if (sayi<0)
	{
		printf("Negatif sayi girmeyiniz");
		main();
	}

	printf("\n\nBaska bir islem yapmak istiyormusunuz(e/h) :");
	cevap=_getch();

	if (cevap=='e' || cevap=='E')
	{
		main();
	}
	if (cevap=='h' || cevap=='H')
	{
		exit(1);
	}
	return 0;
}

float birincifonksiyon(float x)
{
	float sonuc1=0;

	for (float i = 1; i <= x; i++)
	{
		sonuc1=sonuc1+(1/(2*i));
	}

	return sonuc1;

}
float ikincifonksiyon(float y)
{
	float sonuc2=0;

	for (int i = 0; i <= y; i++)
	{
		sonuc2=sonuc2+((2*i)+1);
	}

	return sonuc2;
}
float üçüncüfonksiyon(float z)
{

	if (z<=1)
	{
	return 1 ;
	}
	else
	{
		z=z*üçüncüfonksiyon(z-1);
		return(z); 
	}

	
}
