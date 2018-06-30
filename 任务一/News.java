/*信1603 齐瑞豪 20163636
 * 20170921
 * 
 */
package yuan;
import java.util.Scanner;

public class News 
{
	private int newsid;//定义五个私有变量
	private String newstitle;
	private String newscontent;
	private String newsauthor;
	private boolean isavailable;
	
	News(int num, String title, String content, String author, boolean is) {
		//对五个变量进行初始化赋值
		newsid = num;
		newstitle = title;
		newscontent = content;
		newsauthor = author;
		isavailabl e= is;
	}
	
	News() {
		//无参构造函数
	
	}
	
	Scanner input = new Scanner(System.in);//创建Scanner类，主要是在程序运行时从键盘输入，输入的值赋值给变量input
	
	public void setnum(int num) {
		//设置变量newsid
		newsid = num;
	}
	
	public int getnum() {
		//读取变量newsid
		return newsid;
	}
	
	public void set1(String title) {
		//设置变量newstitle
		newstitle = title;
	}
	
	public String get1() {
		//读取变量newstitle
		return newstitle;
	}
	
	public void set2(String content) {
		//设置变量newscontent
		newscontent = content;
	}
	
	public String get2() {
		//读取变量newscontent
		return newscontent;
	}
	public void set3(String author) {
		//设置变量newsauthor
		newsauthor = author;
	}
	
	public String get3() {
		//读取变量newsauthor
		return newsauthor;
	}
	
	public void set4(boolean is) {
		//设置变量newsis
		isavailable = is;
	}
	
	public boolean get4() {
		//读取变量newsis
		return isavailable;
	}	
}
