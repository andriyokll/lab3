#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    string publisher;
    string topic;
    int pages;

public:
    Book(string title, string author, int year, string publisher, string topic, int pages) {
        this->title = title;
        this->author = author;
        this->year = year;
        this->publisher = publisher;
        this->topic = topic;
        this->pages = pages;
    }

    void printInfo() {
        cout << "Назва книги: " << title << endl;
        cout << "Автор: " << author << endl;
        cout << "Рік видання: " << year << endl;
        cout << "Видавництво: " << publisher << endl;
        cout << "Жанр: " << topic << endl;
        cout << "Кількість сторінок: " << pages << endl;
    }

    string getAuthor() {
        return author;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    Book books[3] = {
      Book("Захар Беркут", "Іван Франко", 1883, "Час Майстрів", "Фікшн", 184),
      Book("Палімпсести", "Василь Стус", 1986, "А-БА-БА-ГА-ЛА-МА-ГА", "Художня література", 352),
      Book("Гайдамаки", "Тарас Шевченко", 1841, "Фоліо", "Поема", 672)
    };

    char choice;
    do {
        int bookNumber;
        cout << "Введіть номер книги (1-3): ";
        cin >> bookNumber;

        if (bookNumber >= 1 && bookNumber <= 3) {
            books[bookNumber - 1].printInfo();
        }
        else {
            cout << "Невірний номер книги!" << endl;
        }

        cout << "Бажаєте продовжити (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
