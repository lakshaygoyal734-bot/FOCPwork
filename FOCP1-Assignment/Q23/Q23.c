#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int G, P;
        scanf("%d %d", &G, &P);

        int n;
        scanf("%d", &n);

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            if (x == 1) cnt1++; 
            if (y == 1) cnt2++;  
        }

        int costA = cnt1 * G + cnt2 * P;

        int costB = cnt1 * P + cnt2 * G;

      
        printf("%d\n", costA < costB ? costA : costB);
    }

    return 0;
}
