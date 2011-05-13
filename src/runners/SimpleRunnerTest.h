/*
 * SimpleRunnerTest.h
 *
 *  Created on: 5 Mar 2011
 *      Author: "SevenMachines <SevenMachines@yahoo.co.uk>"
 */

#ifndef SIMPLERUNNERTEST_H_
#define SIMPLERUNNERTEST_H_

#include "ICuteSuite.h"

namespace cryo {

namespace runners {

class SimpleRunnerTest :public ICuteSuite{
public:
	SimpleRunnerTest(){}
	virtual ~SimpleRunnerTest(){}

	/**
	 * Main entry point
	 */
	static void runSuite();

	/**
	 * test run
	 */
	static void testRun();

protected:

};

}

}

#endif /* SIMPLERUNNERTEST_H_ */
