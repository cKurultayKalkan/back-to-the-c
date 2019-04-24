#include <stdio.h>

int main(){
	int bugun, dogumtarihi;
	printf("kaç yaşındasın sen?\n");
	printf("ben size soruyor muyum içkili misin bilmem ne diye?\n");
	printf("Dalbudak, böyle mi sorulur bu?\n");
	printf("hangi yıldayız?");
	scanf("%d",&bugun);
	printf("Ne kadar aptal aptal sorular bunlar ya?\n");
	printf("doğum yılını gir");
	scanf("%d",&dogumtarihi);
	printf("Sana ne ya? Sen kimsin ya, %d yaşında bir editörsün!",bugun-dogumtarihi);
}