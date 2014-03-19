#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<Windows.h>
#include<string.h>

void main()
{

        int girilenSayi, kacSayi;
        char secim = ' ';
        int sayiList[BUFSIZ];
        int toplam = 0;
        float sonuc = 1;
        int carpim = 1;
        float sayi1,sayi2;
        char e1= ' ';
        for(;;)
        {
        printf("Islem Sec : ");        
        flushall();                
        secim = getchar();
        printf("Your selection : %c\n",secim);
        flushall();
        getchar();
        
                switch (secim)
                {
                case '+':
                        printf("Kac tane sayi ile islem yapilacak? : ");
                        scanf_s("%d",&kacSayi);
                        toplam=0;
                        for(int i = 0; i< kacSayi;i++)
                        {
                                printf("%d. sayiyi girin : ",i+1);
                                scanf_s("%d",&sayiList[i]);
                                toplam+=sayiList[i];
                        }
                        printf("Toplam : %d\n",toplam);
                        printf("Islem yapmak istiyor musunuz?(e yada h):");
                        
                        flushall();
                        scanf("%c",&e1);
                        if(e1=='e')
                        {
                                continue;
                        }
                        else if(e1=='h')
                        {
                                break;
                        }
                        else
                        {
                                printf("yanlisss");
                        }
                case '*':
                        printf("Kac tane sayi ile islem yapilacak? : ");
                        scanf_s("%d",&kacSayi);
                        carpim=1;
                        for(int i = 0; i< kacSayi;i++)
                        {
                                printf("%d. sayiyi girin : ",i+1);
                                scanf_s("%d",&sayiList[i]);
                                carpim*=sayiList[i];
                        }
                        printf("Toplam : %d\n",carpim);
                        printf("Islem yapmak istiyor musunuz?(e yada h):");
                        flushall();
                        scanf("%c",&e1);
                        if(e1=='e')
                        {
                                continue;
                        }
                        else if(e1=='h')
                        {
                                break;
                        }
                        else
                        {
                                printf("yanlisss");
                        }
                case '/':
                        printf("Birinci sayiyi giriniz : ");
                        scanf_s("%f",&sayi1);
                        printf("Ikininci sayiyi giriniz : ");
                        scanf_s("%f",&sayi2);
                        sonuc=1;
                        while(sayi2 == 0){
                                printf("Please add non-zero number as second...");
                                scanf_s("%f",&sayi2);
                        }
                        sonuc = sayi1 / sayi2;
                        printf("Sonuc : %f\n",sonuc);
                        printf("Islem yapmak istiyor musunuz?(e yada h):");
                        flushall();
                        scanf("%c",&e1);
                        if(e1=='e')
                        {
                                continue;
                        }
                        else if(e1=='h')
                        {
                                break;
                        }
                        else
                        {
                                printf("yanlisss");
                        }
                case '-':
                        printf("Birinci sayiyi giriniz : ");
                        scanf_s("%f",&sayi1);
                        printf("İkininci sayiyi giriniz : ");
                        scanf_s("%f",&sayi2);
                        sonuc=0;
                        sonuc = sayi1 - sayi2;
                        printf("Sonuc : %f\n",sonuc);
                        printf("Islem yapmak istiyor musunuz?(e yada h):");
                        flushall();
                        scanf("%c",&e1);
                        if(e1=='e')
                        {
                                continue;
                        }
                        else if(e1=='h')
                        {
                                break;
                        }
                        else
                        {
                                printf("yanlisss");
                        }
                default:

                        printf("Islem yapmak istiyor musunuz?(e yada h):");
                        flushall();
                        scanf("%c",&e1);
                        if(e1=='e')
                        {
                                continue;
                        }
                        else if(e1=='h')
                        {
                                break;
                        }
                        else
                        {
                                printf("yanlisss");
                        }
                }
        }



        getch();




}
