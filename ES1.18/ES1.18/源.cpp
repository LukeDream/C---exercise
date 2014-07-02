#include<iostream>
int main()
{
	std::cout<<"Enter two number :"<< std::endl;
	int v1,v2;
	int t=0;
	std::cin>>v1>>v2;
	std::cout<<"The number between "<<v1<<" and "<<v2<<" is :"<<std::endl;
	for ( int i = v1; i<=v2; i++)
		{
			std::cout<<i<<" ";
			t++;
		
	if(t==10)
		{
			std::cout<<std::endl;
			t=0;
		}
	}
		system("pause");
		return 0;
}