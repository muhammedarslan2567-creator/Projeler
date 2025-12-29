
#include <stdio.h>

#define MAX 100   // maksimum ogrenci / odev sayisi


void notlariAl(int dizi[], int odevsayisi)
{
    int i;
    for (i = 0; i < odevsayisi; i++)
    {
        printf("%d. odev notunu giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }
}


float ortalamaHesapla(int dizi[], int ogrencisayisi)
{
    int i, toplam = 0;
    for (i = 0; i < ogrencisayisi; i++)
    {
        toplam += dizi[i];
    }
    return (float)toplam / ogrencisayisi;
}


float genelNotHesapla(float odevOrt, int vize, int final)
{
    float kullanilacakOdevNotu;


    if (odevOrt > 80)
        kullanilacakOdevNotu = 100;
    else
        kullanilacakOdevNotu = odevOrt;

    return (kullanilacakOdevNotu * 0.10f)
        + (vize * 0.40f)
        + (final * 0.50f);
}


void sonucYazdir(float genelNotlar[], int ogrenciSayisi)
{
    int i;
    printf("\n--- OGRENCI FINAL NOTLARI ---\n");
    for (i = 0; i < ogrenciSayisi; i++)
    {
        printf("%d. ogrencinin genel notu: %.2f\n", i + 1, genelNotlar[i]);
    }
}

int main()
{
    int ogrenciSayisi, odevSayisi;
    int odevNotlari[MAX];
    int vizeNotlari[MAX];
    int finalNotlari[MAX];
    float genelNotlar[MAX];

    int i;
    float odevOrt;

    printf("Kac ogrenci var?: ");
    scanf("%d", &ogrenciSayisi);

    if (ogrenciSayisi <= 0 || ogrenciSayisi > MAX)
    {
        printf("Gecersiz ogrenci sayisi!\n");
        return 1;
    }

    printf("Her ogrenci icin kac odev var?: ");
    scanf("%d", &odevSayisi);

    if (odevSayisi <= 0 || odevSayisi > MAX)
    {
        printf("Gecersiz odev sayisi!\n");
        return 1;
    }


    for (i = 0; i < ogrenciSayisi; i++)
    {
        printf("\n--- %d. OGRENCI ---\n", i + 1);

        notlariAl(odevNotlari, odevSayisi);
        odevOrt = ortalamaHesapla(odevNotlari, odevSayisi);

        printf("Vize notunu giriniz: ");
        scanf("%d", &vizeNotlari[i]);

        printf("Final notunu giriniz: ");
        scanf("%d", &finalNotlari[i]);

        genelNotlar[i] = genelNotHesapla(odevOrt, vizeNotlari[i], finalNotlari[i]);
    }

    sonucYazdir(genelNotlar, ogrenciSayisi);

    return 0;
}
