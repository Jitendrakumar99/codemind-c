
#include <stdio.h>

int main() {
    int s = 0;
    scanf("%d", &s);

    long arr[s], sum=0;
    int i=0;
    while (i<s) {
        scanf("%ld", &arr[i]);
        sum += arr[i];
        i++;
    }
    printf("%ld", sum);
}