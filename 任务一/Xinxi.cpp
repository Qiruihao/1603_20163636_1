#include "Xinxi.h"


Xinxi::Xinxi(void)
{
   num = 1;
   age = 1;
   tele = 1;
   mobile = 1;
   name = "***";
   sex = "***";
}//初始化赋值


Xinxi::~Xinxi(void)
{
}

void Xinxi::display()//输出个人信息
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
	cout << "tele:" << tele << endl;
	cout << "mobile:" << mobile << endl;
}

void Xinxi::setout()//设置个人信息
{
	cout << "num:";
	cin >> num;
	cout << "name:";
	cin >> name;
	cout << "sex:";
	cin >> sex;
	cout << "age:";
	cin >> age;
	cout << "tele:";
	cin >> tele;
	cout << "mobile:";
	cin >> mobile;
}

void Xinxi::turn()//更改个人信息
{
	int a;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (a = 0; a != 7;)//根据用户选择更改信息
	{
	   cin >> a;
	   switch(a)
	   {
	       case 1 : cin >> num;
           case 2 : cin >> name;
		   case 3 : cin >> sex;
           case 4 : cin >> age;
           case 5 : cin >> tele;  
           case 6 : cin >> mobile;
           case 7 : cout << "end" << endl;
			        break;
		   default: cout << "enter data error!" << endl;
	   }
	}
}

void Xinxi::add()//添加个人信息
{
	int b;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (b = 0;b != 7;)//根据用户选择添加信息
	{
	   cin >> b;
	   switch(b)
	   {
	       case 1 : cin >> num;
           case 2 : cin >> name;
		   case 3 : cin >> sex;
           case 4 : cin >> age;
           case 5 : cin >> tele;  
           case 6 : cin >> mobile;
           case 7 : cout << "end" << endl;
			        break;
           default: cout << "enter data error!" << endl;
	   }
	}
}

void Xinxi::bakespace()//删除个人信息
{
	int c;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (c = 0;c != 7;)//根据用户选择删除信息
	{
	   cin >> c;
	   switch(c)
	   {
	       case 1 : num = 1;
           case 2 : name = "***";
		   case 3 : sex = "***";
           case 4 : age = 1;
           case 5 : tele = 1;  
           case 6 : mobile = 1;
           case 7 : cout << "end" << endl;
			        break;
           default: cout << "enter data error!" << endl;
	   }
	}
}

