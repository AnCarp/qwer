import java.util.Arrays;

public class HelloWorld { 
    // 定义一个存储成绩有效个数
    public static int sum = 0;

    // 完成 main 方法
    public static void main(String[] args) {
        int scores[] = { 89, -23, 64, 91, 119, 52, 73 };
        sortscores(scores);
        outputsum(scores);
        outputscores(scores);
    }

    // 定义方法完成成绩排序并输出前三名的功能
    public static int[] sortscores(int[] c) {

        Arrays.sort(c);
        return c;
    }

    public static int[] outputsum(int[] d) {
        // 判断有效成绩

        for (int i = d.length - 1; i >= 0; i--) {
            if (d[i] > 0)

                sum += 1;
            else if (d[i] < 0)

                while (sum > 3)
                    break;
        }
        System.out.println(sum);
        return d;
    }

    // 输出前三名
    public static int[] outputscores(int[] scores) {

        for (int j = scores.length - 1; j <= scores.length - 1 && j >= scores.length - 3; j--) {
            System.out.println(scores[j]);
        }
       return scores;

    }

}