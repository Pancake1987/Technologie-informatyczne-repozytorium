#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Listaaut.h"
#include "Lista.h"

extern Auto* head;

void Zapisaniewpliku(const char* nazwa) {
    FILE* plik = fopen(nazwa, "w");
    if (!plik) {
        printf("Nie mozna otworzyc pliku do zapisu!\n");
        return;
    }

    Auto* current = head;
    int numer = 1;

    while (current) {
        fprintf(plik, "Samochod nr %d\n", numer++);
        fprintf(plik, "Marka: %s\n", current->d_marka);
        fprintf(plik, "Kolor: %s\n", current->d_kolor);
        fprintf(plik, "Przebieg: %d\n", current->d_przebieg);
        fprintf(plik, "Rocznik: %d\n", current->d_rocznik);
        fprintf(plik, "\n");
        current = current->next;
    }

    fclose(plik);
    printf("Zapisano dane do pliku.\n");
}

void Odczytaniezpliku(const char* nazwa) {
    FILE* plik = fopen(nazwa, "r");
    if (!plik) {
        printf("Nie mozna otworzyc pliku do odczytu!\n");
        return;
    }

    Czyszczenielisty();

    char linia[100];
    char marka[50], kolor[50];
    int przebieg = 0, rocznik = 0;

    while (fgets(linia, sizeof(linia), plik)) {
        if (strncmp(linia, "Samochod nr", 11) != 0) continue;

        fgets(linia, sizeof(linia), plik);
        sscanf(linia, "Marka: %[^\n]", marka);

        fgets(linia, sizeof(linia), plik);
        sscanf(linia, "Kolor: %[^\n]", kolor);

        fgets(linia, sizeof(linia), plik);
        sscanf(linia, "Przebieg: %d", &przebieg);

        fgets(linia, sizeof(linia), plik);
        sscanf(linia, "Rocznik: %d", &rocznik);

        Dodanieauta(przebieg, rocznik, marka, kolor);

        fgets(linia, sizeof(linia), plik);
    }

    fclose(plik);
    printf("Wczytano dane z pliku.\n");
}