#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEWFILE "c"
#define EXIT_val "e"

char menu[] = "\n\t<files><files/>\n* 'c' create new file\n* 'e' exit\n";


int getArg();
int createFile();

int main( int argc, char **argv ) {
        getArg();
        return 1;
}

int getArg() {
        char *arg = (char *) malloc(21*sizeof(char));
        puts(menu);

        scanf("%s", arg);

        if (strcmp(arg, NEWFILE) == 0) {
                free(arg);
                createFile();
        }
        else if (strcmp(arg, EXIT_val) == 0) {
                free(arg);
                return 1;
        }
        return 0;
}

int createFile() {
        char *fileName = (char *) malloc(21*sizeof(char));

        printf("\tCreate new file: ");
        scanf("%s", fileName);

        FILE *arq = fopen(fileName, "wr");

        if( arq == NULL ) {
                perror("\t\nerro ao abrir o arquivo :/\n");
                return 1;
        }
        else {
                free(fileName);
                fclose(arq);
                getArg();
        }
        return 0;
}
