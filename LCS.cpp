#include<stdio.h>
#include<string.h>


void main()
{
	char A[100], B[100], main[100];
	int i, j = 0, k = 0,index=0;

	scanf("%s", &A);
	scanf("%s", &B);


	for (i = 0;i < strlen(B);i++)
	{
		for (;j < strlen(A);j++)
		{
			if (A[j] == B[i])
			{
				j++;
				main[k] = B[i];
				k++;index = j;
				break;
			}
		}
		j = index;

	}
	main[k] = '\0';

	printf("%d\n%s\n",strlen(main), main);
	

}