#include "character.h"

Character::Character(int _hp) : hp(_hp) {
	this->maxHP = hp;
}

Character::~Character() {

}

void Character::setHP(int) {
}

void Character::setMaxHP(int) {
}


int Character::getHP(){
	return hp;
}

int Character::getMaxHP() {
	return maxHP;
}