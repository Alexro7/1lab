#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
/*���� - ��� ���������������, � �������� ��� ������� �����
  ������� ��� ����  ���� �� � ����� ������ �����*/
																

	int x[4], y[4], i,dl[6];
	for (i = 0; i < 4; i++)  //���� ��������� �����
	{
		cout << "������� x " << i + 1 << " �����"<<endl;
		cin >> x[i];
		cout << "������� y " << i + 1 << " �����"<<endl;
		cin >> y[i];
	}
	dl[0] = (x[1] - x[0])*(x[1] - x[0]) + (y[1] - y[0])*(y[1] - y[0]);     //AB
	dl[1] = (x[2] - x[1])*(x[2] - x[1]) + (y[2] - y[1])*(y[2] - y[1]);     //BC
	dl[2] = (x[3] - x[2])*(x[3] - x[2]) + (y[3] - y[2])*(y[3] - y[2]);     //CD
	dl[3] = (x[3] - x[0])*(x[3] - x[0]) + (y[3] - y[0])*(y[3] - y[0]);     //AD
	dl[4] = (x[2] - x[0])*(x[2] - x[0]) + (y[2] - y[0])*(y[2] - y[0]);     //AC
	dl[5] = (x[3] - x[1])*(x[3] - x[1]) + (y[3] - y[1])*(y[3] - y[1]);     //BD
		if (dl[0] == 0 || dl[1] == 0 || dl[2] == 0 || dl[3] == 0 || dl[4] == 0 || dl[5] == 0)// ���� �� ����������� �����
		cout << "���� ����������� �����";
		else
	{
			i = 0;
			if ((x[1] - x[0]) * (y[2] - y[0]) == (y[1] - y[0]) * (x[2] - x[0]))i++; //A B C �� ����� ������
			if ((x[1] - x[0]) * (y[3] - y[0]) == (y[1] - y[0]) * (x[3] - x[0]))i++; //A B D �� ����� ������
			if ((x[2] - x[0]) * (y[3] - y[0]) == (y[2] - y[0]) * (x[3] - x[0]))i++; //A C D �� ����� ������
			if ((x[2] - x[1]) * (y[3] - y[1]) == (y[2] - y[1]) * (x[3] - x[1]))i++; //B C D �� ����� ������
			//���������� ��� ������ ���� ������� ��� �� ���� ��� ��� �����
	}
		if(i) cout << "��� ������� ��� ����� ����� �� ����� ������" << endl;
	
	    else                               //�������� �� ��������������� ���������, �������� ��������� 4 ������ � ���� �� 1 ������ ����
	{
		i = 0;
		if (dl[0] == dl[1] && dl[1] == dl[2] && dl[2] == dl[3] && (x[1] - x[0]) * (x[3] - x[0]) + (y[1] - y[0]) * (y[3] - y[0]) == 0) i++;
		if (dl[1] == dl[3] && dl[3] == dl[4] && dl[4] == dl[5] && (x[2] - x[0]) * (x[3] - x[0]) + (y[2] - y[0]) * (y[3] - y[0]) == 0) i++;
		if (dl[0] == dl[2] && dl[2] == dl[4] && dl[4] == dl[5] && (x[1] - x[0]) * (x[2] - x[0]) + (y[1] - y[0]) * (y[2] - y[0]) == 0) i++;
		if (i) cout << "�������" << endl;
		else cout << "�� �������� ���������" << endl;	
	}
	system("pause");
		
}

