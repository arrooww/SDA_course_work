//filling and outputting 3d massive and vector, 3 diff variants
//filling(a), out(), v_filling(b), v_out(), free_memory(), A_dynamic

#include "common.h"

int i, j, k;
//int ***A;

/*void filling(int a)//filling 3D massive
{
    switch (a)
    {
    case 1:
        for (k = 0; k < p; k++)
            for (j = 0; j < m; j++)
                for (i = 0; i < n; i++)
                    A[k][i][j] = k + j + i + 7;
        break;
    case 2:
        for (k = 0; k < p; k++)
            for (j = 0; j < m; j++)
                for (i = 0; i < n; i++)
                    A[k][i][j] = rand()%(p*m*n);
        break;
    case 3:
        for (k = 0; k < p; k++)
            for (j = 0; j < m; j++)
                for (i = 0; i < n; i++)
                    A[k][i][j] = k*n*m-7;
        break;

    }
}

void out()//taking out 3D massive
{
    for (k = 0; k < p; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%4d ", A[k][i][j]);
            printf("\n");
        }
        printf("\n");
    }
}
*/
void v_filling(int b)//filling vector
{
    switch (b)
    {
    case 1:
        for (i = 0; i < n; i++)
            vA[i] = i + 7;
        break;
    case 2:
        for (i = 0; i < n; i++)
            vA[i] = rand()%(p*m*n);
        break;
    case 3:
        for (i = 0; i < n; i++)
            vA[i] = n - i -7;
        break;

    }
}

void v_out()//out vector
{
    for (i = 0; i < n; i++)
        printf("%2d ", vA[i]);
}

//free memory
/*void free_memory()
{
    for (int k=0; k<p; k++)
    {
        for (int i=0; i<m; i++)
            free(A[k][i]);
        free(A[k]);
    }
    free(A);
}

//3d dynamic array
void A_dynamic()
{
    int ***A;
    A = (int***) malloc(p*sizeof(int**));
    for (int k=0; k<p; k++)
    {
        A[k] = (int**) malloc(m*sizeof(int*));
        for (int i=0; i<m; i++)
            A[k][i] = (int*) malloc(n*sizeof(int));
    }
}
*/
