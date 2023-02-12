#include <stdio.h>
#include <windows.h>
main()
{
int t=0;
while(t<=20)
{
	t++;
	Sleep(1000);
	printf("t=%d",t);
	if(t<=8){
	printf("Yesil\n");
	}
	if(t>8&&t<=10){
	printf("Sari\n");
}
	if(t>10&&t<=20){
	printf("Kirmizi\n");
}
if(t>19)t=0;
}
}
