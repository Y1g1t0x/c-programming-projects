#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int birinci,ikinci,ucuncu,i,sayi;
	
	birinci=1;
	ikinci=1;
	ucuncu=1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
    
    printf("1 1 ");


	for(i=1;i<=(sayi-2);i++){
		
		
		birinci=ikinci;
		ikinci=ucuncu;
		ucuncu= birinci + ikinci;
		
		printf("%d ",ucuncu);
		
		
	}
	
	printf("\n%d.eleman: %d",sayi,ucuncu);

	return 0;
}