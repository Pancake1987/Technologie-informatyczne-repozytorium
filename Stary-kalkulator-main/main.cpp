#include <iostream>
#include <stdio.h>
#include <stdlib.h>

FILE * fptr;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    char option;
    int firstnumber,secondnumber,result ;
    fptr = fopen("history.txt", "a");

    printf("Please enter two numbers\n");
    printf("First number:");
    scanf("%d", &firstnumber);

    printf("Second number:");
    scanf("%d", &secondnumber);

    while ((getchar()) != '\n');

    printf("Choose your operation (+,-,*,/):");
    scanf("%c", &option);
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.
   switch (option) {
       case '+':
    result = firstnumber + secondnumber;
       printf("The sum of %d and %d is %d \n",firstnumber,secondnumber,result );
    fprintf(fptr, "The sum of %d and %d is %d \n",firstnumber,secondnumber,result );
    break;
       case '-':
           result = firstnumber - secondnumber;
       printf("The minus of %d and %d is %d \n",firstnumber,secondnumber,result );
       fprintf(fptr, "The minus of %d and %d is %d \n",firstnumber,secondnumber,result );
       break;
       case '*':
           result = firstnumber * secondnumber;
       printf("The %d mulitplied by %d is %d \n",firstnumber,secondnumber,result);
       fprintf(fptr, "The %d mulitplied by %d is %d \n",firstnumber,secondnumber,result);
       break;
       case '/':
           if (secondnumber == 0) {
               printf("You can't divide by zero");
           }
       else {
           result = firstnumber / secondnumber;
           printf("The %d divided by %d is %d \n",firstnumber,secondnumber,result);
           fprintf(fptr, "The %d divided by %d is %d \n",firstnumber,secondnumber,result);
       }
       break;
       default: {
           printf("There isn't such a operation");
       }

   }

fclose(fptr);
   return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.