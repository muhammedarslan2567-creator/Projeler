#define MAX 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	FILE* fptr;
	//int harf;
	char data[50];
	fptr = fopen("dosyaadiii", "a");
	if (fptr==NULL)
	{
		printf("dosya olusturulamadi!!");
	}
	else
	{
		fputs("\n yeni dünya düzeni!", fptr);
		
		//fprintf(fptr,"merhaba gerizekali");
		//while (!feof(fptr))// !feof(fptr) yaparsan da olur  (harf=getc(fptr))!=EOF
		//{harf = getc(fptr);
			//printf("%c", harf);
		//}
		
	}
	fclose(fptr);
	//int harf;
	/*fptr = fopen("dosyaadiii", "r");
	if (fptr==NULL)
	{
		printf("dosya olusturulamadi!!");
	}
	else
	{
		
		//fprintf(fptr,"merhaba gerizekali");
		while ((harf=getc(fptr))!=EOF)// !feof(fptr yapr
		{
			printf("%c", harf);
		}
	}
	fclose(fptr);int harf;
	fptr = fopen("dosyaadiii", "r");
	if (fptr == NULL)
	{
		printf("dosya olusturulamadi!!");
	}
	else
	{

		//fprintf(fptr,"merhaba gerizekali");
		while ((harf = getc(fptr)) != EOF)// !feof(fptr yapr
		{
			printf("%c", harf);
		}
	}
	fclose(fptr);*/
		return 0;
}