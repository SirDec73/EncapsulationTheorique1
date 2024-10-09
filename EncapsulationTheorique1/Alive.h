#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
protected:
	float maxHP;
	float actualHP;

public:
	/*Alive(float);*/
	Alive();
	virtual float GetMaxHP();
	virtual float GetActualHP();
	virtual void TakeDamage(float);

};


#endif // !ALIVE_H__

