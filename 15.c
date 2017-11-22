/* build 5-stack Mario pyramid */
#include <stdio.h>

int main()
{
	int x, y, z;

	for (z = 0; z < 5; ++z)
	{

		{
			while (x > 0)
			{
					
				printf("#");
			


			--x;
			}

			
			if (x > 0 )
				printf("@");	
			else printf("\n");

		}

			for (y = 5; y > 0; --y)
			{
				printf("_");

			}

	
	printf("\n");
}

	return 0;
}

