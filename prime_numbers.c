#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i,j,sayi,kontrol;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2;i<=sayi;i++){
		kontrol=1;
		for(j=2;j<=i/2;j++){
			
			if(i%j==0){
				kontrol=0;
				break;
			}
		
		}
			
		if(kontrol != 0){
			printf("%d\n",i);
		}
		
	}
	
	return 0;
}