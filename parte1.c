#include "func.h"
/*
* Funçao principal para a parte 1
*/
int parte1(int argc, char *argv[]) {
    //variaveis globais
    FILE *foriginal;
    FILE *fpares;

    int contador = 0, palPos = 0, car;
    char pal[30] = "", ficheiro[100]="", ficheiroOutput[100]="tab_";

    if (argc >= 2) {
        //abre o ficheiro onde estao os dados em modo leitura por linha de comandos
        strcpy(ficheiro, argv[1]);
        foriginal = fopen(ficheiro, "r");
    } else {
        //abre o ficheiro onde estao os dados em modo leitura caso nao tenha sido por linha de comandos
        printf("É necessário um argumento. Indique o nome do ficheiro: ");
        scanf("%s", ficheiro);
        foriginal = fopen(ficheiro, "r");
    }
    //verifica se o ficheiro esta vazio
    if (foriginal == NULL) {
        printf("Não foi possível abrir ficheiro\n");
        exit(-1);
    }
    strcat(ficheiroOutput,ficheiro);
    //abre o ficheiro de escrita em modo escrita
    fpares = fopen(ficheiroOutput, "w");

    //lê o ficheiro caracter a caracter
    do {
        car = fgetc(foriginal);
        contador++;

        //so aceita os carateres do alfabeto latino
        if ((car >= 'a' && car <= 'z') || (car >= 'A' && car <= 'Z') || (car >= 128)) {
            pal[palPos] = (char) car;
            palPos++;
        } else {
            pal[palPos] = '\0';
            palPos = 0;
            //verifica se a palavra tem mais de dois caracteres
            if (strlen(pal) > 2) {
                fprintf(fpares, "%s=%ld\n", pal, ftell(foriginal) - strlen(pal));
            }
        }
    } while (car != EOF);
    fclose(foriginal);
    fclose(fpares);

    printf("Ficheiro com os pares criado com sucesso\n");

    return 0;
}