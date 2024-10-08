#ifndef POINT_H__
#define POINT_H__
#include <string>

class Point {
public:
	float x;
	float y;
	float z;

	Point();

	void SetValue();
	
	std::string ToString();

};

#endif
