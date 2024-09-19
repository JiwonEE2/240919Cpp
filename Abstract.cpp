/*
=================================================
- 추상화
ㄴ 비슷한 개념의 데이터나 작업을 묶어 정의해 공통되게 관리하는 것

- 추상클래스
ㄴ 하나 이상의 순수가상함수를 포함한 클래스
ㄴ 추상클래스는 인스턴스화 시킬 수 없다
ㄴ 다른 클래스들이 상속받아야 하는 기본 인터페이스나 기본동작을 정의하는데 사용
ㄴ 특정 함수들이 자식클래스에 의해 구현되도록 강제 -> 반드시 해야함
=================================================
*/
#include"Player.h"
int main() {
	Player* p = new Player("홍", 10);
	p->Attack();
	p->TakeDamage(5);
	p->Move();
	delete p;

	// 유닛클래스는 추상클래스(순수가상함수를 들고 있다) 이므로 인스턴스화가 불가
	// Unit* u = new Unit("asdf", 100);
}