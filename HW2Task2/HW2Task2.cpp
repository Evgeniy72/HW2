#include <iostream>
struct bank_account
{
	unsigned int m_account_number;
	std::string m_name;
	int m_summ;
};
void change_summ(bank_account& p)
{
	unsigned int an;
	std::string nm;
	int sm;
	std::cout << "Введите номер счета:    ";
	std::cin >> an;
	if (an == p.m_account_number)
	{
		std::cout << "Введите имя:    ";
		std::cin >> nm;
		if (nm == p.m_name)
		{
			std::cout << "Введите состояние счета:    ";
			std::cin >> sm;
			if (sm == p.m_summ)
			{
				std::cout << "Введите новое состояние счета:    ";
				std::cin >> sm;
				p.m_summ = sm;
				std::cout << "Ваш счет " << p.m_name << "   " << p.m_account_number << "   " << p.m_summ;
			}
			else { std::cout << "Вы заподозрены в мошеничестве. Мы направили патруль"; }
		}
		else { std::cout << "Вы заподозрены в мошеничестве. Мы направили патруль"; }
	}
	else { std::cout << "Вы заподозрены в мошеничестве. Мы направили патруль"; }
}

int main() {
	setlocale(LC_ALL, "rus");
	bank_account me = { 666777666, "John", 2020 };
	change_summ(me);
}

