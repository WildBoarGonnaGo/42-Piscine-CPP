#include "Sample.hpp"

int main(void)
{
	Sample	sample;

	sample.bar('a');
	sample.bar(42);
	sample.bar((float const)3.14);
	sample.bar(sample);
	return (0);
}