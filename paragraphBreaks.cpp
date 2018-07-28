#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


int main(int argc, char *argv[]) {
    if (argc < 2) {
		std::cerr << "Please provide an input file name" << std::endl;
		return 0;
    }
    std::cout << "Will add <br> to end of line" << std::endl;

    std::ifstream ifile(argv[1]);
	if (ifile.fail()) {
    	std::cerr << "Could not open file" << std::endl;
    	return 0;
    }

    std::ofstream ofile("output.txt");

    std::string line = ""; //for each line to add <li> to
    while(getline(ifile, line)) {
        line = line + "<br>\n";
        ofile << line;
    }

    return 0;
}