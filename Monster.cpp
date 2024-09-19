#include "Monster.h"

Monster::Monster(const std::string& n, const int a, const int h, const int mh) :Unit(n, a, h, mh)
{
}

void Monster::Attack() const
{
	std::cout << name << "�� �б⸦ �ֵѷ���!" << std::endl;
}

void Monster::TakeDamage(const int damage)
{
	health -= damage;
	std::cout << health << std::endl;
}

void Monster::State()
{
	std::cout << "------------------------------------\n";
	std::cout << name << "�� ���ݷ� : " << attack << "\n";
	std::cout << name << "�� ü�� : " << health << "\n";
	std::cout << "------------------------------------\n";
}