import java.util.Scanner;

public class softwareOne {



    public static void main(String[] args) {
        System.out.println("Program Started.");
    
    Student studentname = new Student();
    studentname.setStuName();

    
    Student studentname1 = new Student();

    bijiao(studentname.name, studentname1.name1);

    Student ID = new Student();
    
    StudentID(ID.studentnumber);
    
    System.out.println(phoneNumber(1, 2));
    
    }
    
    
    
    // 定义有参非空方法//
    
    
    
    public static int phoneNumber(int phonenumer1, int phonenumber2) {
    
    int thisnumber = 1102908536;
    
    return thisnumber;
    
    }
    
    
    
    // 判断学号//
    
    public static void StudentID(String ID) {
    
    if (ID.length() != 10) {
    
    System.out.println("这不是个学号");
    
    } else {
    
    
    
    System.out.println(ID);
    
    }
    
    }
    
    
    
    // 判断名字字符//
    
    public static void bijiao(String a, String b) {
    
    String q;
    
    String p = "这不是个名字";
    
    q = (a.equalsIgnoreCase(b)) ? a : p;
    
    System.out.println(q);
    
    }


    
    
    
    }
    
    
    
    // 学生类//
    
    class Student {
    
    public String name = "qwer";
    
    public String name1 = "qwer";
    
    public String studentnumber = "2019144106";

    public void setStuName(){
        Scanner input =new Scanner(System.in);
        name=input.nextLine();
    }
    
    }