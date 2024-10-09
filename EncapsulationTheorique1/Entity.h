#ifndef ENTITY_H__
#define ENTITY_H__
#include "Vector2.h"

class Entity {
protected:
	Vector2 vect;

public:

	Entity();
	/*Entity(float, float);*/

	virtual void SetPositionX(float);
	virtual void SetPositionY(float);
	virtual float GetPositionX();
	virtual float GetPositionY();
};

#endif // !ENTITY_H__
