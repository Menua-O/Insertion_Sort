
int* InsertionSort(int* a, int m, int n);

int main()
{
	int a[10] ={1,2,4,8,16,32,3,7,20,33};
	
	int* b = InsertionSort( a , 6 , 10 );
}

int* InsertionSort(int* cardsOnTable, int m, int n)
{
	int x;
	for(int i = m; i < n; i++)
	{
		x = cardsOnTable[i];
		int j = i-1;
		while(x < cardsOnTable[j] && j >= 0)
		{
			cardsOnTable[j+1] = cardsOnTable[j];
			j--;
		}
			cardsOnTable[j+1] = x;		
	}
	return cardsOnTable;
}
