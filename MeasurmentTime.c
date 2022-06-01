
#include "global.h"  //підключення модуля глобальних даних
#include "fullfill.h"
#include "MeasurmentTime.h"
#include "sort.h"
#include "Measurement.h"
void MeasurementVector(int k) {
	for (int i = 0; i < measurements_number; i++)
	{
	     switch (k) {
		case 1:
			fillVectorSort();
			Res[i] = sort1Vector();
		case 2:
			fillVector();
			Res[i] = sort1Vector();
		case 3:
			fillVectorReverse();
			Res[i] = sort1Vector();
		}
	}
}
void Measurement1Array(int k) {

	for (int i = 0; i < measurements_number; i++)
	{
		switch (k) {
		case 1:
			fillArraySort();
			Res[i] = Sort1Array();
		case 2:
			fillArray();
			Res[i] = Sort1Array();
		case 3:
			fillArrayReverse();
			Res[i] = Sort1Array();
		}
	}

}
void Measurement2Array(int k) {

	for (int i = 0; i < measurements_number; i++)
	{
		switch (k) {
		case 1:
			fillArraySort();
			Res[i] = Sort2Array();
		case 2:
			fillArray();
			Res[i] = Sort2Array();
		case 3:
			fillArrayReverse();
			Res[i] = Sort2Array();
		}
	}
}
void Measurement3Array(int k) {

	for (int i = 0; i < measurements_number; i++)
	{
		switch (k) {
		case 1:
			fillArraySort();
			Res[i] = Sort3Array();
		case 2:
			fillArray();
			Res[i] = Sort3Array();
		case 3:
			fillArrayReverse();
			Res[i] = Sort3Array();
	}
}
}
