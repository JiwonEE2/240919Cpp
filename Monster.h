#pragma once
#include"Unit.h"
class Monster :public Unit
{
public:
	Monster(const std::string& n, const int a, const int h, const int mh);
	void Attack()const override;
	void TakeDamage(const int damage)override;
	void State()override;
};