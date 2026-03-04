#include <cstdio>
#include "Student.h"
#include "Global.h"

int main()
{
    Student s1;
    s1.SetName("Gabaroi Rares");
    s1.SetMath(9.5f);
    s1.SetEng(8.0f);
    s1.SetIst(7.5f);

    Student s2;
    s2.SetName("Lupu Darius");
    s2.SetMath(10.0f);
    s2.SetEng(9.0f);
    s2.SetIst(8.5f);

    printf(" Date Studenti \n");
    printf("Student 1: %s (Medie: %.2f)\n", s1.GetName(), s1.Avg());
    printf("Student 2: %s (Medie: %.2f)\n\n", s2.GetName(), s2.Avg());

    printf(" Rezultate Comparatii:\n");
   
    printf("Comparatie Nume: %d\n", CompareName(&s1, &s2));

    printf("Comparatie Mate: %d\n", CompareMath(&s1, &s2));

    printf("Comparatie Medie: %d\n", CompareAverage(&s1, &s2));

    return 0;
}