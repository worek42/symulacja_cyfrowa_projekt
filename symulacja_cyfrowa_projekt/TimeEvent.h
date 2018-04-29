#pragma once
#include "Event.h"
class TimeEvent :
	public Event
{
	int apperanceTime;
	
public:
	TimeEvent();
	~TimeEvent();
};

