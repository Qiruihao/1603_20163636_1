#include "Xinxi.h"


Xinxi::Xinxi(void)
{
   num = 1;
   age = 1;
   tele = 1;
   mobile = 1;
   name = "***";
   sex = "***";
}//��ʼ����ֵ


Xinxi::~Xinxi(void)
{
}

void Xinxi::display()//���������Ϣ
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
	cout << "tele:" << tele << endl;
	cout << "mobile:" << mobile << endl;
}

void Xinxi::setout()//���ø�����Ϣ
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

void Xinxi::turn()//���ĸ�����Ϣ
{
	int a;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (a = 0; a != 7;)//�����û�ѡ�������Ϣ
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

void Xinxi::add()//��Ӹ�����Ϣ
{
	int b;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (b = 0;b != 7;)//�����û�ѡ�������Ϣ
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

void Xinxi::bakespace()//ɾ��������Ϣ
{
	int c;
	cout << "1.num " << "2.name " << "3.sex " << "4.age " << "5.tele " << "6.mobile " << "7.end " << endl;

	for (c = 0;c != 7;)//�����û�ѡ��ɾ����Ϣ
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

