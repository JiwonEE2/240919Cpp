#include "Monster.h"

Monster::Monster(const std::string& n, const int a, const int h, const int mh) :Unit(n, a, h, mh)
{
}

void Monster::Attack() const
{
	std::cout << name << "°¡ µÐ±â¸¦ ÈÖµÑ·¶´Ù!" << std::endl;
}

void Monster::TakeDamage(const int damage)
{
	health -= damage;
	std::cout << health << std::endl;
}

void Monster::State()
{
	std::cout << "------------------------------------\n";
	std::cout << name << "ÀÇ °ø°Ý·Â : " << attack << "\n";
	std::cout << name << "ÀÇ Ã¼·Â : " << health << "\n";
	std::cout << "------------------------------------\n";
}