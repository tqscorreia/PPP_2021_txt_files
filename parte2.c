
#include "funcParte2.h"
#include "lib-utf8.h"

int parte2() {

    //variaveis globais
    FILE *fpares=fopen("tab_texto.txt", "r");
    char *info;
    char ini[2], cont[10];

    //cria a arvore
    Tree* t = createTree();

    char linha[100];
    //lê a linha e faz a divisao para fazer a inserçao na arvore
    while (fgets(linha, sizeof(linha) - 1, fpares) != NULL) {
        char pal[20], pos[10];

        info = strtok(linha, "=");
        strcpy(pal, info);
        //passa a string a minusculas e sem acentos e cedilhas
        strtobase_u8(pal, pal);

        info = strtok(NULL, "=");
        strcpy(pos, info);
        //printf("%s\n", pos);

        insertTree(&t, pal, pos);
    }

    fclose(fpares);
    //menu
    int opcao = 0; // inicialização do int opcao
    while (opcao != 4){
        printf("ESCOLHA UMA OPÇAO:\n");
        printf("1 - Mostrar arvore\n");
        printf("2 - Mostrar contexto da palavra\n");
        printf("3 - Procurar por letras iniciais\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                showTree(t);
                break;
            case 2:
                printf("Insira a palavra a contextualizar\n");
                scanf("%s", cont);
                strtobase_u8(cont, cont);
                context(t, cont);
                break;
            case 3:
                printf("Insira as letras iniciais\n");
                scanf("%s", ini);
                //passa a string a minusculas
                strtobase_u8(ini, ini);
                searchIniciais(t, ini);
                break;
            case 4:
                free(t);
                break;
            default:
                printf("Opçao invalida!\n");
                break;
        }
    }
    return 0;
}
