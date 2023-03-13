#include <iostream>

class Character
{
protected:
	int mHP;

public:
	Character() : mHP{}
	{
		std::cout << "+[Character]" << std::endl;
	}

	virtual ~Character()
	{
		std::cout << "-[Character]" << std::endl;
	}

	virtual void Attack()
	{
		std::cout << "virtual attack!" << std::endl;
	}
};

class Warrior : public Character
{
public:
	Warrior()
	{
		std::cout << "+[Warrior]" << std::endl;
	}
	~Warrior()
	{
		std::cout << "-[Warrior]" << std::endl;
	}
	void Attack()
	{
		std::cout << "\t전사는 검을 휘둘렀다!" << std::endl;
	}
	void DoubleSwing()
	{
		std::cout << "\t전사는 검을 두번 휘둘렀다!" << std::endl;
	}		// Warrior만 가지고 있는 스킬
};

int main()
{
	Character* pHero = new Warrior;		// 다형성
	pHero->Attack();

	// 파생 클래스 만의 고유스킬을 사용하려면?
	((Warrior*)pHero)->DoubleSwing();		// 형변환을 사용한다! (연산자 우선순위 주의!)
	
	delete pHero;
}
