#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int printloop(int number)
{
	int i, n=100, sum=2;
	/*number[]=2, number[]=5;*/
	for(i=2;i<100;i+=3);
	{ 
	sum=sum+i;
	}
	std::cout<<"sum is"<<sum;
	return sum;
}
int main(int argc, char** argv) 

{
	 int number=25811;
	 printloop(number);
}
