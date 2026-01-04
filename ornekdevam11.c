#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*int main() {
	char message[100];
	puts("cümleyi giriniz lütfen:");
	gets(message);
	puts("\n girdiginiz cümle");
	puts(message);
	return 0;

}*/
int main() {
	int n;
	printf("kac elemanlik bir dizi olusturacaksin:");
	scanf("%d", &n);
	int* dizi = (int*)malloc(n * sizeof(int));
	if (dizi == NULL)
	{
		printf("bellek ayrilamadi");
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("dizi elemanlarini giriniz:");
		scanf("%d", &dizi[i]);
	}
	printf("girilen dizi elemanlari:");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", dizi[i]);
	}printf("\n");
	free(dizi);

	return 0;
}