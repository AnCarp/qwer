import java.util.Arrays;
public class shuzu {

    public static void main(String[] args) {

        int a[][] = new int[4][];
        a[0] = new int[] { 10,  11,  12, 13 };
        a[1] = new int[] { 20,  21,  22,  23 };
        a[2] = new int[] { 30,  31,  32,  33 };
        a[3] = new int[] { 40,  41,  42,  43 };
        Arrays.sort(a);
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.println(a[i][j]);
            }

            System.out.println();

        }
    }
}
