#include <stdio.h>
#include <stdlib.h>

inline int cmp(const void* a, const void* b)
{
	return *(short*)a - *(short*)b;
}

int main()
{
	short N, M, K;
	short itemlist[1000], pairlist[10000][2] = { {0} };
	bool status;
	scanf("%hd %hd", &N, &M);
	for (short i = 0; i < N; i++)
		scanf("%hd %hd", &pairlist[i][0], &pairlist[i][1]);

	for (register short i = 0; i < M; i++)
	{
		status = true;
		scanf("%hd", &K);
		for (register short j = 0; j < K; j++)
			scanf("%hd", itemlist + j);

		qsort(itemlist, K, sizeof(short), cmp);
		for (register short j = 0; j < N; j++)
		{
			if (bsearch(&pairlist[j][0], itemlist, K, sizeof(short), cmp))
				if (bsearch(&pairlist[j][1], itemlist, K, sizeof(short), cmp))
				{
					puts("No");
					status = false;
					break;
				}
		}

		if (status)
			puts("Yes");
	}

	return 0;
}

