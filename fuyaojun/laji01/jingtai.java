public class jingtai {
    public String name;
    public static int name1 = 3;
    static {
        name1 = 5;
        System.out.println("傻逼");
    }
    {
        System.out.println("傻叉");
    }

    public jingtai() {
        System.out.println("沙雕");

    }

    public static void main(String[] args) {
        jingtai garen=new jingtai();
        System.out.println(jingtai.name1);

    }

}