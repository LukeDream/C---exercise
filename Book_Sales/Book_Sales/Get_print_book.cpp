#include <iostream>
#include "Sales_item.h"


int main()
{
	Sales_item book;
	std::cout<<"Enter transaction:"<<std::endl;
	while(std::cin>>book)
	{
		std::cout<<"ISBN, the number copies of sold,total revenue,and average price are:"<<std::endl;
		std::cout<<book<<std::endl;

	}
	return 0;

	system("pause");

}
