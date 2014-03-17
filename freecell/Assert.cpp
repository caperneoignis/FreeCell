#include <string>
#include <iostream>
using namespace std;

#include "Assert.h"

namespace cs231
{
	void Assert(bool testResult, string testName)
	{
		if (testResult)
		{
			cerr << testName << " -------- passed!" << endl;
		}
		else
		{
			cerr << testName << " ******** FAILED!" << endl;
		}
	}
}