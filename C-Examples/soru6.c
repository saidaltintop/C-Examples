#include<stdio.h>
#include<conio.h>
void ogrenciEkleme();
void basarıNotu();
struct ogrenci
{
int ogrNo;
int arasınav;
int ödev;
int proje;
int finall;
};
void main()
{
        int cevap=1;
        while(cevap!=3)
        {
        printf("\n1==>Kisi Ekleme\n");
        printf("2==>Basari Notu goruntuleme\n");
        printf("3==>Cikis\n");
        printf("Cevap:");
        scanf("%d",&cevap);
        if(cevap==1)
        ogrenciEkleme();
        else if(cevap==2)
        basarıNotu();
        else if(cevap==3)
                break;
        else
                printf("Yanlis bir sayi girdiniz...");
        }
}
void ogrenciEkleme()
{
        char cevap='e';
        struct ogrenci bilgi;
        FILE*dd;
        dd=fopen("CENG101.txt","a");
        if(dd==NULL)
                printf("Dosya acilamadi...");
        else
        {
                do
                {
                        printf("Ogrenci Numarasi:");
                        scanf("%d",&bilgi.ogrNo);
                        printf("Arasinav Notu:");
                        scanf("%d",&bilgi.arasınav);
                        printf("Final Notu:");
                        scanf("%d",&bilgi.finall);
                        printf("Proje Notu:");
                        scanf("%d",&bilgi.proje);
                        printf("Odevler:");
                        scanf("%d",&bilgi.ödev);
                        fprintf(dd,"%d\t%d\t%d\t%d\t%d\n",bilgi.ogrNo,bilgi.arasınav,bilgi.finall,bilgi.proje,bilgi.ödev);
                        printf("Kisi Kaydedildi...");
                        printf("Devam etmek istiyor musunuz?(e/h)\n");
                        cevap=getche();
                } while (cevap=='E' || cevap=='e');
                fclose(dd);
        }
}
void basarıNotu()
{
        struct ogrenci bilgi;
        float bNotu[100],gec1;
        int i=0,ogrNumber[100],gec2;
        FILE*dd;
        dd=fopen("CENG101.txt","r");
        if(dd==NULL)
                printf("Dosya bulunamadi...");
        else
        {
                printf("Ogrenci No\tBasari Notu\n");
                while(!feof(dd))
                {
                        fscanf(dd,"%d\t%d\t%d\t%d\t%d\n",&bilgi.ogrNo,&bilgi.arasınav,&bilgi.finall,&bilgi.proje,&bilgi.ödev);
                        bNotu[i]=(float)(bilgi.arasınav*0.25)+(bilgi.finall*0.25)+(bilgi.proje*0.25)+(bilgi.ödev*0.25);
                        ogrNumber[i]=bilgi.ogrNo;
                        i++;
                }
                for (int k = 0; k<i-1; k++)
                {
                        for (int j = 0;j<i-1-k; j++)
                        {
                                if(bNotu[j]>bNotu[j+1])
                                {
                                        gec1=bNotu[j];
                                        bNotu[j]=bNotu[j+1];
                                        bNotu[j+1]=gec1;
                                        gec2=ogrNumber[j];
                                        ogrNumber[j]=ogrNumber[j+1];
                                        ogrNumber[j+1]=gec2;
                                }
                        }
                }
                for (int k = 0; k<i; k++)
                {
                        printf("%d\t\t%5.2f\n",ogrNumber[k],bNotu[k]);
                }
                
                fclose(dd);
        }
}
