#include <stdio.h>
int main() {
    int n, count = 0;
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count = count + 1;
            n /= 10; 
        }
    }
    printf("%d", count);
    return 0;
}
