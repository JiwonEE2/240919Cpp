// ���⸦ �߻�Ŭ������
#include<iostream>
#pragma once
class Unit
{
protected:
	std::string name;
	int attack;
	int health;
	int maxHealth;
public:
	Unit(const std::string& n, const int a, const int h, const int mh);
	virtual ~Unit();

	// ���������Լ�
	virtual void Attack()const = 0;

	virtual void TakeDamage(int damage) = 0;

	virtual void State() = 0;

	void Move();
};