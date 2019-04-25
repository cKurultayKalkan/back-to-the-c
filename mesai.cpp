#include <stdio.h>

int hesapla(int a){
	if(a <= 10){
		return a*5;
	} else if(a > 10 && a <=20){
		return 10*5 + (a-10)*3;
	} else if(a >20){
		return 10*5 + (a-10)*3 +  (a-20)*2;
	}
	return 0;
}

int main(){
	int mesai;
	printf("Lütfen mesai saatinizi girin\n");
	scanf("%d", &mesai);
	printf("ücret : %d \n", hesapla(mesai));
}