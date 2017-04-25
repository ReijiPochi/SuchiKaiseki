#include <stdio.h>
#include <math.h>

//#define K111
//#define K112
//#define K113
//#define K114
//#define K115
//#define K116
//#define K117
//#define K118
//#define K119
//#define K1110
//#define K1111
//#define K1112
//#define K1113
//#define K1114
#define K1115

main()
{
	int count, n, variable, sum, synergy;
	int numerator, denominator;
	double realVariable, realSum;

#ifdef K111
	for (count = 1; count <= 20; count++)
	{
		printf("%d \n", count);
	}
#else

	// ‰Û‘è1-1-1ˆÈŠO‚ÍAÅ‰‚É®”n ‚ğ“ü—Í‚³‚¹‚éB
	printf("®” n ‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &n);

#endif // K111

#ifdef K112
	for (count = 1; count <= n; count++)
	{
		printf("%d \n", count);
	}
#endif // K112

#ifdef K113
	variable = 2;

	for (count = 1; count <= n; count++)
	{
		printf("%d \n", variable);
		variable += 2;
	}
#endif // K113

#ifdef K114
	variable = -1;

	for (count = 1; count <= n; count++)
	{
		printf("%d ", variable);
		variable += 5;
	}

	printf("\n");
#endif // K114

#ifdef K115
	variable = 10;

	for (count = 1; count <= n; count++)
	{
		printf("%d \n", variable);
		variable -= 2;
	}
#endif // K115

#ifdef K116
	for (count = n; count >= 1; count--)
	{
		printf("%d \n", count);
	}
#endif // K116

#ifdef K117
	variable = 5 * (n - 1) - 1;

	for (count = 1; count <= n; count++)
	{
		printf("%d \n", variable);
		variable -= 5;
	}
#endif // K117

#ifdef K118
	sum = 0;

	for (count = 1; count <= n; count++)
	{
		sum += count;
	}

	printf("1 ‚©‚ç %d ‚Ì‘˜a‚Í %d ‚Å‚·B\n", n, variable);
#endif // K118

#ifdef K119
	sum = 0;
	variable = -1;

	for (count = 1; count <= n; count++)
	{
		sum += variable;
		variable += 5;
	}

	printf("”—ñ -1, 4, 9, ... ‚Ì‘æ‚P€‚©‚ç‘æ %d €‚Ü‚Å‚Ì’l‚Ì‘˜a‚Í %d ‚Å‚·B\n", n, sum);
#endif // K119

#ifdef K1110
	synergy = 1;

	for (count = 1; count <= n; count++)
	{
		synergy *= count;
	}

	printf("1 ‚©‚ç %d ‚Ì‘Šæ‚Í %d ‚Å‚·B\n", n, synergy);
#endif // K1110

#ifdef K1111
	sum = 0;
	variable = -2;

	for (count = 1; count <= n; count++)
	{
		printf("%d \n", variable);

		sum += variable;
		variable += 3;
	}

	printf("”—ñ -2, 1, 4, ... ‚Ì‘æ‚P€‚©‚ç‘æ %d €‚Ü‚Å‚Ì’l‚Ì‘˜a‚Í %d ‚Å‚·B\n", n, sum);
#endif // K1111
	
#ifdef K1112
	numerator = 3;
	denominator = 5;
	realVariable = 0.0;
	realSum = 0.0;

	for (count = 1; count <= n; count++)
	{
		realVariable = (double)numerator / (double)denominator;
		printf("%.5f \n", realVariable);

		realSum += realVariable;

		numerator += 2;
		denominator += 3;
	}

	printf("”—ñ 3/5, 5/8, 7/11, ... ‚Ì‘æ‚P€‚©‚ç‘æ %d €‚Ü‚Å‚Ì’l‚Ì‘˜a‚Í %.5f ‚Å‚·B\n", n, realSum);
#endif // K1112

#ifdef K1113
	realSum = 0.0;
	realVariable = 0.0;

	for (count = 1; count <= n; count++)
	{
		printf("%.5f \n", sin(realVariable));

		realSum += sin(realVariable);

		realVariable += 0.1;
	}

	printf("”—ñ sin 0, sin 0.1, sin 0.2, ... ‚Ì‘æ‚P€‚©‚ç‘æ %d €‚Ü‚Å‚Ì’l‚Ì‘˜a‚Í %.5f ‚Å‚·B\n", n, realSum);
#endif // K1113

#ifdef K1114
	for (count = 1; count <= n; count++)
	{
		printf("%d	%.5f \n", count, sqrt(count));
	}
#endif // K1114

#ifdef K1115
	for (count = 1; count <= n; count++)
	{
		printf("%c	\n", (count + 96));
	}
#endif // K1115

}