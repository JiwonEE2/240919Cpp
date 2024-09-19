#include "Player.h"

Player::Player(const std::string& n, const int a, const int h, const int mh) :Unit(n, a, h, mh)
{
}

void Player::Attack() const
{
	std::cout << name << "�� Į�� �ֵθ�" << std::endl;
}

void Player::TakeDamage(const int damage)
{
	health -= damage;
	std::cout << health << std::endl;
}

void Player::State()
{
	std::cout << "------------------------------------\n";
	std::cout << name << "�� ���ݷ� : " << attack << "\n";
	std::cout << name << "�� ü�� : " << health << "\n";
	std::cout << "------------------------------------\n";
}

void Player::Heal()
{
	health = maxHealth;
	std::cout << "------------------------------------\n";
	std::cout << name << "�� ü���� ȸ���Ͽ����ϴ�\n";
	std::cout << "------------------------------------\n";
}
