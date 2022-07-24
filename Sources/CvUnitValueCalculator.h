#pragma once
#ifndef Cv_UnitValueCalculator_h__
#define Cv_UnitValueCalculator_h__

#include "CvEnums.h"
#include "CvInfos.h"
#include "CvUnit.h"
#include <map>


class CvUnitValueCalculator
{
public:
	virtual int CalculateValue(CvUnitInfo* pUnitInfo) const;
	void ClearCache() {
		m_unitValueCache.clear();
	};

private:
	std::map<int, int> m_unitValueCache;
};

#endif

