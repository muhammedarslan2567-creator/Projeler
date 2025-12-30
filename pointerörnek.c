#include <stdio.h>
#define SIZE 10
void copy1(char * const s1,const char *consts2);
void copy2(char *s1,const char *s2);
int main(void)
{
char string1[SIZE];// dizi yarat
char *string2="hello";
copy1(string1,string2);
printf(" string1 =%s\n",string1);
char string3[SIZE];
char string4[]="Good Bye";
copy2(string3,string4);
printf("string3=%s\n",string3);


}