#pragma once
class Student
{
    char name[100];
    float math;
    float eng;
    float ist;
public:
    void SetName(const char* x);
    char* GetName();
    void SetMath(float x);
    float GetMath();
    void SetEng(float x);
    float GetEng();
    void SetIst(float x);
    float GetIst();
    float Avg();
};