#ifndef ALKITABDB_H
#define ALKITABDB_H

#include"kitab.h"
#include"boolean.h"
#define TOTAL_KITAB 66


typedef struct{
    Kitab* list_kitab;    

}Alkitab_DB;

void AlkitabDB_Create(Alkitab_DB* database);

void AlkitabDB_Destroy(Alkitab_DB* database);



#endif