#include <stdio.h>

main()
{
int sayi,enb,i,enk;

printf("Sayi gir:"); scanf("%d",&sayi); enb=sayi; enk=sayi;

for(i=0;i<4;i++)
{
printf("Sayi gir:");scanf("%d",&sayi); if(sayi>enb)enb=sayi;
if (sayi<enk)enk=sayi;
}

printf("Girilen en buyuk sayi=%d\n",enb);
printf("Girilen en kucuk sayi=%d",enk);
}
