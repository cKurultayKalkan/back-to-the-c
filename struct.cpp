#include <stdio.h>

typedef enum{
	bay,
	bayan
} cinsiyet;

typedef enum{
	pazartesi,
	sali,
	carsamba,
	persembe,
	cuma,
	cumartesi,
	pazar
} gunler;

typedef struct {
	int yas;
	char * isim;
	cinsiyet c;
	gunler tatilgunu;
} insan;

int main(){
	int a;
	insan ali;
	insan *veli;
	veli = (insan*) malloc(sizeof(insan));
	veli -> yas = 40;
	ali.yas = 30;
	ali.c = bay;
	ali.tatilgunu = persembe;
	printf("alinin yasi: %d %u", ali.yas, ali.c);
	printf("\nvelinin yasi: %d", veli->yas);
}