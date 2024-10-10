#include "Player.h"
#include <iostream>

Player::Player(float _x, float _y, float _hp, float _directionX, float _directionY, float _speed): Entity(), Alive(),AMovable(),IAttacker() {

	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	maxHP = _hp;
	actualHP = _hp;
	direction.SetPositionX(_directionX);
	direction.SetPositionY(_directionY);
	speed = _speed;

	std::cout << "Player just created at x = " << vect.GetPositionX()
		<< " and y = " << vect.GetPositionY()
		<< " with " << maxHP
		<< " HP with a direction x = " << direction.GetPositionX()
		<< " and y = " << direction.GetPositionY()
		<< std::endl;
}

void Player::TakeDamage(float damage) {
	actualHP -= damage;
	std::cout << "Player just taked damage" << std::endl;
}

void Player::Move(Entity& target) {

	float targetX = target.GetPositionX();
	float targetY = target.GetPositionY();

	SetDirection(targetX - vect.GetPositionX(), targetY - vect.GetPositionY());

	if (direction.GetPositionX() + direction.GetPositionY() == 0) {
		std::cout << "Player don't have to move : x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY() << std::endl;
		return;
	}

	float k = abs(speed / (direction.GetPositionX() + direction.GetPositionY()));

	SetPositionX(vect.GetPositionX() + k * direction.GetPositionX());
	SetPositionY(vect.GetPositionY() + k * direction.GetPositionY());

	std::cout << "Player move to x = " << GetPositionX() << " and y = " << GetPositionY() << std::endl;
}

void Player::Attack(Alive* target,float damage) {
	std::cout << "Player just attacked" << std::endl;
	target->TakeDamage(damage);
}