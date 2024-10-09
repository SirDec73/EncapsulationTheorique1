#include "AMovable.h"

//AMovable::AMovable(float _x, float _y, float _s) : speed(_s){
//	vect.SetPositionX(_x);
//	vect.SetPositionY(_y);
//}

AMovable::AMovable() {
	direction.SetPositionX(0.f);
	direction.SetPositionY(0.f);
	speed = 0.f;
}


void AMovable::SetDirection(float _x,float _y) {
	direction.SetPositionX(_x);
	direction.SetPositionY(_y);
}

void AMovable::SetSpeed(float _s) {
	speed = _s;
}