#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Lista.h"
#include "Zapis.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("\n--- Lista Samochodow ---\n");
    printf("1. Dodaj samochod do listy\n");
    printf("2. Usun samochod z listy (podaj index)\n");
    printf("3. Pokaz liste samochodow\n");
    printf("4. Czy lista jest pusta?\n");
    printf("5. Wyswietl liczbe samochodow\n");
    printf("6. Zapisz samochody do pliku\n");
    printf("7. Odczytaj samochody z pliku\n");
    printf("8. Wyczysc liste\n");
    printf("0. Wyjdz\n\n");

}

int main() {
    int option = 0;

    while (1) {
        menu();
        printf("Opcja: ");
        while (!scanf("%d", &option)) {
            printf("Blad! Podaj liczbe: ");
            clear();
        }

        if (option == 0) {
            Czyszczenielisty();
            break;
        }

        switch (option) {
            case 1: {
                int przebieg, rocznik;
                char marka[50], kolor[50];

                clear();

                printf("Marka: ");
                fgets(marka, sizeof(marka), stdin);
                marka[strcspn(marka, "\n")] = 0;

                printf("Kolor: ");
                fgets(kolor, sizeof(kolor), stdin);
                kolor[strcspn(kolor, "\n")] = 0;

                printf("Przebieg: ");
                while (!scanf("%d", &przebieg)) { clear(); printf("Blad! Podaj liczbe: "); }

                printf("Rocznik: ");
                while (!scanf("%d", &rocznik)) { clear(); printf("Blad! Podaj liczbe: "); }

                clear();

                int res = Dodanieauta(przebieg, rocznik, marka, kolor);
                res == EXIT_SUCCESS ? printf("Dodano poprawnie!\n") : printf("Blad dodawania!\n");

                break;
            }

            case 2: {
                int index;
                printf("Podaj numer samochodu do usuniecia (1 - %d): ", Ilośćaut());
                while (!scanf("%d", &index)) { clear(); printf("Blad! Podaj liczbe: "); }
                int res = Usuniecieauta(index);
                res == EXIT_SUCCESS ? printf("Usunieto poprawnie!\n") : printf("Blad usuwania!\n");
                break;
            }

            case 3:
                Pokazanielisty();
                break;

            case 4:
                printf(Czylistajestpusta() ? "Lista jest pusta.\n" : "Lista nie jest pusta.\n");
                break;

            case 5:
                printf("Liczba samochodow: %d\n", Ilośćaut());
                break;

            case 6:
            Zapisaniewpliku("auta.txt");
                break;
            case 7:
                Odczytaniezpliku("auta.txt");
                break;
            case 8:
                Czyszczenielisty();
            printf("Lista zostala wyczyszczona \n");
                break;
            default:
                printf("Nieznana opcja.\n");
                break;
        }
    }

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.