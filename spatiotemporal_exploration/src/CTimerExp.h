#ifndef CTIMEREXP_H
#define CTIMEREXP_H

/**
@author Tom Krajnik
*/
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>

#define TIMEOUT_INTERVAL 40000

class CTimer
{
	public:
		CTimer(int timeOut = TIMEOUT_INTERVAL);
		~CTimer();

		void reset(int timeOut = TIMEOUT_INTERVAL);

		int pause();
		int start();
		int getTime();
		bool timeOut();
		int getRest();

	private:
		int getRealTime();
		int startTime;
		int pauseTime;
		bool running;
		int timeoutInterval;
};

#endif
