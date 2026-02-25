#include <cstdio>
#include "Student.h"
#include "Global.h"

int main()
{
    Student s1;
    s1.SetNume("Popescu Ion");
    s1.SetMath(9.5f);
    s1.SetEnglish(8.0f);
    s1.SetHistory(7.5f);

    Student s2;
    s2.SetNume("Ionescu Maria");
    s2.SetMath(10.0f);
    s2.SetEnglish(9.0f);
    s2.SetHistory(8.5f);

    printf("--- Date Studenti ---\n");
    printf("Student 1: %s (Medie: %.2f)\n", s1.GetNume(), s1.GetAverage());
    printf("Student 2: %s (Medie: %.2f)\n\n", s2.GetNume(), s2.GetAverage());

    printf("--- Rezultate Comparatii ---\n");
   
    printf("Comparatie Nume: %d\n", CompareName(&s1, &s2));

    printf("Comparatie Mate: %d\n", CompareMath(&s1, &s2));

    printf("Comparatie Medie: %d\n", CompareAverage(&s1, &s2));

    return 0;
}