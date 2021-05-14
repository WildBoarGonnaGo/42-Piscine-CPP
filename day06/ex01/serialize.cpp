#include "serialize.hpp"

void	*serialize(void)
{
	char	*rawData = new char[52];
	
	for (int i = 0; i < 24; ++i)
	{
		rawData[i] = rand() % 128;
		i -= (rawData[i] < 33 || rawData[i] > 126);
	}
	*(reinterpret_cast<int *>(rawData + 24)) = rand();
	for (int i = 28; i < 52; ++i)
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
	res->startStr.assign(reinterpret_cast<char *>(temp), 24);
	res->midInt = *(reinterpret_cast<int *>(temp + 24));
	res->finStr.assign(reinterpret_cast<char *>(temp + 28), 24);
	return (res);
}