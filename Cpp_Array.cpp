#include<iostream>
#include<vector>

using namespace std;

int test_array_vector(int i)
{
	//array����С�����ǳ���   ****����˵�Ǵ�ģ����Ǳ���û�б��� 
	int a_i[i];
	
	//vector��OK 
	vector<int> v_i(i);
	
	return sizeof(a_i);
}

int main()
{
	//test_array_vector(4);
	cout <<  test_array_vector(4);
}
