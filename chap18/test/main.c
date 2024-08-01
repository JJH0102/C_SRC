#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *afp, *bfp, *cfp;
	char astr[21];
	char bstr[21];
	char *ares;
	char *bres;
	int count;

	afp = fopen("a.txt", "r");
	if (afp == NULL)
	{
		printf("파일이 열리지 않았습니다.");
		return 1;
	}

	bfp = fopen("b.txt", "r");
	if (bfp == NULL) 
	{
		printf("파일이 열리지 않았습니다.");
		return 1;
	}

	cfp = fopen("c.txt", "w");
	if (cfp == NULL) 
	{
		printf("파일이 열리지 않았습니다.");
		return 1;
	}

	while (1)
	{
		count = 0;
		bres = fgets(bstr, sizeof(bstr), bfp);

		while (1)
		{
			ares = fgets(astr, sizeof(astr), afp);

			if (ares == NULL) 
				break;

			if (strcmp(bstr, astr) == 0) 
			{
				count++;
				break;
			}

		}

		if (count == 0) 
			fputs(bstr, cfp);

		fseek(afp, 0, SEEK_SET);

		if (bres == NULL) 
			break;

	}

	fclose(afp);
	fclose(bfp);
	fclose(cfp);

	return 0;
}