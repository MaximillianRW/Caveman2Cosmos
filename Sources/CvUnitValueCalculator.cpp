#include "CvUnitValueCalculator.h"


int CvUnitValueCalculator::CalculateValue(CvUnitInfo* pUnitInfo) const
{
	int baseDamage = pUnitInfo->getCombat();
	int movement = pUnitInfo->getMoves();
	return 0;
} 