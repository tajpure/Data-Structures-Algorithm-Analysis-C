#include <stdio.h>

void PrintDigit(int digit) {
    printf("%d", digit);
}

void PrintOut(int N) {
    int mod = N - (N / 10) * 10;
    if (N >= 10 || N <= -10) {
        PrintOut(N / 10);
    }
    if (N < 0 && mod != N) mod = - mod;
    PrintDigit(mod);
}

int main() {
    PrintOut(1);
    return 0;
}
