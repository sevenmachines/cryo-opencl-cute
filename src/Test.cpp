#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"

#include "runners/SimpleRunnerTest.h"

void runMainSuite(){
	cryo::runners::SimpleRunnerTest::runSuite();
}

int main(){
    runMainSuite();
    return 0;
}



