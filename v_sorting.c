/*#include "sorting.h"
#include "fullfill.h"
#include "measurement.h"
#include "global.h"





clock_t V_Shell(int *A, int N)
{
    clock_t time_start, time_stop;
	int const max_t = (N - 1) / 4 + 1;
	int arr[N];
	int arr1[max_t];
	int temp;
	int j, k, t, w;
	if (N < 4)
        {t = 0;}
	else
	{
		t = (log(N) / log(2)) - 1;
	}
	arr1[t] = 0;
	time_start = clock();
	for (int i = t - 1; i >= 0; i--)
		arr1[i] = 2 * arr1[i + 1] + 1;
	for (int w = 0; w < t; w++)
	{
		k = arr1[w];
		for (int i = k; i < N; i++) {
			temp = arr[i];
			j = i;
			while ((j >= k) && (temp < (arr[j - k]))) {
				arr[j] = arr[j - k];
				j = j - k;
			}
			arr[j] = temp;
		}
	}
	time_stop = clock();
	return time_stop - time_start;
}

void V_ShellMeasurement()
{
    for (int i = 0; i < measurements_number; i++)
    {
        V_Filling(Vector, VectorLength, 3);
        Res[i] = V_Shell(Vector, VectorLength);
    }
}
*/
