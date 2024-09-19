#pragma once
#include"Unit.h"
class Player :public Unit
{
public:
	Player(const std::string& n, const int a, const int h, const int mh);
	void Attack()const override;
	void TakeDamage(const int damage)override;
	void State()override;
	void Heal();
};