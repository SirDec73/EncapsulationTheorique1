#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float _x, float _y, float _hp):Entity(),Alive() {
	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	maxHP = _hp;
	actualHP = _hp;
}
void BreakableObject::TakeDamage(float damage) {
	actualHP -= damage;
	std::cout << "Breakable Object just broke" << std::endl;
}