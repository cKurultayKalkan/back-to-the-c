#include <stdio.h>

int fact(int);
int comb(int,int);
int main(){
	printf("iki sayı giriniz:\n");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("kombinasyonu: %d", comb(x,y));
}

int comb(int x, int y){ //C(n,r) = n!/(r!(n-r)!)
	return fact(x)/(fact(y)*(fact(x-y)));
}

int fact(int x){
	int sonuc = 1;
	for (int i=1;i<=x;i++){
		sonuc *=i;
	}
	return sonuc;
}