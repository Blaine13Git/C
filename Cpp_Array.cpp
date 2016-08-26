#include<iostream>
#include<vector>

using namespace std;

int test_array_vector(int i)
{
	//array，大小必须是常量   ****书上说是错的，可是编译没有报错。 
	int a_i[i];
	
	//vector，OK 
	vector<int> v_i(i);
	
	return sizeof(a_i);
}

int main()
{
	//test_array_vector(4);
	cout <<  test_array_vector(4);
}
