#include "Alive.h"

//Alive::Alive(float hp) : maxHP(hp), actualHP(hp) {
//
//}

Alive::Alive() : maxHP(0.f), actualHP(0.f){
	
}

float Alive::GetMaxHP() {
	return maxHP;
}
float Alive::GetActualHP() {
	return actualHP;
}
void Alive::TakeDamage(float damage) {
	actualHP -= damage;
}