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
        cout << "����� �����: " << title << endl;
        cout << "�����: " << author << endl;
        cout << "г� �������: " << year << endl;
        cout << "�����������: " << publisher << endl;
        cout << "����: " << topic << endl;
        cout << "ʳ������ �������: " << pages << endl;
    }

    string getAuthor() {
        return author;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    Book books[3] = {
      Book("����� ������", "���� ������", 1883, "��� �������", "Գ���", 184),
      Book("����������", "������ ����", 1986, "�-��-��-��-��-��-��", "������� ���������", 352),
      Book("���������", "����� ��������", 1841, "����", "�����", 672)
    };

    char choice;
    do {
        int bookNumber;
        cout << "������ ����� ����� (1-3): ";
        cin >> bookNumber;

        if (bookNumber >= 1 && bookNumber <= 3) {
            books[bookNumber - 1].printInfo();
        }
        else {
            cout << "������� ����� �����!" << endl;
        }

        cout << "������ ���������� (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
