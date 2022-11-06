#include "BaseCityCultureService.h"



uint64_t BaseCityCultureService::GetCulture(PlayerTypes player) const
{
	uint64_t returnValue = 0;

	returnValue = returnValue + _cultureBlocks[player] * _blockSize;
	returnValue = returnValue + _cultureAmounts[player];

	return returnValue;
}