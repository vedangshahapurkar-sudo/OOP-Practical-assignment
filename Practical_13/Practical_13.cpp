#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
string sourceName, destName;
cout << "Enter source file name: ";
getline(cin, sourceName);
cout << "Enter destination file name: ";
getline(cin, destName);
if (sourceName == destName) {
cout << "Error: Source and destination files cannot be the same." << endl;
return 1;
} ifstream sourceFile(sourceName, ios::binary);
if (!sourceFile.is_open()) {
cout << "Error: Could not open source file." << endl;
return 1; }
ofstream destFile(destName, ios::binary);
if (!destFile.is_open()) {
cout << "Error: Could not open destination file." << endl;
sourceFile.close();
return 1; }
destFile << sourceFile.rdbuf();
if (destFile) {
cout << "File copied successfully." << endl;
} else {
cout << "Error copying file." << endl; }
sourceFile.close();
destFile.close();
return 0;
}
