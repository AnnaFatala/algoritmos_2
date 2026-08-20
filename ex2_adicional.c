#include <stdio.h>
int main() {
    int hora;
    int minutos;
    printf("Digite a hora (sem os minutos):\n");
    scanf("%d", &hora);
    printf("Digite os minutos:\n");
    scanf("%d", &minutos);
    minutos = hora * 60 + minutos;
    printf("Já se passaram %d minutos do dia.\n", minutos);
    
    return 0;
}
