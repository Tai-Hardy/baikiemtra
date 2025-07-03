#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int number;
    printf("nhap 1 so nguyen duong:");
    scanf("%d", &number);
    if (isPrime(number)) {
        printf("%d la so nguyen duong.\n", number);
    } else {
        printf("%d khong phai so nguyen.\n", number);
    }
    return 0;
}

 
