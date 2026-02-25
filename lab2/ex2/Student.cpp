#include "Student.h"
#include <cstring>

Student::Student()
{
    this->name = nullptr;
    this->mathGrade = 1.0f;
    this->englishGrade = 1.0f;
    this->historyGrade = 1.0f;
}
Student::~Student()
{
    if (this->name != nullptr)
        delete[] this->name;
}

void Student::SetNume(const char* name)
{
    if (this->name != nullptr)
        delete[] this->name;
    int len = strlen(name) + 1;
    this->name = new char[len];
    strcpy_s(this->name, len, name);
}
const char* Student::GetNume()
{
    return name;
}

void Student::SetMath(float grade)
{
    if (grade >= 1.0f && grade <= 10.0f) this->mathGrade = grade;
}

float Student::GetMath() 
{ 
    return this->mathGrade; 
}
void Student::SetEnglish(float grade)
{
    if (grade >= 1.0f && grade <= 10.0f) this->englishGrade = grade;
}
float Student::GetEnglish() { return this->englishGrade; }

void Student::SetHistory(float grade)
{
    if (grade >= 1.0f && grade <= 10.0f) this->historyGrade = grade;
}
float Student::GetHistory() { return this->historyGrade; }

float Student::GetAverage()
{
    return (this->mathGrade + this->englishGrade + this->historyGrade) / 3.0f;
}