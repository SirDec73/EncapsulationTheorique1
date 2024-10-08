#include "Entity.h"
#include "Vector2.h"
#include <iostream>

Entity::Entity(float _x, float _y) {
	Vect.SetPositionX(_x);
	Vect.SetPositionY(_y);
}

void Entity::SetPositionX(float _x) {
	Vect.SetPositionX(_x);
}

void Entity::SetPositionY(float _y) {
	Vect.SetPositionY(_y);
}

float Entity::GetPositionX() {
	std::cout << "from Entity ";
	return Vect.GetPositionX();
}

float Entity::GetPositionY() {
	std::cout << "from Entity ";
	return Vect.GetPositionY();
}