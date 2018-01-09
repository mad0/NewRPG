#pragma once

class Character {
private:
	int hp;
	int maxHP;

public:
	Character(int);
	~Character();
	void setHP(int);
	void setMaxHP(int);
	int getHP();
	int getMaxHP();
	int bar();
};

