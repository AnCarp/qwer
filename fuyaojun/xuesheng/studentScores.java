import java.util.Scanner;

public class studentScores {

	public void inputScores() {
		Scanner input = new Scanner(System.in);
		System.out.println("请输入Java成绩：");
		int Java = input.nextInt();
		System.out.println("请输入高数成绩：");
		int math = input.nextInt();
		System.out.println("请输入英语成绩：");
		int english = input.nextInt();
		int[] Scores = new int[] { Java, math, english };
		String[] Subjects = new String[] { "java：", "高数：", "英语" };

		String[] SubjectsScores = new String[] { "java：" + Java, "高数：" + math, "英语:" + english };

		for (int i = 0; i < SubjectsScores.length; i++)

			System.out.println(SubjectsScores[i]);
		pass(Scores, Subjects);
		Average(Scores);
	}

	public static void pass(int[] a, String[] b) {
		for (int i = 0; i < a.length; i++) {
			if (a[i] < 60)
				System.out.println(b[i] + "：该科需要补考");
		}
	}

	public static void Average(int[] a) {
		int sum = 0, Average;
		for (int i = 0; i < a.length; i++) {

			sum += a[i];

		}
		Average = sum / 3;
		System.out.println("总分："+sum);
		System.out.println("平均分："+Average);
	}
}
