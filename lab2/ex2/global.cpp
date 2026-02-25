#include "Global.h"
#include <cstring>

int CompareName(Student* s1, Student* s2)
{
    int res = strcmp(s1->GetNume(), s2->GetNume());
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
    if (s1->GetEnglish() == s2->GetEnglish()) return 0;
    if (s1->GetEnglish() > s2->GetEnglish()) return 1;
    return -1;
}

int CompareHistory(Student* s1, Student* s2)
{
    if (s1->GetHistory() == s2->GetHistory()) return 0;
    if (s1->GetHistory() > s2->GetHistory()) return 1;
    return -1;
}

int CompareAverage(Student* s1, Student* s2)
{
    if (s1->GetAverage() == s2->GetAverage()) return 0;
    if (s1->GetAverage() > s2->GetAverage()) return 1;
    return -1;
}