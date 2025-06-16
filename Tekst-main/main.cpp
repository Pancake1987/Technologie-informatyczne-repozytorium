#include <stdio.h>
#include <string.h>

char *str1 = "Ala ";
char *str2 = " ma kota. ";
char *str3 = "";

int combine(char *result) {
    
    strcpy(result, str1);

    
    strcat(result, str2);
    strcat(result, str3);

    return 0;
}

int main() {
    char result[100];  

    
    combine(result);

    
    printf("Polaczony tekst: %s\n", result);

    return 0;
}

