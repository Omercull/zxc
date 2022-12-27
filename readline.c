#include "readline.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* readline(char* print) {
    int n=1;
    char* output = malloc(81* sizeof(char));
    printf("%s", print);
    while (n>0){
        n=scanf("%[^\n]", output);
        if(n<0){
            printf("Goodbye!");
            if(output!=NULL){
                free(output);
            }
            continue;
        }
        if(n==0){
            scanf("%*[\n]");
        }
    }
    return output;
}