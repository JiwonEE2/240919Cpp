// 여기를 추상클래스로
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

	// 순수가상함수
	virtual void Attack()const = 0;

	virtual void TakeDamage(int damage) = 0;

	virtual void State() = 0;

	void Move();
};