#include <iostream>

#define SIZE 10

void Menu () {
    printf("1. Wpisanie liczb \n");
    printf("2. Pokazanie liczb \n");
    printf("3. Pokazanie maksimum \n");
    printf("4. Pokazanie minimum \n");
    printf("5. Pokazanie Sredniej \n");
    printf("6. Pokazaine mediany \n");
    printf("0. EXIT \n");
}


void wpisanie(int numer[]) {
    for (int i =0; i < SIZE; i++) {
        printf("Numer[%d] = ", i);
        scanf("%d", &numer[i]);

    }
}
void pokazanie(int numer[]) {
    for (int i =0; i < SIZE; i++) {
        printf("Numer[%d] = %d", i, numer[i]);

    }
}

int maksimum(int numer[]) {
    int maks = numer[0];
    for (int i =0; i < SIZE; i++) {
        if (maks > numer[i]) {
            maks = numer[i];
        }

    }
    return maks;
}
int minimum(int numer[]) {
    int min = numer[0];
    for (int i =0; i < SIZE; i++) {
        if (min < numer[i]) {
            min = numer[i];
        }

    }
    return min;
}
float Srednia(int numer[]) {
    int suma = 0;
        for (int i =0; i < SIZE; i++) {
            suma += numer[i];

        }   float srednia = (float) suma / SIZE;
        return srednia;
    }
float mediana(int numer[]) {
    int suma1 = 0;
    for (int i =4; i < 6; i++) {
        suma1 += numer[i];

    }   float mediana = (float) suma1 / 2;
    return mediana;
}





int main() {
    int numbers[SIZE]= {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8, 9, 10};
    int option = 0;
    
    do {
        Menu();
        printf(" Wybierz opcje:");
        scanf("%d", &option);


        switch (option) {
            case (1):
                printf("Wpisz liczby \n");
            wpisanie(numbers);
            break;
            case (2):
                printf("Pokazywanie liczb\n");
            pokazanie(numbers);
            break;
            case (3):
                printf("Pokazywanie maksiumum\n");
            printf("Maksimum to: %d", maksimum(numbers));
            break;
            case (4):
                printf("Pokazywanie minimum\n");
            printf("Minimum to: %d", minimum(numbers));
            break;
            case (5):
                printf("Pokazywanie Sredniej\n");
            printf("Srednia to: %.2f", Srednia(numbers));
            break;
            case (6):
                printf("Pokazywanie Mediany\n");
            printf("Mediana to: %.2f", mediana(numbers));
            break;
            default:
                printf("Wyjscie");
            break;
        }


    }
while (option !=0);

    return 0;
}

