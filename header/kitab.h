#ifndef KITAB_H
#define KITAB_H


#include"boolean.h"

typedef struct{
    short jml_pasal;
    char* NamaKitab;
}Kitab;

void kitab_create(Kitab* Kitab_Name,short jml,char* Nama);

void kitab_destroy(Kitab* Kitab_Name);


#endif