#ifndef MEASUREMENT_H_INCLUDED
#define MEASUREMENT_H_INCLUDED

#include <time.h>

// Загальна кількість вимірів часу роботи алгоритма
#define measurements_number 10
#define rejected_number 2
#define min_max_number 3

// Масив значень часу роботи алгоритма
extern clock_t  Res[measurements_number];

// Функція обробки і усереднення значень вимірів
// часу роботи алгоритма.
// Повертає усереднене значення часу роботи алгоритма.
float MeasurementProcessing();

#endif // MEASUREMENT_H_INCLUDED
