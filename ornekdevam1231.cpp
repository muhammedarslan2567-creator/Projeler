#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,new_size;
	printf("kac elemanlik dizi olcak:");
	scanf("%d", &n);
	int* dizi = (int*)calloc(n,sizeof(int));
	if (dizi==NULL)
	{
		printf("bellek ayrýilamadi");
		return 1;
	}
	printf("calloc ile olusturulan dizi:\n");
	for (int i = 0; i < n; i++)
	{
		printf("dizi[%d]=",i);
		scanf("%d", &dizi[i]);
	}
	printf("mevcut dizi:");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", dizi[i]);
	}
	printf("\n");
	printf("kac elemanlik dizi olcak:");
	scanf("%d", &new_size);
	dizi = (int*)realloc(dizi,new_size * sizeof(int));
	if (dizi == NULL)
	{
		printf("bellek ayrýilamadi");
		return 1;
	}
	for (int i =n; i < new_size; i++)// i=0 dene
	{
		printf("dizi[%d]=", i);
		scanf("%d", &dizi[i]);
	}
	printf(" realloc sonrasi	mevcut dizi:");// realloc sonradan ekleme  yapýyor yani forlarda o yüzden n den baþlýyoruz ama 0 dan baþlasak ekstra kaç girdiysen o olur 
	for (int i = n; i < new_size; i++)// i=0 dene
	{
		printf("%d ", dizi[i]);
	}
	printf("realloc sonrasi dizi:");
	for (int i = 0; i < new_size; i++)
	{
		printf("%d ", dizi[i]);
	}
	free(dizi);// ram temizleniyor serbest býrakýlýyor
	return 0;
}