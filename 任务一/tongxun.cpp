/*
*ʱ�� 20170901  
*���� �����
*���� ʵ��ѧ��ͨѶ¼����ɾ�Ĳ�
*/
#include <iostream>
using namespace std;	//�����ռ�

#include <string>
#include <fstream>
#include <stdio.h>	//ϵͳ�ļ�

#include "xinxi.h"	//����Ŀ���ļ�		
ostream & operator <<(ostream & output, Xinxi& c)
{
	output << c.num << c.name << c.sex << c.age << c.tele << c.mobile << endl;
	return output;
}
istream & operator >>(istream & input, Xinxi& c)
{
	input >> c.num >> c.name >> c.sex >> c.age >> c.tele >> c.mobile;
	return input;
}//����ȫ�����������

int main()	//������
{
	Xinxi t[1000], p[1000];	//���������
	string nam, phone;	
	int c;
	int i = 0;
	int j = 0;//ȫ�ֱ�������
	cout << "��ѡ�������һ����Ŀ:" << endl << "1 ����" << endl << "2 ���" 
		<< endl << "3 ��ѯ" << endl << "4 �޸�" << endl << "5 ɾ��" << endl 
		<< "6 ��ʾ" << endl << "7 �ļ�����" << endl << "8 �ļ�����" << endl 
		<< "9 �˳�" << endl << "��ѡ��" << endl;//�˵�
	for (i = 0; i <= 999; i++)
	{
		cin >> c;//ѡ����Ҫִ�е���Ŀ����

		for (; c != 9;)
		{
			if (c == 1)		//����
			{
				t[i].setout();
				break;
			}
			else if (c == 2)	//���
			{
				t[i].add();
				break;
			}
			else if (c == 3)	//��ѯ
			{
				int m;
				cout << "1.���� " << "2.�ֻ�" << endl;
				cin >> m;

				if (m == 1)		//������ѯ
				{
					cout << "����������" << endl;
					string str;
					cin >> str;//

					for (j = 0; j <= 999;)
					{
						if (str == t[j].name)
						{
							t[j].display();
						}
						else j++;
					}//������ѯ

					j = 0;
					break;
				}
				if (m == 2)		//�ֻ���ѯ
				{
					cout << "�������ֻ�����" << endl;
					long long number;
					cin >> number;

					for (j = 0; j <= 999;)
					{
						if (number == t[j].mobile)
						{
							t[j].display();
						}
						else j++;
					}//������ѯ

					j = 0;
					break;
				}
			}
			else if (c == 4)		//�޸�
			{
				t[i].turn();
				break;
			}
			else if (c == 5)	//ɾ��
			{
				t[i].bakespace();
				break;
			}
			else if (c == 6)	//��ʾ
			{
				int x;
				cout << "�������ѯ����" << endl;
				cin >> x;

				for (j = 0; j <= x - 1; j++)//������Ҫ����ʾ��ѯ���
				{
					t[j].display();
				}

				break;
			}
			else if (c == 7)	//�ļ�����
			{
				ofstream outfile("f1.txt", ios::app);//���ļ�

				for (j = 0; j <= 999; j++)
				{
					outfile << t[j] << " ";
				}//����Ϣ�����ļ�

				j = 0;
				outfile.close();//�ر��ļ�
				break;
			}
			else if (c == 8)	//�ļ�����
			{
				ifstream infile("f1.txt", ios::in);//���ļ�

				for (j = 0; j <= 999; j++)
				{
					infile >> p[j];
				}//����Ϣ�����ļ�

				infile.close();//�ر��ļ�
				break;
			}

			else break;
		}
		if (c == 9)		//�˳�
		{
			break;
		}

		cout << "�����" << endl;
		cout << "��ѡ�������һ����Ŀ:" << endl << "1 ����" << endl 
			<< "2 ���" << endl << "3 ��ѯ" << endl << "4 �޸�" << endl 
			<< "5 ɾ��" << endl << "6 ��ʾ" << endl << "7 �ļ�����" << endl 
			<< "8 �ļ�����" << endl << "9 �˳�" << endl << "��ѡ��" << endl;
		continue;
	}

	return 0;
}

