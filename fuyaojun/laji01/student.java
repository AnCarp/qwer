import java.util.*;

public class student {
	static String human = "符耀俊";
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
		System.out.println("请输入你的名字:");
		String name1 = input.nextLine();
		Judge(name1);
		if (name1.equalsIgnoreCase(human)) {
			person man = new person();
			man.information();
			studentScores Grade = new studentScores();
			Grade.Scores();
		} else
			System.out.println("请刷新后重试");

	}

	public static void Judge(String man) {
		String name = "没有这个人";
		name = (man.equals(human)) ? man : name;
		System.out.println(name);
	}
}