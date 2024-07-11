#include <stdio.h>

int main() {
    FILE *dados, *estatisticas, *distintos, *ordenado, *distintos_ordenado;
    int num, pos = 0, neg = 0, par = 0, impar = 0;

    dados = fopen("dados.txt", "r");
    estatisticas = fopen("estatisticas.txt", "w");
    distintos = fopen("distintos.txt", "w");
    ordenado = fopen("ordenado.txt", "w");
    distintos_ordenado = fopen("distintos_ordenado.txt", "w");

    if (dados == NULL) {
        printf("Não foi possível abrir o arquivo dados.txt\n");
        return 1;
    }

    // Lê os números do arquivo dados.txt e realiza as estatísticas
    while (fscanf(dados, "%d", &num) != EOF) {
        if (num > 0) pos++;
        if (num < 0) neg++;
        if (num % 2 == 0) par++;
        else impar++;
    }

    // Grava as estatísticas no arquivo estatisticas.txt
    fprintf(estatisticas, "Quantidade de numeros positivos: %d\n", pos);
    fprintf(estatisticas, "Quantidade de numeros negativos: %d\n", neg);
    fprintf(estatisticas, "Quantidade de numeros pares: %d\n", par);
    fprintf(estatisticas, "Quantidade de numeros impares: %d\n", impar);

    fclose(dados);
    fclose(estatisticas);

    // TODO: Implementar a lógica para os arquivos distintos.txt, ordenado.txt e distintos_ordenado.txt

    return 0;
}
