#include "environment.h"

Environment::Environment()
	: Subject()
{
	mState = "";
}

string Environment::state()
{
	return mState;
}

void Environment::setState(string state)
{
	notify();
}
