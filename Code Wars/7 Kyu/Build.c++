#include <iostream>
#include <direct.h>
#include <fstream>
#include <string>

using namespace std ;

void CreateBasicFiles(string dirName) {
    fstream  MyFile ;
    fstream MyTxt ;

    MyFile.open(dirName + "\\" + "Solution.c++" , ios::out) ;
    MyTxt.open(dirName + "\\" + + "Question.txt" , ios::out) ;

    if (MyFile.is_open())
        MyFile << "using namespace std ;" ;
    
    MyFile.close() ;

    MyTxt.close() ;
}

void CreateDir(string dirName) {
    
    
    if (_mkdir(dirName.c_str()) == 0)
        cout << "Successfuly : " << dirName << endl;
    else
        cout << "Failed" << endl;
}

int main() {

    string dirName;
    cout << "Enter Dir Name : " ;
    getline(cin, dirName);


    CreateDir(dirName) ;
    CreateBasicFiles(dirName) ;


    return 0;
}
