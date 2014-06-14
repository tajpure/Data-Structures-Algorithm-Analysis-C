#include <stdio.h>
#include <time.h>

int main() {
    int i = 100000000;
    while (i < 1000000000) {
        long time = clock();
        int j = i/2;
        printf("%ld\n", clock() - time);
        i++;
    }
    return 0;
}
