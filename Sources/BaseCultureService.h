#pragma once

#ifndef BaseCultureService_h__
#define BaseCultureService_h__

#include "CvCity.h"
#include "CvEnums.h"

class BaseCultureService
{
protected:
	CvCity* city;
	int _cultureLevel = 0;
	int _cultureAmount = 0;

public:
	BaseCultureService(CvCity* c) {
		city = c;
	}
	virtual CultureLevelTypes GetCultureLevel() const;
	virtual int GetCultureThreshhold() const;
	virtual int CalculateCityOutput();
};


#endif
