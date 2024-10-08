#pragma once
#ifndef POINT_H__
#define POINT_H__
#include <string>

class Point {
public:
	float x;
	float y;
	float z;

	void SetValue();
	std::string ToString();
};

#endif
