#include<iostream>
int main ()
{
	std::cout<<"Enter two number : "<< std::endl;
	int v1 ,v2 ;

	std::cin>>v1>>v2;
		
	
	int bigger;
	if (v1>v2)
	{
		bigger= v1;
	}
	else
		bigger= v2;
	std::cout<<"The bigger one of the two  number is :"<<bigger<<std::endl;
	system("pause");

	return 0 ;
}