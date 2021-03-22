#include "Driver.h"
#include <getopt.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);

	//Create instance of Driver class
	Driver test;

	//Get command line options
	test.get_options(argc, argv);

	//read in master log
	test.read_input();

	//run main loop
	test.mainLoop();
}