#ifndef IATTACKER_H__
#define IATTACKER_H__
#include "Alive.h"

class IAttacker {

	virtual void Attack(Alive&,float) = 0;
};

#endif // !IATTACKER_H__
