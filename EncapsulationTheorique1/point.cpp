#include <iostream>
#include "point.h"
#include <string>
#include <sstream>

Point::Point() {

}

void Point::SetValue() {
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;
}

std::string Point::ToString() {
	// Version Prof
	/*std::stringstream sStream;
	sStream << "Point : x : " << x << ", y :" << y << ", z :" << z;
	return sStream.str();*/



	// Version Cédric
	std::string sx = std::to_string(x);
	std::string sy = std::to_string(y);
	std::string sz = std::to_string(z);
	return "Point: x:" + sx + ",y:" + sy + ",z:" + sz;
}