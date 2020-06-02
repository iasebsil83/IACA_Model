// ------------------------ Importations ------------------------
//standard
#include <stdio.h>
#include <stdlib.h>
//string
#include <string.h>
//utilities
#include "utilities.c"
//uncomment to activate runtime errors
//#define RUNTIME_ERROR_DISABLE






// ------------------------ Declarations ------------------------
//display
const int text_length = 12;
const char* text = "Hello guys !hkjghkljhmfj";






// ------------------------ Functions ------------------------
//display
void printText(const char* s, int N){ //prints first N characters of the string
    //error cases
    if(strlen(s) < N){
        #ifndef RUNTIME_ERROR_DISABLE
            printf("RUNTIME ERROR > IACA.c : printText() : ");
            printf("String \"%s\" is too short for length %i\n",s,N);
        #endif
        return;
    }

    //for each characters from 0 to N-1
    for(int a=0; a < N; a++)
        printf("%c",s[a]);
}






// ------------------------ Execution ------------------------
//main
int main(){
    printText(text,text_length);
    printf("\n");

    return EXIT_SUCCESS;
}

