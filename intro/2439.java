import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=1;i<=N;i++){
            for(int j=i;N-j>0;j++){
                System.out.printf(" ");
            }
            for(int j=0;j<i;j++){
                System.out.printf("*");
            }
            System.out.println("");
        }
    }
}