#include<iostream>

using namespace std;

void f()
{
	float x,in,cm;
	const float factor = 2.45; //const 常量修饰关键字
	char ch = 0;
	
	cout << "enter length:";
	
	cin >> x; //输入一个浮点数 
	cin >> ch; //输入后缀 
	
	 switch(ch)
	 {
	 	case 'i':
	 		in = x;
	 		cm = x*factor;
	 		break;
	 	case 'c':
	 		in = x/factor;
	 		cm = x;
	 		break;
	 	default:
	 		in = cm = 0;
	 		break;
	 } 
	 
	 cout << in << "in = " << cm << "cm\n";
	
}

int main()
{
	f();
	return 0;
}
