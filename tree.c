#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){

    int plantSize;
    int action;
    int While = 0;
    int tree = 1;

    int Molhadidao;
    int NiveldeSol;
    int NiveldeAdubamento;

    plantSize = 0;
    action = 0;

    printf("________Lista de Comandos______");

    Sleep(500);
    printf("\n_________CARREGANDO_________\n");
    Sleep(1000);

    printf("\n-1_Regar\n-2_ColocarNoSol\n-3_Adubar\n-4_cortarcaule\n-5_Tacarfogo\n");
    Sleep(10000);
    system("cls");

for(int a = 0;a == 0;){
    if(plantSize < 0)plantSize = 0;
    printf("___________________________________________________________________\n");
    printf("****___________________________________________________________****\n");
    printf("a altura atual is %d\n>>>>",plantSize);
    scanf("%d",&action);

    //actions
    if(action == 1)
        {
        plantSize += 1;
        tree = plantSize;
        printf("Regado");

        }
    if(action == 2)
        {
        plantSize += 1;
        tree = plantSize;
        printf("colocado no sol");
        }
    if(action == 3)
        {
        plantSize += 1;
        tree = plantSize;
        printf("Adubado");
        }
    if(action == 4)
        { if(plantSize <= 0){printf("Não tem caule para Cortar rapa");} else{
        plantSize += -1;
        tree = plantSize;
        printf("Caule cortado");
        }
        }
    if(action == 5)
        {
        plantSize == 0;
        tree = plantSize;
        printf("Fogo tacado\n>>>>");
        action = 0;
            for(action = 0;action != -1;)
                {
            scanf("%d",&action);
             if(action == -1){return(1);}
                system("cls");
            printf("Não adianta esta muorto, muchacho tu Tacol en lo FUEGO\n>>>>");
            action = 0;
                }

        }
        if(tree == 1){
        printf("\n[Semeado]");

    }
    if(action == -1)
        {
        return(1);
        }
    Sleep(1000);



    system("cls");
    //GraphcsTree
    printf("Estado da Arvore\n\n\n\n\n\n\n");
    if(tree == 1){
        printf("°");

    }

    if(tree > 1)
    {
        for(int a = 0; a != tree;a++){
            printf("/");
        printf("\n");

        }

    }

    printf("____________________________________________________[SOLO_RENDERS]________");






}

}
