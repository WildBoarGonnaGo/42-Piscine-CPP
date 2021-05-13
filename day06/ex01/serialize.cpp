#include "serialize.hpp"

void	*serialize(void)
{
	char	*rawData = new char[20];
	
	for (int i = 0; i < 8; ++i)
	{
		rawData[i] = rand() % 128;
		i -= (rawData[i] < 33 || rawData[i] > 126);
	}
	*(reinterpret_cast<int *>(rawData + 8)) = rand();
	for (int i = 12; i < 20; ++i)
	{
		rawData[i] = rand() % 128;
		i -= (rawData[i] < 33 || rawData[i] > 126);
	}
	return (reinterpret_cast<void *>(rawData));
}

Data	*deserialize(void *raw)
{
	Data	*res = new Data;
	char	*temp;

	temp = reinterpret_cast<char *>(raw);
	res->startStr.assign(reinterpret_cast<char *>(temp), 8);
	res->midInt = *(reinterpret_cast<int *>(temp + 8));
	res->finStr.assign(reinterpret_cast<char *>(temp + 12), 8);
	return (res);
}