#include<stdio.h>
/*Determine Whether a Temperature is Below 
or Above the Freezing Point.*/
int main()
{
	int temp;
	printf("Verilen sicaklik donma noktasinin altinda mi ustunde mi?\n");
	printf("Sicaklik degeri giriniz:");
	scanf("%d", &temp);

	if(temp<0)
	  printf("Sicaklik donma derecesinin altinda");
	else
	  printf("Sicaklik donma derecesinin uzerinde");
return 0;
	
}

