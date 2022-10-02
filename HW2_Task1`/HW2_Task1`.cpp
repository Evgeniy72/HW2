#include <iostream>

int main() {
	setlocale(LC_ALL, "rus");
	enum class month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December,
	};
	month now = month::September;
	int a = 1;
	while (a != 0) {
		std::cout << "Введите номер месяца (0 чтобы выйти)" << std::endl;
		std::cin >> a;
		switch (static_cast<month>((a))) {
		case month::January:
			std::cout << "Январь" << std::endl;
			break;
		case (month::February):
			std::cout << "Февраль" << std::endl;
			break;
		case (month::March):
			std::cout << "Март" << std::endl;
			break;
		case (month::April):
			std::cout << "Апрель" << std::endl;
			break;
		case (month::May):
			std::cout << "Май" << std::endl;
			break;
		case (month::June):
			std::cout << "Июнь" << std::endl;
			break;
		case (month::July):
			std::cout << "Июль" << std::endl;
			break;
		case (month::August):
			std::cout << "Август" << std::endl;
			break;
		case (month::September):
			std::cout << "Сентябрь" << std::endl;
			break;
		case (month::October):
			std::cout << "Октябрь" << std::endl;
			break;
		case (month::November):
			std::cout << "Ноябрь" << std::endl;
			break;
		case (month::December):
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Вы ошиблись планетой, нет такого месяца" << std::endl;
			break;
		}
	}
		std::cout << "Всего хорошего";

}