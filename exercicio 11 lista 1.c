#include <stdio.h>

float calcularSoma(float vetor[], int x) { 
    float soma = 0;
    int i;
    for (i = 0; i < x; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(){
    float vetor[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Digite a nota %d da escola: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    float maior = vetor[0];
    float menor = vetor[0];
    int IDmaior = 0;
    int IDmenor = 0;
    
    // Encontrar o maior e o menor valor
    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            IDmaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            IDmenor = i;
        }
    }
    
    // Remover o maior e o menor valor
    int novoTamanho = 3;
    float vetorC[novoTamanho];
    int contador = 0;

    for (i = 0; i < 5; i++) {
        if (i != IDmaior && i != IDmenor) {
            vetorC[contador] = vetor[i];
            contador++;
        }
    }
    
    float soma = calcularSoma(vetorC, novoTamanho);
    printf("\nA nota final da escola no quesito considerado: %.1f\n", soma);    
    
    return 0;
}

