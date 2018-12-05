#include<iostream>
#include "basics.h"

using std::cout;

int main()
{/*
	int num = 10;
	pass_by_pointer(&num);

	cout << num << std::endl;

	system("pause");
*/
	basics a; //local
	basics* b = new basics();//dynamic
	std::unique_ptr<basics> c = std::make_unique<basics>();//unique

	return 0;
}
