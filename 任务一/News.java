/*��1603 ����� 20163636
 * 20170921
 * 
 */
package yuan;
import java.util.Scanner;

public class News 
{
	private int newsid;//�������˽�б���
	private String newstitle;
	private String newscontent;
	private String newsauthor;
	private boolean isavailable;
	
	News(int num, String title, String content, String author, boolean is) {
		//������������г�ʼ����ֵ
		newsid = num;
		newstitle = title;
		newscontent = content;
		newsauthor = author;
		isavailabl e= is;
	}
	
	News() {
		//�޲ι��캯��
	
	}
	
	Scanner input = new Scanner(System.in);//����Scanner�࣬��Ҫ���ڳ�������ʱ�Ӽ������룬�����ֵ��ֵ������input
	
	public void setnum(int num) {
		//���ñ���newsid
		newsid = num;
	}
	
	public int getnum() {
		//��ȡ����newsid
		return newsid;
	}
	
	public void set1(String title) {
		//���ñ���newstitle
		newstitle = title;
	}
	
	public String get1() {
		//��ȡ����newstitle
		return newstitle;
	}
	
	public void set2(String content) {
		//���ñ���newscontent
		newscontent = content;
	}
	
	public String get2() {
		//��ȡ����newscontent
		return newscontent;
	}
	public void set3(String author) {
		//���ñ���newsauthor
		newsauthor = author;
	}
	
	public String get3() {
		//��ȡ����newsauthor
		return newsauthor;
	}
	
	public void set4(boolean is) {
		//���ñ���newsis
		isavailable = is;
	}
	
	public boolean get4() {
		//��ȡ����newsis
		return isavailable;
	}	
}
