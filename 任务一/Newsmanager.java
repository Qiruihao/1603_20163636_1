/*
 * 类名   Newsmanager  
 */
package yuan;

import java.util.Scanner;

public class Newsmanager {
	int n = 2;//定义整型变量n
	
	News a[] = new News[10];//申请News类型的数组，分配空间
	{
	a[0] = new News(1, "****", "****", "qiruihao", true);//初始化赋值
	a[1] = new News(2, "****", "****", "********", true);
	for (int i = 2; i < 10; i++)
		a[i] = new News();//输出第一个以后的新闻
	}
	
	Scanner input = new Scanner(System.in);//创建Scanner类，主要是在程序运行时从键盘输入，输入的值赋值给变量input
	
	public void showNews() {
		//打印输出所有新闻信息
		for (int i = 0; i < n; i++) {
			System.out.println(a[i].getnum() + "\t" + a[i].get1() + "\t" + a[i].get2()
					+ "\t" + a[i].get3() + "\t" + a[i].get4());//调用System.out.println输出信息
		}
		web();//界面输出
	}
	
	public void addNews(String newstitle, String newscontent, 
			String newsauthor, boolean isavailable) {
		//增加新闻信息
		isavailable = true;//布尔型变量进行赋值
		a[n - 1].setnum(n);//调用News类中的设置办法，设置5个变量值
		a[n - 1].set1(newstitle);
		a[n - 1].set2(newscontent);
		a[n - 1].set3(newsauthor);
		a[n - 1].set4(isavailable);
		web();//界面输出
	}
	
	public void deleteNews(int newsid) {
		//删除该条信息
		n -= 1;
		for (int i = newsid - 1; i < n; i++) {
			a[i] = a[i + 1];//通过数组重置删除信息
			a[i].setnum(a[i].getnum() - 1);//通过数组重置删除编号
		}
		web();//界面输出
	}
	
	public void updateNews(int newsid) {
		//修改该条信息
		boolean str1 = false;//定义布尔型变量，并进行赋初值
		boolean str2 = true;//定义布尔型变量，并进行赋初值
		if (a[newsid - 1].get4()) {
			//判断布尔型变量值，若为true执行if语句
			a[newsid - 1].set4(str1);
			}//布尔变量取反
		else
			a[newsid - 1].set4(str2);//布尔变量取反
		web();//界面输出
	}
	
	public void selectNews(int newsid) {
		//查询并输出该条新闻
		System.out.println("新闻的信息如下:");
		System.out.println("序号\t标题\t内容\t作者\t是否可以发表");
		System.out.println(newsid + "\t" + a[newsid - 1].get1() + "\t" + a[newsid - 1].get2()
				+ "\t" + a[newsid - 1].get3() + "\t" + a[newsid - 1].get4());//调用System.out.println输出信息
		web();//界面输出
	}
	
	public void web() {
		//输出选择界面可选择内容，界面操作
		System.out.println("请选择:");
		System.out.println("1.显示新闻信息");
		System.out.println("2.增加新闻信息");
		System.out.println("3.删除新闻信息");
		System.out.println("4.修改新闻信息");
		System.out.println("5.查询新闻信息");
		System.out.println("0.退出");
		int t = input.nextInt();//通过键盘对变量t进行赋值
		switch (t) {
		//匹配选择的功能
		case 1://1.显示新闻信息
			System.out.println("所有新闻的信息如下:");
			System.out.println("序号\t标题\t内容\t作者\t是否可以发表");
			showNews();//打印输出所有新闻信息
			break;
			
		case 2://2.增加新闻信息
			n += 1;
			System.out.print("请输入要添加的新闻的标题:");
			String str1 = input.next();//通过键盘对字符串str1进行赋值
			System.out.print("内容:");
			String str2 = input.next();//通过键盘对字符串str2进行赋值
			System.out.print("作者:");
			String str3 = input.next();//通过键盘对字符串str3进行赋值
			boolean str4 = false;//定义布尔型变量，并进行赋初值
			addNews(str1, str2, str3, str4);//增加新闻信息
			break;
			
		case 3://3.删除新闻信息
			System.out.println("请输入要删除的新闻的编号:");
			int newsid = input.nextInt();//通过键盘对整形newsid进行赋值
			deleteNews(newsid);//根据编号删除该条信息
			break;
			
		case 4://4.修改新闻信息
			System.out.println("请输入要修改的新闻的编号:");
			int m = input.nextInt();//通过键盘对整形m进行赋值
			updateNews(m);//根据编号修改该条信息
			break;
			
		case 5://5.查询新闻信息
			System.out.println("请输入要查询的新闻编号:");
			int n = input.nextInt();//通过键盘对整形n进行赋值
			selectNews(n);//根据编号查询该条信息
			break;
			
		case 0://0.退出
			System.exit(0);
		}
	}
	
	public static void main(String[] args) {//主函数 
		// TODO 自动生成的方法存根
		Newsmanager m = new Newsmanager();//定义Newsmanager类型变量，并分配空间
		System.out.println("*******************************");
		System.out.println("石家庄铁道大学软件工程系新闻管理系统");
		System.out.println("*******************************");
		m.web();//界面输出
		System.out.println("*******************************");
	}
}
