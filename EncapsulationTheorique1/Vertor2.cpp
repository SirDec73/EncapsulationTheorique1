#include <iostream>
#include "Vector2.h"
#include <sstream>

Vector2::Vector2() : x(0.f), y(0.f) {

}

void Vector2::SetPositionX(float _x) {
	x = _x;
}

void Vector2::SetPositionY(float _y) {
	y = _y;
}

float Vector2::GetPositionX() {

	return x;

}

float Vector2::GetPositionY() {

	return y;
}