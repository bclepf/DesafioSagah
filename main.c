#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, ant, suc, resultado, tabuada, contador2, resultado2;
    printf("======Bem vindo a numeratron======");
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    ant = numero - 1;
    suc = numero + 1;
    printf("\nO antecessor de %d eh %d e seu sucessor eh %d\n", numero, ant, suc);
    
    printf("\nQual o valor para qual tabuada voce deseja saber?");
    scanf("%d", &tabuada);
    resultado = numero * tabuada;
    printf("\nA tabuada de %d X %d eh: %d\n", numero, tabuada, resultado);
    printf("\n Os seus sucessores de 2 em 2 sao:");
    contador2=2;
    while (contador2<7)
    {
        resultado2=numero+contador2;
        printf("\n %d", resultado2);
        contador2=contador2+2;
    }
    
    printf("\nDigite qualquer tecla para sair");
    system("pause");
    return 0;
}