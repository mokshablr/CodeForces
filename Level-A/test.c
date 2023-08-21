#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    printf("Enter an integer (1 <= n <= 1000): ");
    scanf("%d", &n);

    clock_t start_time = clock(); // Start measuring execution time

    bool found = false;
    for (int i = 4; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            printf("%d is evenly divisible by %d (a lucky number)\n", n, i);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("%d is not evenly divisible by any lucky number.\n", n);
    }

    clock_t end_time = clock(); // Stop measuring execution time
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution time: %.6f seconds\n", execution_time*1000.0);

    return 0;
}
