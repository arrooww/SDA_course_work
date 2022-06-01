#include "sorting.h"

clock_t V_Shell(int *A, int n)//сортування вектору методом Шелла
{
    clock_t time_start, time_stop;
    int const max_t = (n - 1) / 4 + 1;
    int arr1[max_t];
    int temp;
    int j, k, t, w;
    if (n < 4)
    {
        t = 0;
    }
    else
    {
        t = (log(n) / log(2)) - 1;
    }
    arr1[t] = 0;
    time_start = clock();
    for (int i = t - 1; i >= 0; i--)
        arr1[i] = 2 * arr1[i + 1] + 1;
    for (int w = 0; w < t; w++)
    {
        k = arr1[w];
        for (int i = k; i < n; i++)
        {
            temp = A[i];
            j = i;
            while ((j >= k) && (temp < (A[j - k])))
            {
                A[j] = A[j - k];
                j = j - k;
            }
            A[j] = temp;
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}

void V_ShellMeasurement(int b)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        V_Filling(Vector, VectorLength, b);
        Res[i] = V_Shell(Vector, VectorLength);
    }
}

clock_t Shell()//сортування масиву методом Шелла
{
    clock_t time_start, time_stop;
    int const max_t = (P - 1) / 4 + 1;
    int arr1[max_t];
    int temp;
    int m, r, t, w;
    time_start = clock();
    if (P < 4)
    {
        t = 0;
    }
    else
    {
        t = (log(P) / log(2)) - 1;
    }
    arr1[t-1] = 1;

    for (int k = t - 2; k >= 0; k--)
        arr1[k] = 2 * arr1[k + 1] + 1;

    for (int w = 0; w < t; w++)
{
        r = arr1[w];
        for (int k = r; k < P; k++)
        {
            for(int i=0; i<M; i++)
            {
                for(int j=0; j<N; j++)
                {
                    temp = A[k][0][0];
                }
            }
            m = k;
            while ((m >= r) && (temp < (A[m - r][0][0])))
            {
                for(int i=0; i<M; i++)
                {
                    for(int j=0; j<N; j++)
                    {
                        A[m][i][j] = A[m - r][i][j];
                    }
                }
                m = m - r;
            }
            for(int i=0; i<M; i++)
            {
                for(int j=0; j<N; j++)
                {
                    A[m][0][0] = temp;
                }
            }
        }
}
        time_stop = clock();
        return time_stop - time_start;

}



void ShellMeasurement(int a)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        Filling(a);
        Res[i] = Shell();
    }
}
