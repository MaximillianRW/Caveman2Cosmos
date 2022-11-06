#pragma once

#ifndef BaseCultureService_h__
#define BaseCultureService_h__

#include "CvCity.h"
#include "CvEnums.h"

class BaseCityCultureService
{
protected:
	CvCity* city;
	int _cultureLevel;
	int _cultureAmount;
	

public:
	BaseCityCultureService(CvCity* c) {
		city = c;
	}
	virtual CultureLevelTypes GetCultureLevel() const;
	virtual int GetCultureThreshhold() const;
	virtual int CalculateCityOutput();
	virtual int AddCulture(int amount, PlayerTypes ePlayer);
	virtual int RemoveCulture(int amount, PlayerTypes ePlayer);
	virtual bool RemovePlayerCulture(PlayerTypes ePlayer);
	virtual int GetCulture(PlayerTypes ePlayer);
	virtual void DoPlotCulture();

};


#endif
