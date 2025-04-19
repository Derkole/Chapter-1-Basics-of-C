/*Создайте простую консольную программу,
 которая рассчитывает сумму расходов за неделю
*/

/*Функциональность:
•	Запросите у пользователя имя.
•	Запросите расходы за каждый день недели (7 значений).
•	Выведите общую сумму расходов.
•	Выведите среднее значение расходов.
*/

#include <iostream>
#include <string>

int main()
{
    // Инстурция по вводу имени
    std::cout << "Введите ваше имя: " << '\n';
    std::string name;
    std::getline(std::cin, name);

    // Инстурция по вводу расходов за 7 дней
    std::cout << "Введите ваши расходы за 7 дней: " << '\n';

    std::cout << "Понедельник: ";
    double monday{};
    std::cin >> monday;

    std::cout << "Вторник: ";
    double tuesday{};
    std::cin >> tuesday;

    std::cout << "Среда: ";
    double wednesday{};
    std::cin >> wednesday;

    std::cout << "Четверг: ";
    double thursday{};
    std::cin >> thursday;

    std::cout << "Пятница: ";
    double friday{};
    std::cin >> friday;

    std::cout << "Суббота: ";
    double saturday{};
    std::cin >> saturday;

    std::cout << "Воскресенье: ";
    double sunday{};
    std::cin >> sunday;

    // Вычисления суммы расходов 
    double sum{monday + tuesday + wednesday + thursday + friday + saturday + sunday};
    
    // Вычисления средних расходов
    double average{sum / 7};

    // Вывод сумму расходов и средних расходов
    std::cout << name << "," << "за неделю вы тратите " << sum << " рублей" 
    << ", а в среднем за неделю ваши траты составляют " << average << " рублей";
    
    return 0;
}