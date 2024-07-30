#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 1251");

    char text[255];

    ofstream fout("text.txt");

    cout << "Введите текст для записи в файл" << endl;

    cin.getline(text, 255);

    fout << text << "\n";

    fout.close();

    ifstream fin("text.txt");

    char ch;

    while (fin.get(ch)) {
        cout << ch;
    }

    fin.close();

    return 0;
}
