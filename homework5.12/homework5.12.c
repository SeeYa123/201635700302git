# include <stdio.h>

int main(void)
{
	int x1, x2;
	int days = 9; 
        x2 = 1;
	while (days>0)
	{
		x1 = (x2 + 1)*2;
		x2 = x1;
		days--;
	}
	printf("%d", x1);
	
	return 0;
}