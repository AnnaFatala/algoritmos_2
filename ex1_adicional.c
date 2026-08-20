#include <stdio.h>
int main(){
    float salario_minimo;
    float salario_bruto;
    float qtd_salario_min;

    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &salario_minimo);
    printf("Digite o valor do seu salario (bruto):\n");
    scanf("%f", &salario_bruto);
    qtd_salario_min = salario_bruto / salario_minimo;
    printf("O seu salario bruto equivale a %.2f salarios minimos.\n", qtd_salario_min);
    return 0;

}
