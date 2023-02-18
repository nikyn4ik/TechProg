// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>//предоставляет возможность чтения и записи файлов в файловой системе

struct Object { //определение структуры для объектов
    std::string field1;
    std::string field2;
    std::string field3;
};

// Функция для подсчета кол-ва карт без поездок
int countCardsWithoutTrips(Object* cards, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (cards[i].field1.find("card1") == std::string::npos &&
            cards[i].field2.find("card2") == std::string::npos &&
            cards[i].field3.find("card3") == std::string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    //инициализация массива объектов
    Object cards[5] = {
    {"БЭПК ЕДИНАЯ", "                     ЕДИНАЯ ТРАНСПОРТНАЯ КАРТА", "                              БСК «Курс»"},
    {"Для всех желающих", "               Для граждан льготной категории", "                         Для лиц первого года обучения"},
    {"Реализации не подлежит.", "         Выдача гражданам ЕТК приостановлена.", "                   В кассах станций метрополитена"},
    {"Реализация не производится.", "     Выдача гражданам ЕТК приостановлена.", "                   В кассах станций метрополитена."},
    {"При утере не восстанавливается.", " Восстановление ресурса производится на «БСК льготная».", " В кассах станций метрополитена."}
    };

    std::ofstream file("cards.txt"); //запись в файл cards.txt
    /*Функция ofstream открывает файл для записи данных.
    Файл называется "cards.txt" и будет создан в текущей директории программы, 
    если его еще не существует.
    Если файл уже существует, то он будет открыт и готов к записи новых данных.*/

    // В цикле записываются поля каждого элемента массива cards в файл cards.txt
    for (int i = 0; i < 5; i++) {
        file << cards[i].field1 << " " << cards[i].field2 << " " << cards[i].field3 << std::endl;
    }

    file.close(); //закрытие

    int count = countCardsWithoutTrips(cards, 2);
    std::cout << "Card's without trips: " << count << std::endl;

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
