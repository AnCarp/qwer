import java.util.*;

public class student {
	static String ID = "2018144101";
	private static String University;
	static {
		System.out.println("江苏理工学院");

	}
	{
		System.out.println("学生信息查询");
	}

	public static void main(String[] args) {
		new student();
		Scanner input = new Scanner(System.in);
		System.out.println("请输入你的学号:");
		String name1 = input.nextLine();
		Judge(name1);
		if (name1.equals(ID)) {
			person man=new person();
			man.information();
			studentScores Grade = new studentScores();
			Grade.inputScores();
		} else
			{System.out.println("没有这个学号");
			System.out.println("请刷新后重试");
			}
	}
	public static void Judge(String man) {
		String name="学号长度有误";
		name = (man.equals(ID)) ? man : name;
	}
}
