

int main()
{

	int cardsOnTable[6] = {6,5,4,3,2,1};
	int i = 0;
	for(int j = 1; j < 6; j++)
	{
		int key = cardsOnTable[j];
			i = j - 1;
		
		while(cardsOnTable[i] > key)
		{
			cardsOnTable[j] = cardsOnTable[i];
			
			cardsOnTable[i] = key;
		}
	}
}
