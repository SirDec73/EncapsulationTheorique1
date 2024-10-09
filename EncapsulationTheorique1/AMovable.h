#ifndef AMOVABLE_H__
#define AMOVABLE_H__
#include "Vector2.h"
#include "Entity.h"

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
	virtual void Move(Entity&) = 0;

};


#endif // !AMOVABLE_H__

