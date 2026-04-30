#include<stdio.h>
#include<stdlib.h>
int calculateFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 < y2) {
        return 0;
    } else if (y1 > y2) {
        return 10000;
    } else {
        if (m1 < m2) {
            return 0;
        } else if (m1 > m2) {
            return 500 * (m1 - m2);
        } else {
            if (d1 <= d2) {
                return 0;
            } else {
                return 15 * (d1 - d2);
            }
        }
    }
}
int main() {
    int d1, m1, y1, d2, m2, y2;
    printf("Enter the actual return date (day month year): ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter the expected return date (day month year): ");
    scanf("%d %d %d", &d2, &m2, &y2);
    
    int fine = calculateFine(d1, m1, y1, d2, m2, y2);
    printf("The library fine is: %d\n", fine);
    
    return 0;
}