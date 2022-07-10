#pragma once
#ifndef CV_UNITVALUECALCULATOR
#define CV_UNITVALUECALCULATOR

#include "CvEnums.h"


class CvUnitValueCalculator
{
public:
	int CalculateCrimeControlValue(UnitTypes eUnit);
	int CalculateDiseaseControlValue();
	int CalculateEducationControlValue();
	int CalculateOffensiveValue();
	int CalculateDefensiveValue();
};

#endif

