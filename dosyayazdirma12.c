#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	FILE* fptr;
	//char data[50];
	//int i = 7;
	int sayilar[7];
	fptr = fopen("dosyaornek2.txt", "w");
	if (fptr==NULL)
	{
		puts("dosya acilamadi");
	}
	else
	{
		printf("7 tane sayi giriniz");
		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &sayilar[i]);
		}
		//fwrite(sayilar, sizeof(int),7,fptr);  bununla sadece yazýlýyor okunmuyor w modunda
		fread(sayilar, sizeof(int), 7, fptr);// r modunda aç dosyayý bu sayede okuyor tekrardan scanf almamalý onu silcen
		for (int i = 0; i < 7; i++)
		{
			printf("%d\n", sayilar[i]);
		}
 		//printf("bir cümle giriniz");
		//gets_s(data);
		//fprintf(fptr, "%s\n", data);
		//fputstrin yani cümle gir
		//fprintf(fptr,"c programlamadan nefret ediyorum\n");// fprintf de fptr baþta oluyor 
		//fputs("c ilginc bir dildir\n", fptr);
		//fprintf(fptr, "%d\n", i);

		printf("veriler dosyaya yazdirildi");
	}


	fclose(fptr);




	return 0;
}