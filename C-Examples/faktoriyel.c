#include <stdio.h>
#include <conio.h>
 
long faktoriyel (int);

void main ()
{
  int sayi;
  printf("Bir sayı giriniz : ");
  scanf("%d",&sayi);
  if (sayi<0)
  {
		printf("Lutfen pozitif sayi giriniz...");
  }
  else
  {
	  printf("\n\n%d nin faktoriyeli %d dir",sayi,faktoriyel(sayi));
  }
  
  getch();
}
long faktoriyel(int x)
{
	if (x<=1)
	{
	return 1 ;
	}
	else
	{
		x=x*faktoriyel(x-1);
		return(x);
	}
}
