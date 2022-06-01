#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED

#include "filling.h"
#include "measurement.h"
#include "global.h"
#include <math.h>

clock_t V_InsertSort(int *A, int n);
clock_t V_Select(int *A, int n);
clock_t V_Shell(int *A, int n);
clock_t InsertSort();
clock_t Select();
clock_t Shell();

void V_InsertSortMeasurement(int a);
void V_SelectMeasurement(int b);
void V_ShellMeasurement(int b);
void InsertSortMeasurement(int a);
void SelectMeasurement(int a);
void ShellMeasurement(int a);



#endif // SORTING_H_INCLUDED
