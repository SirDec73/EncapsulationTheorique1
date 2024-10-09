#include "StaticObject.h"
#include <iostream>
#include "Entity.h"

StaticObject::StaticObject(float _x, float _y) {

	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	std::cout << "Static Object just created at x = " << vect.GetPositionX() << "and y = " << vect.GetPositionY() << std::endl;
}