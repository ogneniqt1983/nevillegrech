#include <stdio.h>

int fib(int n);

int main(int argc, char *argv[]) {
    int n;
    printf("Enter an integer to compute Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int first = 0, second = 1, next;
    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}


