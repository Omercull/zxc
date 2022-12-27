#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "readline.h"
int main() {
    int j = 0, i = 0, len = 0, lena = 0, flag = 0, flag1 = 0, flag2 = 0;
    char *input = readline("Input:");
    printf("\ninput: \"%s\"", input);
    char *oput=strdup(input);//копирует строку с символом конца строки
    len=strlen(oput);//длина строки
    char *output=calloc(len+1, sizeof(char));
    char *arr=strtok(oput, " \t");//1 где работает, считает слово до пробела
    output = strcat(output, arr);
    arr = strtok(NULL, " \t");
    if (arr != NULL)
        lena = strlen(arr);
    while (arr!=NULL) {

        for (i = 0; output[i] != '\0'; i++) {
            if (output[i] == arr[j]) {
                flag1++;
                j++;
            } else {
                flag1 = 0;
                j = 0;
            }
            if ((flag1 == lena) && ((output[i + 1] == ' ') || (output[i+1] == '\0'))) {
                flag = 1;
            }
            }
            if (flag == 0) {
                if (flag2 == 0) {
                        output = strcat(output, " ");
                    flag2++;
                }
            output = strcat(output, arr);//прибавление из арр в аутпут
            if (arr != NULL) {
                output = strcat(output, " ");
            }
        }
        arr = strtok(NULL, " \t");
        if (arr != NULL)
            lena = strlen(arr);
            flag = 0;
            i = 0;
            j = 0;
    }
    len = strlen(output);

    if (output[len - 1] == ' ')
        output[len - 1] = '\0';


    printf("\noutput: \"%s\"", output);
    if (input != NULL) free (input);
    if (output != NULL) free (output);
}