#include "sorting.h"

clock_t V_Select(int *A, int n)//сортування вектору методом вибору
{
    int L, R, imin, imax, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    L=0;
    R=n-1;
    while (L<R)
    {
        imin=L;
        imax=L;
        for(int i=L+1; i<R+1; i++)
            if (A[i]<A[imin]) imin=i;
            else if (A[i]>A[imax]) imax=i;
        tmp=A[imin];
        A[imin]=A[L];
        A[L]=tmp;
        if (imax==L)
        {
            tmp=A[imin];
            A[imin]=A[R];
            A[R]=tmp;
        }
        else
        {
            tmp=A[imax];
            A[imax]=A[R];
            A[R]=tmp;
        }
        L=L+1;
        R=R-1;
    }
    time_stop = clock();
    return time_stop - time_start;
}
void V_SelectMeasurement(int b)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        V_Filling(Vector, VectorLength, b);
        Res[i] = V_Select(Vector, VectorLength);
    }
}

clock_t Select()//сортування масиву методом вибору
{
    int L, R, kmin, kmax, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    L=0;
    R=P-1;
    while (L<R)
    {
        kmin=L;
        kmax=L;
        for(int k=L+1; k<R+1; k++)
            if (A[k][0][0]<A[kmin][0][0]) kmin=k;
            else if (A[k][0][0]>A[kmax][0][0]) kmax=k;
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                tmp=A[kmin][0][0];
                A[kmin][0][0]=A[L][0][0];
                A[L][0][0]=tmp;
            }
        }
        if (kmax==L)
        {
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                tmp=A[kmin][i][j];
                A[kmin][i][j]=A[L][i][j];
                A[L][i][j]=tmp;
            }
        }
        }
        else
        {
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                tmp=A[kmax][i][j];
                A[kmax][i][j]=A[R][i][j];
                A[R][i][j]=tmp;
            }
        }
        }
        L=L+1;
        R=R-1;
    }
    time_stop = clock();
    return time_stop - time_start;
}

void SelectMeasurement(int a)//вимір часу роботи
{
    for (int i = 0; i < measurements_number; i++)
    {
        Filling(a);
        Res[i] = Select();
    }
}

