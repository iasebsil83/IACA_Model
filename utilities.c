// ---------------- Includes ---------------
#include <stdio.h>
#include <stdlib.h>
//maths           // /!\ WARNING /!\ : This means that you will need to
#include <math.h> // add the attribute -lm to your compilation command






// ---------------- Functions ----------------
//strings & ints
char* mallocStr(int len){ //malloc + set allocated memory to '\0'
    //error cases
    if(len <= 0){
        printf("FATAL ERROR > System/utilities.c : mallocStr() : ");
        printf("Can't allocate less than one byte\n");
        exit(EXIT_FAILURE);
        return ""; //will never be executed
    }

    //allocation
    char* s = malloc(len);
    if(s != NULL)
        for(int a=0; a < len; a++)
            s[a] = '\0';
    return s;
}

void freeStr(char* s, int len){ //free + erase tracability in memory
    for(int a=0; a < len; a++)
        s[a] = '\0';
    free(s);
}

int strcmpN(char* s1, char* s2, int N){ //compares only first N characters of given strings
    //error cases
    if(strlen(s1) < N || strlen(s2) < N){
        #ifndef RUNTIME_ERROR_DISABLE
            printf("RUNTIME_ERROR > System/utilities.c : strcmpN() : ");
            printf("given strings have less characters than required to compare them : ");
            printf("Comparing first %i characters of \"%s\" and \"%s\"\n",N,s1,s2);
        #endif
        return 0;
    }

    //compare each character until index N-1
    for(int a=0; a < N; a++){
        if(s1[a] != s2[a])
            return 0;
	}
    return 1;
}

int charInStr(char c, char* s){ //compares whether a character is inside a string
    while(s[0] != '\0'){
        if(s[0] == c)
            return 1;
        s++;
    }
    return 0;
}

int charToInt(char c){ //return integer corresponding to character (from 0 to f)
    switch(c){
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 'a':
        case 'A':
            return 10;
        case 'b':
        case 'B':
            return 11;
        case 'c':
        case 'C':
            return 12;
        case 'd':
        case 'D':
            return 13;
        case 'e':
        case 'E':
            return 14;
        case 'f':
        case 'F':
            return 15;
    }
    return 0;
}

int getIntFromStr(char* s, int len){ //return the number detected in a string
    //error cases                    //be careful : returns only an int !
    if(strlen(s) < len){
        #ifndef RUNTIME_ERROR_DISABLE
            printf("RUNTIME ERROR > System/utilities.c : getIntFromStr() : ");
            printf("String is too short for the length given\n");
            printf("\"%s\" minimum length must be : %i\n", s,len);
        #endif
        return -1;
    }
    if(len <= 0){
        #ifndef RUNTIME_ERROR_DISABLE
            printf("RUNTIME ERROR > System/utilities.c : getIntFromStr() : ");
            printf("Incorrect length %i\n", len);
        #endif
        return -1;
    }

    //negative check
    int negative = 0;
    if(s[0] == '-'){
        len--;  s++;
        negative = 1;
    }

    //positive number detection in rest of the string
    int pwr = pow(10,len-1);
    int result = 0;
    for(int a=0; a < len; a++){
        result += charToInt(s[a])*pwr; //if no number detected, nothing added
        pwr /= 10;
    }
    if(negative)
        return -result;
    return result;
}

