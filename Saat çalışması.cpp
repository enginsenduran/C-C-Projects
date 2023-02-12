#include <stdio.h>
#include <windows.h>

main()


{

char saat,dak,sn;

saat=12;dak=28;sn=20;
	
	
	
while(1)
{
sn++;
Sleep (1000);
if(sn>59){sn=0;dak++;}
if(dak>59){dak=0;saat++;}
if(saat>23){saat=0;dak=0;sn=0;}

printf("Saat= %d : %d : %d \r ",saat,dak,sn);

 
 } 



}
