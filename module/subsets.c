#include <stdio.h>
#include <math.h>

void to2(int k, int n, int *r){
    int i = 0;
    while(k){
        r[i] = (int)(k % 2);
        k /= 2;
        i++;
    }
    for(i; i<n; i++)
        r[i] = 0;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int i,j,n,h,q,u;
    n = sizeof(a)/sizeof(int);
    h = pow(2,n);
    int *res[h][n];
    for(i=0;i<h;i++){
        int *r[n];
        to2(i,n,r);
        q = 0;
        for(j=0; j<n; j++){
            if(r[j]==1){
                res[i][q] = a[j];
                q++;
                }
            }
        for(q;q<n;q++){
            res[i][q] = NULL;
        }
        free(r);
    }
    for(i = 0; i<h; i++){
        for(j = 0; j<n; j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
    return 0;
}
