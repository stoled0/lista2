#include <stdio.h>

int fatorial(int n) {
    if (n == 1) {
        return 1;
    }   // caso base
    else {
        return n * fatorial(n - 1); // passo recursivo
    }
}

int main()
{
    printf("%d", fatorial(7));
    return 0;
}

// PILHA DE EXECUÇÃO
// fatorial(1) = return 1
// fatorial(2) = return 2 * fatorial(1) == 2*1 = 2
// fatorial(3) = return 3 * fatorial(2) == 3*2 = 6
// fatorial(4) = return 4 * fatorial(3) == 4*6 = 24
// fatorial(5) = return 5 * fatorial(4) == 5*24 = 120
// fatorial(6) = return 6 * fatorial(5) == 6*120 = 720
// fatorial(7) = return 7 * fatorial(6) == 7*720 = 5040