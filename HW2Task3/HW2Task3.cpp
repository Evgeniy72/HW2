#include <iostream>
struct adress
{
    std::string m_city;
    std::string m_street;
    unsigned int m_house_number;
    unsigned int m_room_number;
    unsigned int m_index;
};
void show_adress(adress p)
{
    std::cout << "Город:  " << p.m_city << std::endl << "Улица:  " << p.m_street << std::endl << "Номер дома:  " << p.m_house_number << std::endl
        << "Номер квартиры:  " << p.m_room_number << std::endl << "Индекс:  " << p.m_index << std::endl;
}
int main() {
    setlocale(LC_ALL, "rus");
    adress me = {"Тюмень", "Пермякова", 24, 33, 625013};
    adress john = { "Тюмень", "Широтная", 146, 92, 625074 };
    show_adress(me);
    show_adress(john);
}
