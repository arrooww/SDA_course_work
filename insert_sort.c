#include "sorting.h"

clock_t V_InsertSort(int *A, int n)//сортування вектору методом вставки
{
    int j;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int i=0; i<n+1; i++)
    {
        A[0]=A[i];
        j=i;
        while (A[0]<A[j-1])
        {
            A[j]=A[j-1];
            j=j-1;
        }
        A[j]=A[0];
    }
    time_stop = clock();
    return time_stop - time_start;
}
void V_InsertSortMeasurement(int a)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        V_Filling(Vector, VectorLength, a);
        Res[i] = V_InsertSort(Vector, VectorLength);
    }
}


clock_t InsertSort()//сортування масиву методом вставки
{
    int m;
    clock_t time_start, time_stop;

    time_start = clock();

    for(int k = 0; k<P; k++)
    {
        for(int i=0;i<M;i++)
            {
                for(int j=0;j<N;j++)
                {
                    A[0][i][j]=A[k][i][j];
                }
            }
        m=k;
        while (A[0][0][0]<A[m-1][0][0])
        {
            for(int i=0;i<M;i++)
            {
                for(int j=0;j<N;j++)
                {
                    A[m][i][j]=A[m-1][i][j];
                }
            }
            m=m-1;
        }
        for(int i=0;i<M;i++)
            {
                for(int j=0;j<N;j++)
                {
                    A[m][i][j]=A[0][i][j];
                }
            }
    }
    time_stop=clock();
    return time_stop-time_start;
}

void InsertSortMeasurement(int a)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        Filling(a);
        Res[i] = InsertSort();
    }
}

