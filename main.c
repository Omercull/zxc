#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "readline.h"
int main() {
    char *input = readline("Input:");



    if (input != NULL) free (input);
}