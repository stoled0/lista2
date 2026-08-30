#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    }   // caso base
    else {
        return soma(n - 1) + n; // passo recursivo
    }
}

int main()
{
    printf("%d", soma(7));
    return 0;
}

// PILHA DE EXECUÇÃO
// soma(1) = return 1
// soma(2) = return 2 + soma(1) == 2+1 = 3
// soma(3) = return 3 + soma(2) == 3+3 = 6
// soma(4) = return 4 + soma(3) == 4+6 = 10
// soma(5) = return 5 + soma(4) == 5+10 = 15
// soma(6) = return 6 + soma(5) == 6+15 = 21
// soma(7) = return 7 + soma(6) == 7+21 = 28