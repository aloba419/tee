#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	 bool Pallidrome(char numbers[], int n){
 	std::cout<<numbers<<"\n";
 	//int n= sizeof(numbers);
 	std::cout<<n<<"\n";
 	bool result = false;
 	
 	for(int i=0; i<n/2; i++){
 		if(numbers[i]== numbers[n-i-1]){
 			result = true;
		 }else{
		 	result = false;
		 	return result;
		 }
	 }
	 return result;
 }

int main(int argc, char** argv) {
	int size;
	std::cout<<"How many characters do you want to input\n";
	std::cin>>size;
	char numbers[size];
	int n = sizeof(numbers);
	std::cout <<"Enter the strings";
	for(int i=0;i<size;i++)
	{
		std::cin >> numbers[i];
		if(!isdigit(numbers[i])) // checks if character by character is a digit or not.
		{
			std::cout << "Inputs contains non integer char.\n";
			std::cin.ignore(); //ignores the rest of the input.
			return 1;
		}
	}
	//scanf("%d",numbers);
	//std::cin >> numbers;
	std::cout<< numbers << "\n";
	if(Pallidrome(numbers, n) == true){
		std::cout<<"It is a pallidrome";
	}else{
		std::cout<<"It is not a pallidrome";
	}
	return 0;
}
