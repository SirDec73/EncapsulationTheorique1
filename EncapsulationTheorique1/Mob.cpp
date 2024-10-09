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
	std::cout << "Mob just taked damage" << std::endl;
}

void Mob::Move(Entity& target) {

	float targetX = target.GetPositionX();
	float targetY = target.GetPositionY();

	SetDirection(targetX - vect.GetPositionX(), targetY - vect.GetPositionY());

	float k = speed / (direction.GetPositionX() + direction.GetPositionY());

	SetPositionX(vect.GetPositionX() + k * direction.GetPositionX());
	SetPositionY(vect.GetPositionY() + k * direction.GetPositionY());

	std::cout << "Mob move to x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY() << std::endl;
}