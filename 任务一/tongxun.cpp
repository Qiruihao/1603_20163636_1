/*
*时间 20170901  
*姓名 齐瑞豪
*功能 实现学生通讯录的增删改查
*/
#include <iostream>
using namespace std;	//命名空间

#include <string>
#include <fstream>
#include <stdio.h>	//系统文件

#include "xinxi.h"	//本项目的文件		
ostream & operator <<(ostream & output, Xinxi& c)
{
	output << c.num << c.name << c.sex << c.age << c.tele << c.mobile << endl;
	return output;
}
istream & operator >>(istream & input, Xinxi& c)
{
	input >> c.num >> c.name >> c.sex >> c.age >> c.tele >> c.mobile;
	return input;
}//定义全局输入输出流

int main()	//主函数
{
	Xinxi t[1000], p[1000];	//定义类变量
	string nam, phone;	
	int c;
	int i = 0;
	int j = 0;//全局变量定义
	cout << "请选择下面的一个项目:" << endl << "1 创建" << endl << "2 添加" 
		<< endl << "3 查询" << endl << "4 修改" << endl << "5 删除" << endl 
		<< "6 显示" << endl << "7 文件导入" << endl << "8 文件导出" << endl 
		<< "9 退出" << endl << "请选择：" << endl;//菜单
	for (i = 0; i <= 999; i++)
	{
		cin >> c;//选择想要执行的项目功能

		for (; c != 9;)
		{
			if (c == 1)		//创建
			{
				t[i].setout();
				break;
			}
			else if (c == 2)	//添加
			{
				t[i].add();
				break;
			}
			else if (c == 3)	//查询
			{
				int m;
				cout << "1.姓名 " << "2.手机" << endl;
				cin >> m;

				if (m == 1)		//姓名查询
				{
					cout << "请输入姓名" << endl;
					string str;
					cin >> str;//

					for (j = 0; j <= 999;)
					{
						if (str == t[j].name)
						{
							t[j].display();
						}
						else j++;
					}//遍历查询

					j = 0;
					break;
				}
				if (m == 2)		//手机查询
				{
					cout << "请输入手机号码" << endl;
					long long number;
					cin >> number;

					for (j = 0; j <= 999;)
					{
						if (number == t[j].mobile)
						{
							t[j].display();
						}
						else j++;
					}//遍历查询

					j = 0;
					break;
				}
			}
			else if (c == 4)		//修改
			{
				t[i].turn();
				break;
			}
			else if (c == 5)	//删除
			{
				t[i].bakespace();
				break;
			}
			else if (c == 6)	//显示
			{
				int x;
				cout << "请输入查询人数" << endl;
				cin >> x;

				for (j = 0; j <= x - 1; j++)//按数量要求显示查询结果
				{
					t[j].display();
				}

				break;
			}
			else if (c == 7)	//文件导入
			{
				ofstream outfile("f1.txt", ios::app);//打开文件

				for (j = 0; j <= 999; j++)
				{
					outfile << t[j] << " ";
				}//将信息读出文件

				j = 0;
				outfile.close();//关闭文件
				break;
			}
			else if (c == 8)	//文件导出
			{
				ifstream infile("f1.txt", ios::in);//打开文件

				for (j = 0; j <= 999; j++)
				{
					infile >> p[j];
				}//将信息读入文件

				infile.close();//关闭文件
				break;
			}

			else break;
		}
		if (c == 9)		//退出
		{
			break;
		}

		cout << "请继续" << endl;
		cout << "请选择下面的一个项目:" << endl << "1 创建" << endl 
			<< "2 添加" << endl << "3 查询" << endl << "4 修改" << endl 
			<< "5 删除" << endl << "6 显示" << endl << "7 文件导入" << endl 
			<< "8 文件导出" << endl << "9 退出" << endl << "请选择：" << endl;
		continue;
	}

	return 0;
}

