#include "base64.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
    setlocale(LC_ALL, "");
    char inputuncodestring[360];
    cout << "������� �������������� ������ ��� �����������: ";
    cin.getline((char*)inputuncodestring, 360);
    cout << "������������ ������: " << encode(inputuncodestring) << endl << endl;

    char inputencodestring[480];
    cout << "������� ��������������� ������ ��� �������������: ";
    cin.getline((char*)inputencodestring, 360);
    cout << "�������������� ������: " << decode(inputencodestring) << endl << endl;
}