#include <stdio.h>

int boy,i=0,toplam=0;

float ort;

main()
{
don:
printf("%d. kisinin Boyunu gir:",i+1);scanf("%d",&boy);
toplam=toplam+boy;
i++;
if (i<5)goto don;
ort=toplam/5;

printf("Boy ortalamalari = %.2f",ort);
}
