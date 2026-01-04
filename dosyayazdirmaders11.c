#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	FILE* fptr;
	fptr = fopen("dosyaornek.txt", "w");// fopen(" buraya ismi"," buraya modu") // w de ac a ile ekleme yap 
	//char name= 'F',name2='A';
	char name;
	if (fptr==NULL)
	{
		printf("dosya acilamadi");
	}
	else
	{
		//putc('M', fptr); tek bir karakter yazdýrlacaksa putc kullan
		//fputc('M', fptr); // fput c putcnin aynýsý 
		//fputc(name, fptr);// (verinin kendisi bu 'harf' olabilir virgülden sonrada dosyanýn pointerý yani fptr)
		//putc(name2, fptr);
		for ( name = 'A'; name < 'Z'; name++)
		{
			fputc(name, fptr);
			putc('\n', fptr);
		}
		printf("veri dosyaya yazdirildi");
	}
	fclose(fptr); //geriye 0  döndürüyor 
	return 0;
}