#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char islem;
int sayi1,sayi2;

printf("Islem sec (+,-,/,*): ");
scanf("%c",&islem);

printf("Iki adet sayi giriniz: ");
scanf("%d %d",&sayi1,&sayi2);

printf("Islem = %c\n",islem);
printf("1.sayi = %d\n2.sayi = %d\n",sayi1,sayi2);

switch(islem){
	case '+': printf("\nSonuc:%d",sayi1+sayi2); break;
	case '-': printf("\nSonuc:%d",sayi1-sayi2); break;
	case '*': printf("\nSonuc:%d",sayi1*sayi2); break;
	case '/': printf("\nSonuc:%d",sayi1/sayi2); break;
	
	
	
	
}






	return 0;
}