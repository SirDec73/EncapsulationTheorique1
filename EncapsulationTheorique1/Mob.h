#ifndef MOB_H__
#define MOB_H__


#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive,public AMovable{
public:
	Mob(float x,float y,float hp,float dir_X,float dir_Y,float speed);
	void TakeDamage(float) override;
	void Move(Entity&) override;
};

#endif // !*MOB_H__