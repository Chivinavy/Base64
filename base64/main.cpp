#include "base64.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
    setlocale(LC_ALL, "");
    char inputuncodestring[360];
    cout << "Введите некодированнаю строку для кодирования: ";
    cin.getline((char*)inputuncodestring, 360);
    cout << "Кодированная строка: " << encode(inputuncodestring) << endl << endl;

    char inputencodestring[480];
    cout << "Введите закодированнаую строку для декодирования: ";
    cin.getline((char*)inputencodestring, 360);
    cout << "Декодированная строка: " << decode(inputencodestring) << endl << endl;
}