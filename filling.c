#include "filling.h"//підключення імпорту


void Filling(int a)//filling 3D massive
{
    switch (a)
    {
    case 1:
        for (k = 0; k < P; k++)
            for (i = 0; i < M; i++)
                for (j = 0; j < N; j++)
                    A[k][i][j] = (i + j + k) * (j + 1);//упорядковане заповнення
        break;
    case 2:
        for (k = 0; k < P; k++)
            for (i = 0; i < M; i++)
                for (j = 0; j < N; j++)
                    A[k][i][j] = rand()%(P*M*N);//рандомне заповнення
        break;
    case 3:
        for (k = 0; k < P; k++)
            for (i = 0; i < M; i++)
                for (j = 0; j < N; j++)
                    A[k][i][j] = j -i -k + 7;//обернено-упорядковане заповнення
        break;

    }
}
void out()//функція для виведення масиву до і після сортування
{
    Filling(3);
    for(int k=0; k<P; k++)
    {
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                printf("%i ",A[k][i][j]);
            }
            printf("\n");
        }
        printf("-------------------\n");
    }

    printf("SORTED RESULT\n");

    InsertSort();
    //Select();
    //Shell();
    //V_InsertSort(Vector, VectorLength);
    //V_Select(Vector, VectorLength);
    //V_Shell(Vector, VectorLength);

    for(int k=0; k<P; k++)
    {
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                printf("%i ",A[k][i][j]);
            }
            printf("\n");
        }
        printf("-------------------\n");
    }
}

void dynamic()//виділення пам'яті
{
    int ***A;
    A = (int***) malloc(P*sizeof(int**));
    for (int k=0; k<P; k++)
    {
        A[k] = (int**) malloc(M*sizeof(int*));
        for (int i=0; i<M; i++)
            A[k][i] = (int*) malloc(N*sizeof(int));
    }
}

void free_mem()//звільнення пам'яті
{
    for (int k=0; k<P; k++)
    {
        for (int i=0; i<M; i++)
            free(A[k][i]);
        free(A[k]);
    }
    free(A);
}

void V_Filling(int *A, int n, int b)//filling vector
{

    switch (b)
    {
    case 1:
        for (i = 0; i < n; i++)
            A[i] = i + 7 ;//упорядковане заповнення
        break;
    case 2:
        for (i = 0; i < n; i++)
            A[i] = rand()%20;//рандомне заповнення
        break;
    case 3:
        for (i = 0; i < n; i++)
            A[i] = n - i;//обернено-упорядковане заповнення
        break;

    }
}

void v_out()//функція для виведення вектору до і після сортування
{
    V_Filling(Vector, VectorLength, 3);
    for(i=0; i<VectorLength; i++)
    {
        printf("%i  ",Vector[i]);
    }
    printf("\n-------------------\n");

    //V_InsertSort(Vector, VectorLength);
    //V_Select(Vector, VectorLength);
    //V_Shell(Vector, VectorLength);

    for(int i=0; i<VectorLength; i++)
    {
        printf("%i  ",Vector[i]);
    }

}
