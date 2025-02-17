#include <stdio.h>
int MatrixChainMultuplication(int arr[], int n) {
    int minMul[n][n];
    int j, q;
    for (int i = 1; i < n; i++)
        minMul[i][i] = 0;
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            minMul[i][j] = 99999;
            for (int k = i; k <= j - 1; k++) {
                q = minMul[i][k] + minMul[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                if (q < minMul[i][j])
                minMul[i][j] = q;
            }
        }
    }
    return minMul[1][n - 1];
}
int main(){
    int arr[] = {30,35,15,5,10,20,25};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum number of multiplications required is %d",MatrixChainMultuplication(arr,size));
}

/*Output
Minimum number of multiplications required is 15125 */