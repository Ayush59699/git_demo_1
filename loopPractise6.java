import java.util.*;
public class loopPractise6 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number :");
        long n=sc.nextLong();
        sc.close();
        long temp=n;
        long r,sum=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+(r*r*r); 
        }
        if(temp==sum)
        {
            System.out.println("Yess bruhhhhh");
        }
        else
        {
            System.out.println("Nahhh bruhhhh");
        }


    }
    
}

