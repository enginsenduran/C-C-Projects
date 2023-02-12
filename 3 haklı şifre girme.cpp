#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main()
 {
int sifre=0;
char hak=0
;

tekrar:
printf("programin calismasi icin sifreyi giriniz=");
scanf("%d",&sifre);

while (sifre==12345)
{printf("program calisiyor"); 

break;
}

if(sifre!=12345)
{hak++;
printf("Sifre yanlistir.\n");
};
if(hak>=3) exit(0);
goto tekrar;

}

