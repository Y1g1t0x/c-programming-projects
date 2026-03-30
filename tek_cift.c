#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int sayi;

printf("Bir sayi giriniz: ");
scanf("%d",&sayi);

switch(sayi%2){
	case 1: printf("Sayiniz tektir"); break;
	case 0: printf("Sayiniz cifttir"); break;
	
}



	return 0;
}