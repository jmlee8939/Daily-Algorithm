#include <stdio.h>

int n;

int main(void) {
    scanf("%d", &n);
    for (int i=0; i< n; i++) {
        for (int j=0; j<n-i-1; j++) {
            printf(" ");
        }
        for (int k=0; k<2*i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<i+1; j++) {
            printf(" ");
        }
        for (int k=0; k<2*(n-i-1)-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}