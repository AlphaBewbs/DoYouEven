#include "subject.h"

void Subject::attach(Unit *unit)
{
	mObservers.push_back(unit);
	unit->registerSubject(this);
}

void Subject::detach(Unit *unit)
{
	for(int i = 0; i < mObservers.size(); ++i)
		if(unit == mObservers[i])
			mObservers.erase(mObservers.begin() + i);
}

void Subject::notify()
{
	for(int i = 0; i < mObservers.size(); ++i)
		mObservers[i]->update();
}
