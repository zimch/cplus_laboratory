#include <string>
#ifndef STUDENT_H
#define STUDENT_H

class Student{

private:
    std::string name;
    std::string secondname;
    int grades[5];
    float averageGrade;

public:
    void setName(std::string name){
        this -> name = name;
    }
    std::string getName(){
        return this -> name;
    }
    void setSecondName(std::string secondname){
        this -> secondname = secondname;
    }
    std::string getSecondName(){
        return this -> secondname;
    }
    void setGrades(int grades[]){
        for (int i = 0; i < 5; i++){
            this -> grades[i] = grades[i];
        }
    }
    float getAverageGrade(){
        int summ = 0;
        for (int i = 0; i < 5; i++){
            summ += this -> grades[i];
        }
        
        this -> averageGrade = (float)summ / 5;

        return averageGrade;
    }
    int* getGrades(){
        return this -> grades;
    }
    std::string getInfo(){
        std::string info = "Name: " + name + " " + secondname + "\tGrades: ";

        for (int i = 0; i < 5; i++){
            if (i < 4)
                info += std::to_string(grades[i]) + ", ";
            else
                info += std::to_string(grades[i]);
        }

        info += "\tAverage grade: " + std::to_string(getAverageGrade());

        return info;
    }

};

#endif