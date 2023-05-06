#include <iostream>
using namespace std;

// 析构函数调用实例

class Item
{
public:
	Item()
	{
		cout << "created!\n";
	}

	~Item()
	{
		cout << "delete!\n";
	}
};

int main()
{
	//--1--       //不会调用构造函数
	Item item_1;
	cout << "------------------" << endl;
	
 	//--2--       //创建一个块，析构函数会再块结束时被使用，item超过作用域后被删除，
	{Item item_2; }
	cout << "------------------" << endl;
	
	//--3--       //创建static，析构函数未被调用
	
	{static Item item_3; }
	
		system("pause");
}