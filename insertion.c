#include <stdio.h>
#include <time.h>

void insertion(int *A, int n)
{
    int chave, i;
    for(int j = 1; j < n; j++)
    {
        chave = A[j];
        i = j - 1;
        while (i >= 0 && A[i] > chave)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = chave;
    }
}

int main(void)
{
    int A[10] = {22,11,33,55,44,66,99,0,77,88};
    clock_t start = clock();
    insertion(A, 10);
    printf("tempo:%lF\n", (double)(clock()-start)/CLOCKS_PER_SEC);
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    }
}
