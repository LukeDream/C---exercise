#include<iostream>
int main()
{
	std::cout<<"Enter a set of number ,end with e "<<std::endl;
	int v;
	int amount=0;
	while(std::cin>>v)
	{
		if(v<0)
			amount++;
		

	}
	std::cout<<"The number of negative number is :" <<amount<<std::endl;
	system("pause");
	return 0;

}



