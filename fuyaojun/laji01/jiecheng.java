import java.util.Scanner;

public class jiecheng {
    public static void main(String[] args) {
        System.out.printf("%20.0f",fuckyou(getDouble()));
    }

    public static double fuckyou(double asd) {

        if (asd < 0.0) {
            System.out.println("Fuck?");
            return -1.0;
        } else
            return (asd == 1.0 || asd == 0.0) ? 1.0 : asd * fuckyou(asd - 1.0);
    }

    public static  double getDouble(){
        Scanner input=new Scanner(System.in);
        while(!input.hasNextDouble()){
            System.out.println("不是整数");
            input.next();
        }
        return input.nextDouble();
    }
}