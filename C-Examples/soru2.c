#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	char b;
	printf("Karakter ve adedini giriniz: ");
	scanf("%c%d",&b,&a);
	printf("\n");
	for(int i=1 ; i<a+1 ; i++){
		for(int k=1 ; k<i ; k++){
			printf(" ");
		}
	for(int j=a ; j>=i ; j--){
		printf("%c",b);
		}	
		printf("\n");
	    }
     getch();
}
