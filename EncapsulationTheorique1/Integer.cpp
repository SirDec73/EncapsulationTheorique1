#include "Integer.h"
#include <iostream>

Integer::Integer() : number(0) {

}

Integer::Integer(int k) : number(k) {

}

int Integer::GetNumber() {
	return number;
}

Integer Integer::operator+(const Integer& k) {
	Integer tmp(this->number + k.number);
	return tmp;
}

void Integer::operator+=(const Integer& k) {
	this->number += k.number;
}

Integer Integer::operator-(const Integer& k) {
	Integer tmp(this->number - k.number);
	return tmp;
}

void Integer::operator-=(const Integer& k) {
	this->number -= k.number;
}

Integer Integer::operator*(const Integer& k) {
	Integer tmp(this->number * k.number);
	return tmp;
}

void Integer::operator*=(const Integer& k) {
	this->number *= k.number;
}

Integer Integer::operator/(const Integer& k) {
	Integer tmp(this->number / k.number);
	return tmp;
}

void Integer::operator/=(const Integer& k) {
	this->number /= k.number;
}

Integer Integer::operator%(const Integer& k) {
	Integer tmp(this->number % k.number);
	return tmp;
}

void Integer::operator%=(const Integer& k) {
	this->number %= k.number;
}

void Integer::operator<<(const Integer& k) {
	this->number << k.number;
}

void Integer::pow(int _exposant) {
	Integer nb(this->number);
	for (int i = 0; i < _exposant - 1; i++) {
		this->operator*=(nb);
	}
}