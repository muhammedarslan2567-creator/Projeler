#define MAX 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void yuzUstu(int fiyatlar[], int n, int* adet, int* toplam) {
	*adet = 0;
	*toplam = 0;
	for (int i = 0; i < n; i++)
	{
		if (fiyatlar[i] > 100) {
			(*adet)++;
			(*toplam) = (*toplam) + fiyatlar[i];
		}
	}

}
void pahaliUcuz(int fiyatlar[], int n, int* pahali, int* ucuz) {
	*pahali = fiyatlar[0];
	*ucuz = fiyatlar[0];
	for (int i = 1; i < n; i++)
	{
		if (fiyatlar[i]>*pahali)
		{
			*pahali = fiyatlar[i];
		}
		if (fiyatlar[i]<*ucuz)
		{
			*ucuz = fiyatlar[i];
		}
	}

}
void tekCiftFiyat(int fiyatlar[], int n, int* tek, int* cift) {
	*tek = 0;
	*cift = 0;

	for (int i = 0; i < n; i++)
	{
		if (fiyatlar[i] %2==0)
		{
			(*cift)++;
		}
		else
		{
			(*tek)++;
		}
	}
}
void yirmibesKati(int fiyatlar[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (fiyatlar[i] %25==0)
		{
			printf("25in katlari :%d\n", fiyatlar[i]);
		}
	}

}
int raporYaz(char* dosyaadi, int adet, int toplam, int pahali, int ucuz, int tek, int cift) {
	FILE* fptr;
	fptr = fopen(dosyaadi, "w");
	if (fptr==NULL)
	{
		printf("dosya olusturulamadi:");
		return 0;
	}
	else
	{
		fprintf(fptr, "100den pahali olanlarin adedi:%d\n", adet);
		fprintf(fptr, "100den pahali olanlarin toplam miktari:%d\n", toplam);
		fprintf(fptr, "en pahali ürün:%d\n", pahali);
		fprintf(fptr, "en ucuz ürün:%d\n", ucuz);
		fprintf(fptr, "fiyati tek olan ürün adedi:%d\n", tek);
		fprintf(fptr, "fiyati cift olan ürün adedi:%d\n", cift);
		fclose(fptr);
	}
	return 1;
}
int main() {
	int n;
	int adet, toplam, pahali, ucuz, tek, cift;
	printf("urun sayisini giriniz:\n");
	scanf("%d", &n);
	int fiyatlar[MAX];
	for (int i = 0; i < n; i++)
	{
		printf("lütfen ürünlerin fiyatlarini giriniz:\n");
		scanf("%d", &fiyatlar[i]);
	}
	yuzUstu(fiyatlar, n, &adet, &toplam);
	printf("yuzden buyuk fiyat sayisi:%d\n", adet);
	printf("yuzden buyuk fiyatlarin toplami:%d\n", toplam);
	pahaliUcuz(fiyatlar, n, &pahali, &ucuz);
	printf("en pahali ürünün fiyati:%d\n", pahali);
	printf("en ucuz ürünün fiyati:%d\n", ucuz);
	tekCiftFiyat(fiyatlar, n, &tek, &cift);
	printf("tek olan fiyatlar:%d\n",tek);
	printf("cift olan fiyatlar:%d\n", cift);
	yirmibesKati(fiyatlar, n);
	int sonuc = raporYaz("dosyaadi", adet, toplam, pahali, ucuz, tek, cift);
	if (sonuc==1)
	{
		printf("dosya olusturuldu");
	}
	else
	{
		printf("dosya olusturlamadi");
	}
		return 0;
}