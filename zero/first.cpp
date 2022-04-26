#include <iostream>
#include <string>
#include "student.h"
using namespace std;

void cinInfo(Student array[], int n){

    string name;
    string secondname;
    int grades[5];

    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> secondname;
        for (int j = 0; j < 5; j++){
            cin >> grades[j];
        }
        array[i].setName(name);
        array[i].setSecondName(secondname);
        array[i].setGrades(grades);
    }
}

int main(){

    int n;
    cin >> n;

    Student *array = new Student[n];

    cinInfo(array, n);

    for (int i = 0; i < n; i++){
        cout << array[i].getInfo() << endl;;
    }

    delete [] array;

    return 0;
}