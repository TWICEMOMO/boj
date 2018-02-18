import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++){
            String str= sc.next();
            String[] num =str.split(",");
            int A= Integer.parseInt(num[0]);
            int B= Integer.parseInt(num[1]);
            System.out.println(A+B);
        }
    }
}