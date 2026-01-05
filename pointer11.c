#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	//char name = 'F';// 1 byte	1 byte olmadýðý zaman baþlangýç adresini alýr  adres olarak
	//int x = 7;// 4 byte adresi biz seçemiyoruz ama hangi adreste tutulduðunu bilebilirim.
	int x = 7;
	float y = 3.14;
	double z = 4.23456;
	char name = 'F';
	printf("x degiskeni:%d\n", x);
	printf("y degiskeni:%f\n", y);
	printf("z degiskeni:%f\n", z);
	printf("name degiskeni:%c\n\n", name);


	printf("x degiskeninin adresi:%x\n", &x);
	printf("y degiskeninin adresi:%p\n", &y);
	printf("z degiskeninin adresi:%p\n", &z);
	printf("name degiskeninin adresi:%p\n\n", &name);
	//printf("int :%d\n", sizeof(int));
	//printf("float:%d\n", sizeof(float));
	//printf("double:%d\n", sizeof(double));
	//printf("char:%d\n", sizeof(char));
	//printf("long double:%d\n",sizeof(long double));
	//printf("x adresi %p\n", &x);
	
	return 0;
}