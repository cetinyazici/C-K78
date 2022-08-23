#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Struct
// Fonksiyonlarda kullan�m

typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
} Film;

void film_yazdir(Film); // Pass by value
void film_yazdir_ptr(Film*); // Pass by reference



int main(){

    Film film1; // de�i�ken tan�mlama
    film1.yil = 1994; // struct eleman�na . ile eri�ebiliriz.
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "The Shawshank Redemption";

    Film film2 = {1972, "Crime", 152, "The Godfather"}; // ba�lang�� de�eri atama
    Film film3 = {2008, "Action"}; // e�er daha az ba�lang�� de�eri verirsem (0 veya NULL)
    
    Film* film4;
    film4 = (Film*) malloc(sizeof(Film)); // structa yer ay�r�yoruz.
    (*film4).tur = "Crime";
    (*film4).isim = "Pulp Fiction";
    (*film4).yil = 1994;
    (*film4).sure = 154;

    printf("Film 1 haf�zadaki adresi: %p\n",&film1);
    film_yazdir(film1);

    printf("Film 2 haf�zadaki adresi: %p\n",&film1);
    film_yazdir(film2);
    
    printf("Film 3 haf�zadaki adresi: %p\n",&film4);
    film_yazdir(film3);

    printf("Film 4 haf�zadaki adresi: %p\n",&(*film4));
    film_yazdir_ptr(film4);


    return 0;
}


void film_yazdir(Film film){
    printf("Filmin haf�zadaki adresi: %p\n", &film);
    printf("%-9d%-12s%-12d%-s\n\n",film.yil,film.tur,film.sure,film.isim);
}
void film_yazdir_ptr(Film* film){
    printf("Filmin haf�zadaki adresi: %p\n", &(*film));
    printf("%-9d%-12s%-12d%-s\n\n",film->yil,film->tur,film->sure,film->isim);
}
