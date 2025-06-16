#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Lista.h"
#include "Listaaut.h"


Auto* head = NULL;
int Liczbaaut = 0;

int Dodanieauta(int przebieg, int rocznik, const char* marka, const char* kolor) {
    Auto* current = (Auto*)malloc(sizeof(Auto));
    if (current) {
        current->d_przebieg = przebieg;
        current->d_rocznik = rocznik;
        strncpy(current->d_marka, marka, sizeof(current->d_marka));
        strncpy(current->d_kolor, kolor, sizeof(current->d_kolor));
        current->next = NULL;

        if (head == NULL) head = current;
        else {
            Auto* temp = head;
            while (temp->next != NULL) temp = temp->next;
            temp->next = current;
        }

        Liczbaaut++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int Usuniecieauta(int index) {
    if (index <= 0 || index > Liczbaaut || head == NULL)
        return EXIT_FAILURE;

    Auto* current = head;
    Auto* previous = NULL;

    if (index == 1) {
        head = head->next;
        free(current);
        Liczbaaut--;
        return EXIT_SUCCESS;
    }

    for (int i = 1; i < index; i++) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    free(current);
    Liczbaaut--;
    return EXIT_SUCCESS;
}

void Pokazanielisty(void) {
    Auto* current = head;
    int i = 1;
    while (current != NULL) {
        printf("Samochod #%d:\n", i++);
        printf("  Marka: %s\n", current->d_marka);
        printf("  Kolor: %s\n", current->d_kolor);
        printf("  Przebieg: %d\n", current->d_przebieg);
        printf("  Rocznik: %d\n", current->d_rocznik);
        current = current->next;
    }
}

void Czyszczenielisty(void) {
    Auto* current = head;
    while (current != NULL) {
        Auto* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
    Liczbaaut = 0;

}

int Czylistajestpusta(void) {
    return head == NULL;
}

int Ilośćaut(void) {
    return Liczbaaut;
}

//
// Created by BIT on 14.06.2025.
//
