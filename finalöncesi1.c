#define MAX 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void gecenleriBul(int notlar[], int n, int gecme, int* adet, int* toplam) {
	*adet = 0;
	*toplam = 0;
	for (int i = 0; i < n; i++)
	{
		if (notlar[i]>gecme)
		{
			(*adet)++;
			*toplam = *toplam + notlar[i];
		}
	}

}
void enYuksekDusukNot(int notlar[], int n, int* max, int* min) {
	*max = notlar[0];
	*min = notlar[0];
	for (int i = 1; i < n; i++)
	{
		if (notlar[i] > *max) {
			*max = notlar[i];
		}
		if (notlar[i]<*min)
		{
			*min = notlar[i];
		}
	}

}
void tekCift(int notlar[], int n, int* tekadet, int* ciftadet) {
	*tekadet = 0;
	*ciftadet = 0;
	for (int i = 0; i < n; i++)
	{
		if (notlar[i] %2==0)
		{
			(*ciftadet)++;
		}
		else
		{
			(*tekadet)++;
		}
	}

}
void onlarinKatlari(int notlar[], int n) {

	for (int i = 0; i < n; i++)
	{
		if (notlar[i] %5==0)
		{
			printf(" 5 in kati olan sayilar %d\n", notlar[i]);
		}
	}
}int dosyayaYaz(char* dosyaAdi, int adet, int toplam, int max, int min, int tekadet, int ciftadet) {
	FILE* fptr;
	fptr = fopen(dosyaAdi, "w");
	if (fptr==NULL)
	{
		printf("dosya acilamadi!!");
		return 0;
	}
	else
	{
		fprintf(fptr, "esikdegerden yüksek not alan ögrenci sayisi:%d\n", adet);
		fprintf(fptr, "esik degerden yüksek alanlarin not toplami:%d\n", toplam);
		fprintf(fptr, "en buyuk not:%d\n", max);
		fprintf(fptr, "en dusuk not:%d\n", min);
		fprintf(fptr, "tek olan notlarin sayisi:%d\n", tekadet);
		fprintf(fptr, "cift olan notlarin sayisi:%d\n", ciftadet);
		fclose(fptr);
		return 1;
	}
}
int main(){
	int n;
	int gecme = 60;
	int adet;
	int toplam;
	int max;
	int min;
	int tekadet;
	int ciftadet;
	printf("ogrenci sayisini giriniz:\n");
	scanf("%d", &n);
	int notlar[MAX];
	for (int  i = 0; i < n; i++)
	{
		printf("notlari giriniz:\n");
		scanf("%d", &notlar[i]);
	}
	gecenleriBul(notlar, n, gecme, &adet, &toplam);
	printf("gecenlerin toplam sayisi:%d\n", adet);
	printf("gecenlerin toplam notu:%d\n", toplam);
	enYuksekDusukNot(notlar, n, &max, &min);
	printf("max puan:%d\n", max);
	printf("min puan:%d\n", min);
	tekCift(notlar, n, &tekadet, &ciftadet);
	printf("tek olan notlarin sayisi:%d\n", tekadet);
	printf("cift olan notlarin sayisi:%d\n", ciftadet);
	onlarinKatlari(notlar, n);
	int sonuc = dosyayaYaz("dosyaAdi", adet, toplam, max, min, tekadet, ciftadet);
	if (sonuc==1)
	{
		printf("dosyalar basariyla kaydedildi!");
	}
	else
	{
		printf("dosya olustulamadi");
	}
	return 0;
}


