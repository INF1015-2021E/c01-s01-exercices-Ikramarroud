///
/// Traite les arguments de ligne de commande à l'aide de TCLAP.
///

#pragma once


#include <cstddef>
#include <cstdint>

#include <string>

using namespace std;
using namespace std::literals;


struct Arguments {
	int    number;
	string filename;
};


Arguments parseArgs(int argc, char* argv[]);

