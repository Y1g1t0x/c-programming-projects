#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,sayi3,sayi4,ortalama;
	
	printf("4 adet sayi giriniz: ");
	scanf("%d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4);
	
	ortalama = (sayi1 + sayi2 + sayi3 + sayi4)/4;
	
	printf("Girdiginiz sayilarin aritmetik ortalamasi: %d",ortalama);
	
	
	return 0;
}