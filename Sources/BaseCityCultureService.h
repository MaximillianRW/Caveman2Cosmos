#pragma once

#ifndef BaseCultureService_h__
#define BaseCultureService_h__

#include "CvCity.h"
#include "CvEnums.h"

class BaseCityCultureService
{
protected:
	static const int _blockSize = 100000;
	CvCity* city;
	
	int _cultureLevel;
	int* _cultureAmounts;
	int* _cultureBlocks;

public:
	BaseCityCultureService(CvCity* c) {
		city = c;
		_cultureAmounts = new int[MAX_PLAYERS];
		_cultureBlocks = new int[MAX_PLAYERS];
		_cultureLevel = 0;
	}
	~BaseCityCultureService() {
		SAFE_DELETE_ARRAY(_cultureAmounts);
		SAFE_DELETE_ARRAY(_cultureBlocks);
	}


	virtual CultureLevelTypes GetCultureLevel() const;
	virtual PlayerTypes FindMostCulturedPlayer() const;
	virtual int GetCultureThreshhold() const;
	virtual int CalculateCityOutput();
	virtual int AddCulture(int amount, PlayerTypes ePlayer);
	virtual int RemoveCulture(int amount, PlayerTypes ePlayer);
	virtual bool RemovePlayerCulture(PlayerTypes ePlayer);
	virtual uint64_t GetCulture(PlayerTypes ePlayer) const;
	virtual void DoPlotCulture();


};


#endif
