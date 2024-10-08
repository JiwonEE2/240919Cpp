/*
추상클래스를 활용(Unit)
1. Attack이라는 순수가상함수를 포함할것.
ㄴAttack이외에 순수가상함수포함해도 상관없음(추가)
2. 유닛클래스를 상속받아 자식클래스에서
순수가상함수를 오버라이딩 할것.(더 해도 됨.)
3. 자식클래스는 각각의 고유 함수들이 존재
(자유롭게 만들것.)
4. 각각의 캐릭터를 인스턴스화하고 기본 스탯을 출력할것.
*/
#include"Player.h"
#include"Monster.h"
int main() {
	Player* p = new Player("홍", 10, 20, 50);
	Monster* m = new Monster("오크", 2, 30,30);

	p->State();
	m->State();

	p->Heal();
	p->State();

	p->Attack();
	m->TakeDamage(10);
	m->State();
}