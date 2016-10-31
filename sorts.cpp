#include <iostream>
using namespace std;

void insertionSort(int [], int);
void selectionSort(int [], int);
int main(){
	
	return 0;
}

void insertionSort(int a[], int s)
{
	int j, tmp;

	for(int i =0; i<s; i++)
	{
		j = i;

		while(j>0 && a[j] < a[j-1])
		{
			tmp = a[j];
			a[j] = a[j-1];
			a[j-1] = tmp;
			j--;
		}
	}
}

void selectionSort(int a[], int s)
{
	int min, temp;
	
	for (int i=0; i < s-1; i++)
	{
	    min = i;//set pos_min to the current index of array
		
		for (int j=i+1; j < s; j++)
		{

		if (a[j] < a[min])
                	min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}
		
	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (min != i)
            {
                 temp = a[i];
                 a[i] = a[min];
                 a[min] = temp;
            }
	}

}
