#include "Mob.h"
#include "iostream"

Mob::Mob(float _x, float _y, float _hp, float _directionX, float _directionY) {
	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	maxHP = _hp;
	actualHP = _hp;
	direction.SetPositionX(_directionX);
	direction.SetPositionY(_directionY);

	std::cout << "Mob just created at x = " << vect.GetPositionX()
		<< " and y = " << vect.GetPositionY() 
		<< " with " <<  maxHP 
		<< " HP with a direction x = " << direction.GetPositionX() 
		<< " and y = " << direction.GetPositionY() 
		<< std::endl;
}

void Mob::TakeDamage(float damage) {
	actualHP -= damage;
	std::cout << "Mob just taked damage";
}

void Mob::Move() {

	/////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "Mob move to x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY();
}