    #include <stdio.h>

    // Declaração De Variaveis
    int main() {
    int Tabuleiro[10][10];
    int linha, coluna; 

    // Posições Tabuleiro em Agua
    for (linha = 0; linha < 10; linha++) {
        for ( coluna = 0; coluna < 10; coluna++) {
            Tabuleiro[linha][coluna] = 0;
        }
    }

    // 2. Posicionar os navios
    // Posicionamento Do Navio 1 No Tabuleiro
    for (coluna = 0; coluna < 3; coluna++) { //Quantidade espaço Navio 1
        Tabuleiro[3][5 + coluna] = 7; //Posição No Tabuleiro
    }

    // Posicionamento Do Navio 2 No Tabuleiro
    for (linha = 0; linha < 3; linha++) { // Quantidade espaço Navio 2
        Tabuleiro[0 + linha][1] = 7; //Posição Tabuleiro
    }

    // 3. Exibir o tabuleiro
    printf("    "); // Espaço para o cabeçalho das colunas
    for (coluna = 0; coluna < 10; coluna++) {
        printf("%d ", coluna);
    }
    printf("\n");
    printf("   ---------------------\n");

    for (linha = 0; linha < 10; linha++) {
        printf("%2d |", linha); // Imprime o número da linha
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", Tabuleiro[linha][coluna]);// Imprimindo Resultado Em Terminal
        }
        printf("\n"); // Organização No Terminal
    }

    return 0;
}