#ifndef __TIMER_H_INCLUDED__
#define __TIMER_H_INCLUDED__

#include <windows.h>

class HiResTimer
{
public:
	bool init()
	{
		if (QueryPerformanceFrequency(&ticksPerSecond) == false)
		{
			return false;
		}
		else
		{
			QueryPerformanceCounter(&startTime);
			return true;
		}
	}
	
	float GetElapsedSeconds()
	{
		static LARGE_INTEGER lastTime = startTime;
		LARGE_INTEGER currentTime;
		QueryPerformanceCounter(&currentTime);
		float seconds =  ((float)currentTime.QuadPart - (float)lastTime.QuadPart) 
		/ (float)ticksPerSecond.QuadPart;
		lastTime = currentTime;
		return seconds;
	}
	
	float GetFPS(unsigned long elapsedFrames = 1)
	{
		static LARGE_INTEGER lastTime = startTime;
		LARGE_INTEGER currentTime;
		QueryPerformanceCounter(&currentTime);
		float fps = (float)elapsedFrames * (float)ticksPerSecond.QuadPart 
		/ ((float)currentTime.QuadPart - (float)lastTime.QuadPart);
		lastTime = currentTime;
		return fps;
	}
	
private:
	LARGE_INTEGER   startTime;
	LARGE_INTEGER   ticksPerSecond;
};
#endif
