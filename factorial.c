#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int i,sayi,fakt;
    
    fakt=1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++){
    	
    	fakt *=i;
    	
	}
printf("%d!=%d",sayi,fakt);
	return 0;
}