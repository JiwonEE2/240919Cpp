#include "Unit.h"

Unit::Unit(const std::string& n, const int a, const int h, const int mh) :name(n), attack(a), health(h), maxHealth(mh)
{
}

Unit::~Unit()
{
}

void Unit::Move()
{
	std::cout << "���� �Լ�" << std::endl;
}