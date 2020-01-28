#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int printroman(int number)
{ 
	int num[5]= {1, 2, 3, 4, 5};
	char sym[]= ("I , II , III, IV ,V");
	int i=12;
	while (number>0)
	{
		int division= number/num[i];
		number = number%num[i];
		while(division--)
		{
		std::cout<<sym[i];
		}
		i--;
	}
int main(int argc, char** argv) 
{
	int number = 12345;
	printroman(number);
	return 0;
}
