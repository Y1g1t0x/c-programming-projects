#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,sayi3,max,min;
	
	printf("Uc tane sayi giriniz: ");
	scanf("%d %d %d",&sayi1 ,&sayi2 ,&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3){
		max = sayi1;
	}else if(sayi2>sayi1 && sayi2>sayi3){
		max = sayi2;
	}else{
		max = sayi3;
	}
	
	if(sayi1<sayi2 && sayi1<sayi3){
		min=sayi1;
	}else if(sayi2<sayi1 && sayi2<sayi3){
		min=sayi2;
	}else{
		min=sayi3;
	}
	
	printf("\nEn buyuk deger %d\n\n",max);
	printf("En kucuk deger %d\n",min);
	
	
	return 0;
}