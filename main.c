#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void gerarSenhas(int comprimento, int maiusculas, int minusculas, int especiais, int numeros){
    const char caracteresMaiusculos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char caracteresMinusculas[] = "abcdefghijklmnopqrstuvwxyz";
    const char caracteresEspeciais[] = "!@#$%^&*()";
    const char caracteresNumeros[] = "0123456789";
    char caracteresPermitidos[100] = "";

    if (maiusculas){
        strcat(caracteresPermitidos, caracteresMaiusculos);
    }
    
    if (minusculas){
        strcat(caracteresPermitidos, caracteresMinusculas);
    }

    if (especiais){
        strcat(caracteresPermitidos, caracteresEspeciais);
    }

    if (numeros){
        strcat(caracteresPermitidos, caracteresNumeros);
    }

    srand(time(0));

    for (int i = 0; i < comprimento; i++){
        int index = rand() % strlen(caracteresPermitidos);
        printf("%c", caracteresPermitidos[index]);
    }
    printf("\n");
}   

int main(){
    int comprimento, maiusculas, minusculas, especiais, numeros;

    printf("=======================================\n");
    printf("    BEM VINDO AO GERADOR DE SENHAS   \n");
    printf("=======================================\n");
    printf("Digite o comprimento da senha: ");
    scanf("%d", &comprimento);
    printf("Incluir letras maiusculas? (1- Sim / 2- Nao): ");
    scanf("%d", &maiusculas);
    printf("Incluir letras minusculas? (1- Sim / 2- Nao): ");
    scanf("%d", &minusculas);
    printf("Incluir caracteres especiais? (1- Sim / 2- Nao): ");
    scanf("%d", &especiais);
    printf("Incluir numeros? (1- Sim / 2- Nao): ");
    scanf("%d", &numeros);
    printf("Configuracao recebida! Gerando a senha...\n");


    gerarSenhas(comprimento, maiusculas, minusculas, especiais, numeros);

    return 0;
}
