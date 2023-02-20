// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>//предоставляет возможность чтения и записи файлов в файловой системе
#include <iomanip>
#include <string>

struct Object
{ //определение структуры для объектов
    std::string name;
    std::string surname;
    std::string country;
    std::string profession;
    std::string card_number;
    int trips; // Количество поездок по карте.
};

int main()
{
    //инициализация массива объектов
    Object cards[5] = {
    {"БЭПК ЕДИНАЯ", "Для всех желающих", "Реализации не подлежит", "Реализация не производится", "При утере не восстанавливается.", 0},
    {"ЕДИНАЯ ТРАНСПОРТНАЯ КАРТА", "Для граждан льготной категории", "Выдача гражданам ЕТК приостановлена", "Выдача гражданам ЕТК приостановлена", "Восстановление на «БСК льготная»", 1},
    {"БСК «Курс»", "Для лиц первого года обучения", "В кассах станций метрополитена", "В кассах станций метрополитена", "В кассах станций метрополитена", 1},
    {"БСК «Банк «СИАБ»", "Для физических лиц", "В ПАО БАНК «СИАБ».", "В ПАО БАНК «СИАБ».", "В ПАО БАНК «СИАБ».", 3},
    {"БЭПК «ПАО ВымпелКом»", "Для клиентов оператора сотовой связи «Билайн».", "В салонах связи «Билайн».", "В салонах связи «Билайн».", "В салонах связи «Билайн».", 0}
    };


    std::ofstream file("cards.txt"); //запись в файл cards.txt
    /*Функция ofstream открывает файл для записи данных.
    Файл называется "cards.txt" и будет создан в текущей директории программы,
    если его еще не существует.
    Если файл уже существует, то он будет открыт и готов к записи новых данных.*/

    // В цикле записываются поля каждого элемента массива cards в файл cards.txt
    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].name;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].surname;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].country;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].profession;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].card_number;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].trips;
    }

    // Подсчёт количества карт без поездок.
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (cards[i].trips == 0)
        {
            count++;
        }
    }

    std::cout << count << " cards without trips." << std::endl;

    file.close(); //закрытие

    //Автом. открытие файла cards.txt
    system("start cards.txt");

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file