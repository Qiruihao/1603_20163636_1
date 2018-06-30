/*
 * ����   Newsmanager  
 */
package yuan;

import java.util.Scanner;

public class Newsmanager {
	int n = 2;//�������ͱ���n
	
	News a[] = new News[10];//����News���͵����飬����ռ�
	{
	a[0] = new News(1, "****", "****", "qiruihao", true);//��ʼ����ֵ
	a[1] = new News(2, "****", "****", "********", true);
	for (int i = 2; i < 10; i++)
		a[i] = new News();//�����һ���Ժ������
	}
	
	Scanner input = new Scanner(System.in);//����Scanner�࣬��Ҫ���ڳ�������ʱ�Ӽ������룬�����ֵ��ֵ������input
	
	public void showNews() {
		//��ӡ�������������Ϣ
		for (int i = 0; i < n; i++) {
			System.out.println(a[i].getnum() + "\t" + a[i].get1() + "\t" + a[i].get2()
					+ "\t" + a[i].get3() + "\t" + a[i].get4());//����System.out.println�����Ϣ
		}
		web();//�������
	}
	
	public void addNews(String newstitle, String newscontent, 
			String newsauthor, boolean isavailable) {
		//����������Ϣ
		isavailable = true;//�����ͱ������и�ֵ
		a[n - 1].setnum(n);//����News���е����ð취������5������ֵ
		a[n - 1].set1(newstitle);
		a[n - 1].set2(newscontent);
		a[n - 1].set3(newsauthor);
		a[n - 1].set4(isavailable);
		web();//�������
	}
	
	public void deleteNews(int newsid) {
		//ɾ��������Ϣ
		n -= 1;
		for (int i = newsid - 1; i < n; i++) {
			a[i] = a[i + 1];//ͨ����������ɾ����Ϣ
			a[i].setnum(a[i].getnum() - 1);//ͨ����������ɾ�����
		}
		web();//�������
	}
	
	public void updateNews(int newsid) {
		//�޸ĸ�����Ϣ
		boolean str1 = false;//���岼���ͱ����������и���ֵ
		boolean str2 = true;//���岼���ͱ����������и���ֵ
		if (a[newsid - 1].get4()) {
			//�жϲ����ͱ���ֵ����Ϊtrueִ��if���
			a[newsid - 1].set4(str1);
			}//��������ȡ��
		else
			a[newsid - 1].set4(str2);//��������ȡ��
		web();//�������
	}
	
	public void selectNews(int newsid) {
		//��ѯ�������������
		System.out.println("���ŵ���Ϣ����:");
		System.out.println("���\t����\t����\t����\t�Ƿ���Է���");
		System.out.println(newsid + "\t" + a[newsid - 1].get1() + "\t" + a[newsid - 1].get2()
				+ "\t" + a[newsid - 1].get3() + "\t" + a[newsid - 1].get4());//����System.out.println�����Ϣ
		web();//�������
	}
	
	public void web() {
		//���ѡ������ѡ�����ݣ��������
		System.out.println("��ѡ��:");
		System.out.println("1.��ʾ������Ϣ");
		System.out.println("2.����������Ϣ");
		System.out.println("3.ɾ��������Ϣ");
		System.out.println("4.�޸�������Ϣ");
		System.out.println("5.��ѯ������Ϣ");
		System.out.println("0.�˳�");
		int t = input.nextInt();//ͨ�����̶Ա���t���и�ֵ
		switch (t) {
		//ƥ��ѡ��Ĺ���
		case 1://1.��ʾ������Ϣ
			System.out.println("�������ŵ���Ϣ����:");
			System.out.println("���\t����\t����\t����\t�Ƿ���Է���");
			showNews();//��ӡ�������������Ϣ
			break;
			
		case 2://2.����������Ϣ
			n += 1;
			System.out.print("������Ҫ��ӵ����ŵı���:");
			String str1 = input.next();//ͨ�����̶��ַ���str1���и�ֵ
			System.out.print("����:");
			String str2 = input.next();//ͨ�����̶��ַ���str2���и�ֵ
			System.out.print("����:");
			String str3 = input.next();//ͨ�����̶��ַ���str3���и�ֵ
			boolean str4 = false;//���岼���ͱ����������и���ֵ
			addNews(str1, str2, str3, str4);//����������Ϣ
			break;
			
		case 3://3.ɾ��������Ϣ
			System.out.println("������Ҫɾ�������ŵı��:");
			int newsid = input.nextInt();//ͨ�����̶�����newsid���и�ֵ
			deleteNews(newsid);//���ݱ��ɾ��������Ϣ
			break;
			
		case 4://4.�޸�������Ϣ
			System.out.println("������Ҫ�޸ĵ����ŵı��:");
			int m = input.nextInt();//ͨ�����̶�����m���и�ֵ
			updateNews(m);//���ݱ���޸ĸ�����Ϣ
			break;
			
		case 5://5.��ѯ������Ϣ
			System.out.println("������Ҫ��ѯ�����ű��:");
			int n = input.nextInt();//ͨ�����̶�����n���и�ֵ
			selectNews(n);//���ݱ�Ų�ѯ������Ϣ
			break;
			
		case 0://0.�˳�
			System.exit(0);
		}
	}
	
	public static void main(String[] args) {//������ 
		// TODO �Զ����ɵķ������
		Newsmanager m = new Newsmanager();//����Newsmanager���ͱ�����������ռ�
		System.out.println("*******************************");
		System.out.println("ʯ��ׯ������ѧ�������ϵ���Ź���ϵͳ");
		System.out.println("*******************************");
		m.web();//�������
		System.out.println("*******************************");
	}
}
