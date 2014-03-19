#include <stdio.h>
#include <conio.h>
 
void mükemmelsayıyaz(int);
int main()
{ 
    int son;

    printf("1 ile kac arasinda mukemmel sayi ariyorsunuz : ");
    scanf("%d", &son);
    mükemmelsayıyaz(son);
    getch();
    return 0;
}
void mükemmelsayıyaz(int x)
{
	int tam_bölen_toplamı;
    for(int i=1;i<x;i++)
	{
		tam_bölen_toplamı=0;

		for(int j=1;j<i;j++)
		{ 
			if(i%j==0) 

				tam_bölen_toplamı+=j;
		}

		if(tam_bölen_toplamı==i)

			printf("     %d\n",tam_bölen_toplamı);
	}
}
