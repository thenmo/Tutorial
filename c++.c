#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int max(int a,int b)
{
	if(a > b) 
		return a;
	return b;
}

int min(int a,int b)
{
	if(a > b)
		return b;
	return a;
}
 
int as2(char *a)
{
	if(abs(a[5]-a[2])==2)
		return 0;
	return 1;
}
 
int as3(char *a)
{
	int n = 0;
	if(a[3] == 65 && a[2] != a[3] && a[4] != a[3] && a[6] != a[3])
		n++;
	if(a[3] == 66 && a[2] != a[6] && a[3] != a[6] && a[4] != a[6])
		n++;
	if(a[3] == 67 && a[3] != a[2] && a[4] != a[2] && a[6] != a[2])
		n++;
	if(a[3] == 68 && a[2] != a[4] && a[3] != a[4] && a[6] != a[4])
		n++;
	if(n == 1)
		return 0;
	return 1;
}

int as4(char *a)
{
	int n = 0;
	if(a[4] == 65 && a[1] == a[5] && a[2] != a[7] && a[1] != a[9] && a[6] != a[10])
		n++;
	if(a[4] == 66 && a[1] != a[5] && a[2] == a[7] &&a [1] != a[9] && a[6] != a[10])
		n++;
	if(a[4] == 67 && a[1] != a[5] && a[2] != a[7] && a[1] == a[9] && a[6] != a[10])
		n++;
	if(a[4] == 68 && a[1] != a[5] && a[2] != a[7] && a[1] != a[9] && a[6] == a[10])
		n++;
	if(n == 1)
		return 0;
	return 1;
}
 
int as5(char *a)
{
	if((a[5] == 65 && a[8] == 65) || (a[5] == 66 && a[4] == 66) || (a[5] == 67 && a[9] == 67) || (a[5] == 68 && a[7] == 68))
		return 0;
	return 1;
}
 
int as6(char *a)
{
	int n = 0;
	if(a[6] == 65 && a[2] == a[8] && a[4] == a[8] && (a[1] != a[8] || a[6] != a[8]) && (a[3] != a[8] || a[10] != a[8]) && (a[5] != a[8] || a[9] != a[8]))
		n++;
	if(a[6] == 66 && a[1] == a[8] && a[6] == a[8] && (a[2] != a[8] || a[4] != a[8]) && (a[3] != a[8] || a[10] != a[8]) && (a[5] != a[8] || a[9] != a[8]))
		n++;
	if(a[6] == 67 && a[3] == a[8] && a[10] == a[8] && (a[2] != a[8] || a[4] != a[8]) && (a[1] != a[8] || a[6] != a[8]) && (a[5] != a[8] || a[9] != a[8]))
		n++;
	if(a[6] == 68 && a[5] == a[8] && a[9] == a[8] && (a[2] != a[8] || a[4] != a[8]) && (a[1] != a[8] || a[6] != a[8]) && (a[3] != a[8] || a[10] != a[8]))
		n++;
	if(n == 1)
		return 0;
	return 1;
}

int as7(char *a)
{
	int a1 = 0, b1 = 0, c1 = 0, d1 = 0, n = 0;
	for(int i = 1; i < 11; i++)
		switch(a[i])
		{
			case 'A': a1++;
					break;
			case 'B': b1++;
					break;
			case 'C': c1++;
					break;
			case 'D': d1++;
					break;
		}
	if(a[7] == 65 && c1 < a1 && c1 < b1 && c1 < d1)
		n++;
	if(a[7] == 66 && b1 < a1 && b1 < c1 && b1 < d1)
		n++;
	if(a[7] == 67 && a1 < b1 && a1 < c1 && a1 < d1)
		n++;
	if(a[7] == 68 && d1 < a1 && d1 < b1 && d1 < c1)
		n++;
	if(n == 1)
		return 0;
	return 1;
}

int as8(char *a)
{
	int n = 0;
	if(a[8] == 65 && (abs(a[7] - a[1]) != 1) && (abs(a[5] - a[1]) == 1) && (abs(a[2] - a[1]) == 1) && (abs(a[10] - a[1]) == 1))
		n++;
	if(a[8] == 66 && (abs(a[7] - a[1]) == 1) && (abs(a[5] - a[1]) != 1) && (abs(a[2] - a[1]) == 1) && (abs(a[10] - a[1]) == 1))
		n++;
	if(a[8] == 67 && (abs(a[7] - a[1]) == 1) && (abs(a[5] - a[1]) == 1) && (abs(a[2] - a[1]) !=1 ) && (abs(a[10] - a[1]) == 1))
		n++;
	if(a[8] == 68 && (abs(a[7] - a[1]) == 1) && (abs(a[5] - a[1]) == 1) && (abs(a[2] - a[1]) == 1) && (abs(a[10] - a[1]) != 1))
		n++;
	if(n == 1)
		return 0;
	return 1;
}

int as9(char *a)
{
	int n = 0;
	if(a[9] == 65 && ((a[1] == a[6] && a[6] != a[5]) || (a[1] != a[6] && a[6] == a[5])))
		n++;
	if(a[9] == 66 && ((a[1] == a[6] && a[10] != a[5]) || (a[1] != a[6] && a[10] == a[5])))
		n++;
	if(a[9] == 67 && ((a[1] == a[6] && a[2] != a[5]) || (a[1] != a[6] && a[2] == a[5])))
		n++;
	if(a[9] == 68 && ((a[1] == a[6] && a[9] != a[5]) || (a[1] != a[6] && a[9] == a[5])))
		n++;
	if(n == 1)
		return 0;
	return 1;
}
 
int as10(char *a)
{
	int a1 = 0, b1 = 0, c1 = 0, d1 = 0, n = 0, s1, s2, s3, s4, s5, s6;
	for(int i = 1; i < 11; i++)
		switch(a[i])
		{
			case 'A': a1++;
					break;
			case 'B': b1++;
					break;
			case 'C': c1++;
					break;
			case 'D': d1++;
					break;
		}
	s1 = min(a1,b1);
	s2 = min(c1,d1);
	s3 = max(a1,b1);
	s4 = max(c1,d1);
	s5 = min(s1,s2);
	s6 = max(s3,s4);
	s5 = s6 - s5;
	if((a[10] == 65 && s5 == 3) || (a[10] == 66 && s5 == 2) || (a[10] == 67 && s5 == 4) || (a[10] == 68 && s5 == 1))
		return 0;
   	return 1;
}

int main()
{
	char a[11];
  	int s, i, m = 0;
	float n;
	for(i = 0; i < 11; i++)
		a[i] = 'A';
	while(1)
	{
		s = as2(a) + as3(a) + as4(a) + as5(a) + as6(a) + as7(a) + as8(a) + as9(a) + as10(a);
  		m++;
		printf("第%d次： %c %c %c %c %c %c %c %c %c %c\n", m, a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]);
		if(s == 0)
		{
			printf("正确！\n");
  	      	system("pause");
		}
		a[10] += 1;
		for(i = 10; i > 0; i--)
			if(a[i] == 69)
			{
				a[i] = 65;
				a[i-1] += 1;
			}  
		if(a[0] == 66)
		{
			printf("\n\n	计算完毕");
			break;
		}
	}
}
