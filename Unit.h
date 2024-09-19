// ���⸦ �߻�Ŭ������
#include<iostream>
#pragma once
class Unit
{
protected:
	std::string name;
	int health;
public:
	Unit(const std::string& n, const int h);
	virtual ~Unit();

	// ���������Լ�
	virtual void Attack()const = 0;

	virtual void TakeDamage(int damage) = 0;

	void Move();
};