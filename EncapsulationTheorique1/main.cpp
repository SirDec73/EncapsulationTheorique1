#include <iostream>
#include <vector>
#include <string>
#include "point.h"

int main(int argc, const char* argv[]) {
	
	Point point;

	point.SetValue();
	std::string pointPosition = point.ToString();

	std::cout << pointPosition << std::endl;

	/*std::cout << "Hello World !" << std::endl;

	int nb;
	std::vector<int> iArray;


	for (int i = 0; i < 3; i++) {

		std::cout << "Choose a number" << std::endl;
		std::cin >> nb;

		iArray.push_back(nb);

		std::cout << "Your vector" << std::endl;

		for (int j = 0; j < iArray.size(); j++) {
			std::cout << iArray[j] << std::endl;
		}
	}*/



	return 0;

}