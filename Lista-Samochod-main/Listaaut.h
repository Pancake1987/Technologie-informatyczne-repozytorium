//
// Created by BIT on 14.06.2025.
//

#ifndef LISTAAUT_H
#define LISTAAUT_H

typedef struct Listaaut {
    int d_przebieg;
    int d_rocznik;
    char d_marka[50];
    char d_kolor[50];
    struct Listaaut* next;
} Auto;

extern Listaaut* head;

#endif //LISTAAUT_H
