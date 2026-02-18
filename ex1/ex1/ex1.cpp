

#include <stdio.h>

int conversie(const char* s)
{
	int nr = 0;
	for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		nr = nr * 10 + (s[i] - '0');
	return nr;
}
int main()
{
	FILE* f = fopen("in.txt", "r");

	if (f == NULL) {
		printf("Eroare\n");
		return 1;
	}
	char s[200];
	long long sum = 0;
	while (fgets(s, sizeof(s), fin))
		sum = sum + conversie(s);

	printf("%lld\n", sum);
	fclose(f);

	return 0;
}

