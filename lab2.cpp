#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	// � �������������� �������� � ��������� ������� �������� ���������,
	// ������� ��������� ����� �� ����� � ������� ��� �� �����, ����� �������
	// ������ ��� �������� �����
	ifstream in_txt("input_en.txt");
	
	string my_s, my_s2;
	
	char c;

	while (!in_txt.eof())
	{
		in_txt >> my_s;

		if (!in_txt.eof()){

			in_txt >> my_s2;
			cout << my_s2 << " " << my_s << " "; // �� ����� ���� ������ � ����� ������
		}
		else 
		{
			cout <<  my_s;
		}				
	}
		
	// �� �� ������ ����, �� ��������� ��� ����� �������� ���������
	cin >> c; // ������ �� ������� �������
	return 0;
}