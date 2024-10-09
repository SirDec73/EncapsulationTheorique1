#include "Player.h"
#include <iostream>

Player::Player(float _x, float _y, float _hp, float _directionX, float _directionY): Alive(),AMovable(),IAttacker() {

	vect.SetPositionX(_x);
	vect.SetPositionY(_y);
	maxHP = _hp;
	actualHP = _hp;
	direction.SetPositionX(_directionX);
	direction.SetPositionY(_directionY);

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

void Player::Move() {

	/////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "Player move to x = " << vect.GetPositionX() << " and y = " << vect.GetPositionY();
}

void Player::Attack(Alive& target,float damage) {
	std::cout << "Player just attacked";
	target.TakeDamage(damage);
}