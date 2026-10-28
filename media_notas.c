#include <stdio.h>

int main(){
    const float MAX_NOTA = 10;
    const float MIN_NOTA = 0;
    const int QTD_NOTAS = 3;
    float n1, n2, n3, media;

    printf("Digite a 1ª Nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª Nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª Nota: ");
    scanf("%f", &n3);
    while(n1 < MIN_NOTA || n1 > MAX_NOTA || n2 < MIN_NOTA || n2 > MAX_NOTA || n3 < MIN_NOTA || n3 > MAX_NOTA)
        printf("Erro: Digite entre %i e %i !", MIN_NOTA, MAX_NOTA);
        printf("Digite a 1ª Nota: ");
        scanf("%f", &n1);
        printf("Digite a 2ª Nota: ");
        scanf("%f", &n2);
        printf("Digite a 3ª Nota: ");
        scanf("%f", &n3);


    media = (n1 + n2 + n3) / QTD_NOTAS;
    printf("A média deste aluno foi de %.2f !", media);

    return 0;
}
