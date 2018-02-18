import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=N;i>0;i--){
            for(int j=i;j<N;j++){
                System.out.printf(" ");
            }
            for(int j=0;j<i;j++){
                System.out.printf("*");
            }
            System.out.println();
        }
    }
}