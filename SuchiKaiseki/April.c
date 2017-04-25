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

	printf("A‚­‚ñF%.3f ‰~ B‚­‚ñF%.3f ‰~\n", Ya, Yb);
}