#include "engine.h"

engine::engine(int v)
{
	volume = v;
}

void engine::print2()
{
	cout << "engine volume -->" << volume;
}
