#include "character.h"

Character::Character(int _hp) : hp(_hp) {
	this->maxHP = hp;
}

Character::~Character() {

}

void Character::setHP(int _hp) {
	hp += _hp;
}

void Character::setMaxHP(int) {
}


int Character::getHP(){
	return hp;
}

int Character::getMaxHP() {
	return maxHP;
}

int Character::drawHP() {
	//Return % value (250 = 250px bar png width)
	return 250 * ((static_cast<float>(hp)) / (static_cast<float>(maxHP)));
}
