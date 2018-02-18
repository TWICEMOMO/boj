import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        String [] str = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
        int [] month = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int x = sc.nextInt();
        int y = sc.nextInt();
        int ans=0;
        ans+=y;
        for(int i=0;i<x;i++){
            ans+=month[i];
        }
        System.out.println(str[ans%7]);
    }
}