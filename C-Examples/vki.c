#include <stdio.h>
#include <conio.h>
#include <math.h>

float vkii(float,float);

void main()
{
        float boy,kilo;
        char cinsiyet;

        printf("\t\t\t\tHosgeldiniz!!\n");
        printf("\nCinsiyetiniz:");
        scanf("%c",&cinsiyet);
        getchar();
        printf("\nMetre cinsinden boyunuz:");
        scanf("%f",&boy);
        printf("\nKilonuz:");
        scanf("%f",&kilo);
       // vki=kilo/pow(boy,2);
		/*vkii(kilo,boy);*/
        switch (cinsiyet)
        {
        case 'e':
                {
					if (vkii(kilo,boy)<20.7)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (20.7<vkii(kilo,boy) && vkii(kilo,boy)<26.4)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (26.5<vkii(kilo,boy) && vkii(kilo,boy)<31.1)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vkii(kilo,boy)>31.2)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;

                }
        case 'E':
                {
                        if (vkii(kilo,boy)<20.7)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (20.7<vkii(kilo,boy) && vkii(kilo,boy)<26.4)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (26.5<vkii(kilo,boy) && vkii(kilo,boy)<31.1)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vkii(kilo,boy)>31.2)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        case 'k':
                {
                        if (vkii(kilo,boy)<19.1)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (19.1<vkii(kilo,boy) && vkii(kilo,boy)<25.8)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (25.9<vkii(kilo,boy) && vkii(kilo,boy)<32.2)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vkii(kilo,boy)>32.3)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        case 'K':
                {

                        if (vkii(kilo,boy)<19.1)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (19.1<vkii(kilo,boy) && vkii(kilo,boy)<25.8)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (25.9<vkii(kilo,boy) && vkii(kilo,boy)<32.2)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vkii(kilo,boy)>32.3)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        default:
                {
                break; 
                



                }
        }

        getch();



}

float vkii(float x,float y)
{
	return x/pow(y,2);
}
