#ifndef MEASUREMENT_H_INCLUDED
#define MEASUREMENT_H_INCLUDED

#include <time.h>

// �������� ������� ����� ���� ������ ���������
#define measurements_number 10
#define rejected_number 2
#define min_max_number 3

// ����� ������� ���� ������ ���������
extern clock_t  Res[measurements_number];

// ������� ������� � ����������� ������� �����
// ���� ������ ���������.
// ������� ���������� �������� ���� ������ ���������.
float MeasurementProcessing();

#endif // MEASUREMENT_H_INCLUDED
