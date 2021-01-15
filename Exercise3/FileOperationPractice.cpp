#include <iostream>
#include <fstream>
using namespace std;

void printTextToFile(string fileName) {
    ifstream inFile;
    inFile.open(fileName);

    if (inFile.fail()) {
        cerr << "Error opening file.";
        exit(1);
    }

    cout << inFile.rdbuf() << endl;
    inFile.close();

}

int main() {
    cout << "Press Enter" << endl;
    cin.ignore();
    printTextToFile("textfile1.txt");
    cout << "Press Enter" << endl;
    cin.ignore();
    printTextToFile("textfile2.txt");
    cout << "Press Enter" << endl;
    cin.ignore();
    printTextToFile("textfile3.txt");

}