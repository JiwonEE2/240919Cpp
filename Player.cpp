#include "Player.h"

Player::Player(const std::string& n, const int a, const int h, const int mh) :Unit(n, a, h, mh)
{
}

void Player::Attack() const
{
	std::cout << name << "이 칼을 휘두름" << std::endl;
}

void Player::TakeDamage(const int damage)
{
	health -= damage;
	std::cout << health << std::endl;
}

void Player::State()
{
	std::cout << "------------------------------------\n";
	std::cout << name << "의 공격력 : " << attack << "\n";
	std::cout << name << "의 체력 : " << health << "\n";
	std::cout << "------------------------------------\n";
}

void Player::Heal()
{
	health = maxHealth;
	std::cout << "------------------------------------\n";
	std::cout << name << "은 체력을 회복하였습니다\n";
	std::cout << "------------------------------------\n";
}
