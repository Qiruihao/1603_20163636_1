#pragma once
#include <iostream>
using namespace std;
#include <string>
class Xinxi   //������
{
private:

public:
	Xinxi(void);//���캯��
	~Xinxi(void);//��������
    int num,age,tele;
	string sex;
	long long mobile;
	string name;    //����������
	void display();//���������Ϣ
	void setout();//���ø�����Ϣ
	void turn();//���ĸ�����Ϣ
	void add();//��Ӹ�����Ϣ
	void bakespace();//ɾ��������Ϣ
	friend ostream & operator << (ostream &, Xinxi &);
	friend istream & operator >> (istream &, Xinxi &);//�Ѻ������������
};

