#include "Global.h"
#include <cstring>

int CompareName(Student* s1, Student* s2)
{
    int res = strcmp(s1->GetName(), s2->GetName());
    if (res == 0) return 0;
    if (res > 0) return 1;
    return -1;
}

int CompareMath(Student* s1, Student* s2)
{
    if (s1->GetMath() == s2->GetMath()) return 0;
    if (s1->GetMath() > s2->GetMath()) return 1;
    return -1;
}

int CompareEnglish(Student* s1, Student* s2)
{
    if (s1->GetEng() == s2->GetEng()) return 0;
    if (s1->GetEng() > s2->GetEng()) return 1;
    return -1;
}

int CompareHistory(Student* s1, Student* s2)
{
    if (s1->GetIst() == s2->GetIst()) return 0;
    if (s1->GetIst() > s2->GetIst()) return 1;
    return -1;
}

int CompareAverage(Student* s1, Student* s2)
{
    if (s1->Avg() == s2->Avg()) return 0;
    if (s1->Avg() > s2->Avg()) return 1;
    return -1;
}