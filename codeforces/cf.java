import java.util.*;
public class cf 
{
    public static void solve(Scanner sc)
    {
        String s=sc.nextLine();
        if(s.length()>10)
        {
            System.out.println(s.charAt(0) + "" + (s.length() - 2) + s.charAt(s.length() - 1));
            return;
        }
        System.out.println(s);
    }
    public static void main(String[] args) 
    {
        Scanner sc =new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0)
        {
            solve(sc);
        }
        sc.close();
    }
}