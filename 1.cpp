// 1. Write a program to store characters 'A' to 'Z' in the file . Display the contents of file.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string ch;

    ofstream out("AtoZ.txt");

    for(int i=0; i < 26; i++){
        out<< char(65 + i)<< endl;
    }

    out.close();

    ifstream in("AtoZ.txt");
    for(int i=0; i < 26; i++){
        getline(in, ch);
        cout<< "\t"<< ch<< endl;
    }

    return 1;
}
