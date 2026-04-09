#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int i = 0;
	int firstprev = 1;
	int secondprev = 0;
	int result = 0;
	int count = 0;

	cout << "enter n:";
	cin >> n;


	while (count<n)
	{
		if (i == 0)
		{
			cout << i << endl;
			count++;
        }

		if (i == 1)
		{
			cout << i << endl;
			count++;
		}

		else
		{
			if (i < (n - 2))
			{
				result = firstprev + secondprev;
				secondprev = firstprev;
				firstprev = result;

				cout << result << endl;
				count++;
			}
			
		}
		
		
		i++;

    }
	return 0;
}




































/*

{
	int first_prev = 1;
	int second_prev = 0;
	int result = 0;
	int n = 0;
	int count = 0;
	int i = 0;



	cout << "enter n upto which u want febonacci series:";
	cin >> n;

	while (count < n)
	{
		if (i == 0)
		{
			cout << i << endl;
			count++;
		}
		if (i == 1)
		{
			cout << i << endl;
			count++;
		}

		else {

			if (i < (n - 2))
			{
				result = first_prev + second_prev;
				second_prev = first_prev;
				first_prev = result;
				cout << result << endl;
				count++;

			}

		}
		i++;

	}
	return 0;
}
*/

