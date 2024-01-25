#include<stdio.h>

void Tower(int n, char Beg, char Aux, char End)
{
	if (n == 1)
	{
		printf("\n Disk 1 mole %c to %c", Beg, End);
		return;
	}

	Tower(n - 1, Beg, End, Aux);
	printf("\n Disk %d mole from %c to %c", n, Beg,End);
	Tower(n - 1, Aux, Beg, End);
}

int main()
{
	int n;

	printf("\n Enter the number of disk:");
	scanf("%d", &n);

	Tower(n, 'A', 'B', 'C');

	return 0;
}
