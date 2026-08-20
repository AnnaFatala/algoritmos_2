#include <stdio.h>
int main() {
    float nota1;
    float nota2;
    float nota3;
    float media;
    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media das notas é: %.2f\n", media);
}
