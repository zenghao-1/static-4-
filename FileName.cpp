#include <iostream>
using namespace std;

// ������������ʵ��

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
	//--1--       //������ù��캯��
	Item item_1;
	cout << "------------------" << endl;
	
 	//--2--       //����һ���飬�����������ٿ����ʱ��ʹ�ã�item�����������ɾ����
	{Item item_2; }
	cout << "------------------" << endl;
	
	//--3--       //����static����������δ������
	
	{static Item item_3; }
	
		system("pause");
}