#include "Mob.h"
#include "iostream"

Mob::Mob(float _x, float _y, float _hp, float _directionX, float _directionY,float _speed):Entity(), Alive(),AMovable() {
	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	maxHP = _hp;
	actualHP = _hp;
	direction.SetPositionX(_directionX);
	direction.SetPositionY(_directionY);
	speed = _speed;

	std::cout << "Mob just created at x = " << vect.GetPositionX()
		<< " and y = " << vect.GetPositionY() 
		<< " with " <<  maxHP 
		<< " HP with a direction x = " << direction.GetPositionX() 
		<< " and y = " << direction.GetPositionY() 
		<< std::endl;
}

void Mob::TakeDamage(float damage) {
	actualHP -= damage;
	if (actualHP > 0) {
		std::cout << "Mob just taked damage" << std::endl;
	}
	else {
		std::cout << "Mob just died" << std::endl;
	}
}

void Mob::Move(Entity& target) {

	float targetX = target.GetPositionX();
	float targetY = target.GetPositionY();

	SetDirection(targetX - vect.GetPositionX(), targetY - vect.GetPositionY());

	if (direction.GetPositionX() + direction.GetPositionY() == 0) {
		std::cout << "Mob don't have to move : x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY() << std::endl;
		return;
	}

	float k = abs(speed / (direction.GetPositionX() + direction.GetPositionY()));

	SetPositionX(vect.GetPositionX() + k * direction.GetPositionX());
	SetPositionY(vect.GetPositionY() + k * direction.GetPositionY());

	std::cout << "Mob move to x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY() << std::endl;
}