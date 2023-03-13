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
		std::cout << "\t����� ���� �ֵѷ���!" << std::endl;
	}
	void DoubleSwing()
	{
		std::cout << "\t����� ���� �ι� �ֵѷ���!" << std::endl;
	}		// Warrior�� ������ �ִ� ��ų
};

int main()
{
	Character* pHero = new Warrior;		// ������
	pHero->Attack();

	// �Ļ� Ŭ���� ���� ������ų�� ����Ϸ���?
	((Warrior*)pHero)->DoubleSwing();		// ����ȯ�� ����Ѵ�! (������ �켱���� ����!)
	
	delete pHero;
}
