
/*#include <stdio.h>
#include <stdlib.h>
 int main()
{
    int *ogr;
    int ogrSay=12;
    ogr=calloc(ogrSay,sizeof(*ogr));// bellekten yer ayırma işlemi burda yapılıyor
    printf("%d", ogrSay * sizeof(*ogr));
    

    free(ogr);// bellek için ayırılan yer tekrardan boş hale getirilir
}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{// 4 sayi için bellekten yer ayırma işlemi
int *ptr1,*ptr2,size;
size=4*sizeof(*ptr1);
ptr1=malloc(size);//  ne kadarlık yer istiyorsan o kadar yer tahsis ediliyor
printf("%d bytes allocated at adress %p\n",size,ptr1);// byte değerini size gösteriyor adresi de ptr1
//16 sayi için bellekten yer ayırma
size=16 * sizeof(*ptr1);
ptr2=realloc(ptr1,size);// ptr1in göstedriği adres üzerine yazıyor 
printf("%d bytes reallocated at adress %p",size,ptr2);

free(ptr2);


}
