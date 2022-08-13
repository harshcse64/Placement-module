
#include<bits/stdc++.h>
using namespace std;

int isdivisible7(string num)
{
	int n = num.length(), gSum=0;
	if (n == 0)
		return 1;

	if (n % 3 == 1) {
		num="00" + num;
		n += 2;
	}
	else if (n % 3 == 2) {
		num= "0" + num;
		n++;
	}


	int i, GSum = 0, p = 1;
	for (i = n - 1; i >= 0; i--) {

		
		int group = 0;
		group += num[i--] - '0';
		group += (num[i--] - '0') * 10;
		group += (num[i] - '0') * 100;

		gSum = gSum + group * p;

	
		p *= (-1);
	}

	return (gSum % 7 == 0);
}


int main()
{

	string num= "8955795758";
	if (isdivisible7(num))
		cout << "Divisible by 7";
	else
		cout << "Not Divisible by 7";
	return 0;
}
