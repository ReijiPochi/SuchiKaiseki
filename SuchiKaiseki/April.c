#include<stdio.h>

main()
{
	double Ya = 5000, Yb = 3000, month;

	for (month = 0; month < 24; month++)
	{
		Ya += 10000;

		Yb += 10000;
		Yb *= 1.02;
	}

	printf("Aくん：%.3f 円 Bくん：%.3f 円\n", Ya, Yb);
}