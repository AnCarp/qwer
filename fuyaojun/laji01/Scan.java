import java.util.Scanner;

public class Scan {

    public static void main(String[] args) {
        System.out.println("enter a fck");
        int a=getIntTest();
        System.out.println(a);
    }

    public static  int getIntTest(){
        Scanner input=new Scanner(System.in);
        while(!input.hasNextInt()){
            System.out.println("不是整数");
            input.next();
        }
        return input.nextInt();
    }
    
}