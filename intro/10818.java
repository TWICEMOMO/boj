import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();
        int Min=1000001;
        int Max=-1000001;
        for(int i=0;i<N;i++){
            int k=sc.nextInt();
            if(Max<k) Max=k;
            if(Min>k) Min=k;
        }
        System.out.printf("%d %d",Min,Max);
    }
}