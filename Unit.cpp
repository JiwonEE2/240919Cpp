#include "Unit.h"

Unit::Unit(const std::string& n, const int h) :name(n), health(h)
{
}

Unit::~Unit()
{
}

void Unit::Move()
{
	std::cout << "���� �Լ�" << std::endl;
}