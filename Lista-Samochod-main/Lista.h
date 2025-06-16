//
// Created by BIT on 14.06.2025.
//

#ifndef LISTA_H
#define LISTA_H

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int Dodanieauta(int przebieg, int rocznik, const char* marka, const char* kolor);
int Usuniecieauta(int index);
void Pokazanielisty(void);
void Czyszczenielisty(void);
int Czylistajestpusta(void);
int Ilośćaut(void);

#endif //LISTA_H
