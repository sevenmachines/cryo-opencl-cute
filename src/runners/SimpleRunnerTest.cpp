/*
 * SimpleRunnerTest.cpp
 *
 *  Created on: 5 Mar 2011
 *      Author: "SevenMachines <SevenMachines@yahoo.co.uk>"
 */

#include "SimpleRunnerTest.h"
#include "runners/SimpleRunner.h"
#include <sstream>
#include "OpenCLPrint.h"

namespace cryo {

namespace runners {

void SimpleRunnerTest::runSuite() {
	cute::suite s;
	s.push_back(CUTE(SimpleRunnerTest::testRun));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "SimpleRunnerTest");
}

void SimpleRunnerTest::testRun() {
	// Good creation
	{
		SimpleRunner runner;
		ASSERT(runner.getKernelSource()!="");
		runner.setUpBuffer();
		runner.run();
	}
	ASSERTM("TODO", false);
}

}//NAMESPACE

}//NAMESPACE
