#ifndef AMOVABLE_H__
#define AMOVABLE_H__
#include "Vector2.h"

class AMovable
{
protected:
	Vector2 direction;
	float speed;
public:
	/*AMovable(float, float, float);*/
	AMovable();
	virtual void SetDirection(float, float);
	virtual void SetSpeed(float);
	virtual void Move() = 0;

};


#endif // !AMOVABLE_H__

