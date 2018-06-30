#pragma once
#include <iostream>
using namespace std;
#include <string>
class Xinxi   //类声明
{
private:

public:
	Xinxi(void);//构造函数
	~Xinxi(void);//析构函数
    int num,age,tele;
	string sex;
	long long mobile;
	string name;    //定义类数据
	void display();//输出个人信息
	void setout();//设置个人信息
	void turn();//更改个人信息
	void add();//添加个人信息
	void bakespace();//删除个人信息
	friend ostream & operator << (ostream &, Xinxi &);
	friend istream & operator >> (istream &, Xinxi &);//友好型输入输出流
};

