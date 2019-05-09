import java.util.Arrays;



public class nd {



public static void main(String[] args) {

// a为学生名字//

String a[] = new String[] { "张三", "李四", "王五", "太一" };



printArray(a);

// b为学生成绩//

int b[] = new int[] { 98, 65, 73, 60 };



sortScore(b);



printArray(b);

}

//数组排序（有返回值的参数方法）//

public static int[] sortScore(int[] b) {

Arrays.sort(b);

return b;



}

//方法重载//

// 数组输出//

public static int[] printArray(int[] c) {



for (int i = 0; i < c.length; i++)

System.out.println(c[i]);

return c;

}

//名字输出//

public static void printArray(String[] arrayToPrint) {

for (int i = 0; i < arrayToPrint.length; i++)

System.out.println(arrayToPrint[i]);



}



}

