#include "NumberList.h"
#include<stdio.h>

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	this->numbers[this->count] = x;
	this->count++;
	return true;
}

void NumberList::Sort()
{
	int i,j,temp;
	for(i=0;i<this->count-1;i++)
		for(j=i+1;j<this->count;j++)
			if (this->numbers[i] > this->numbers[j])
			{
				temp = this->numbers[i];
				this->numbers[i] = this->numbers[j];
				this->numbers[j] = temp;
			}
}

void NumberList::Print()
{
	int i;
	for(i=0;i<this->count;i++)
		printf("%d ", this->numbers[i]);
	printf("\n");
}