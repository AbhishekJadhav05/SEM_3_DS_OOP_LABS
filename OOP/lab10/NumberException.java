import java.util.Scanner;

public class NumberException {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a string : ");
        String s = scanner.nextLine();
        int num;
        try{
            num = Integer.parseInt(s);
            System.out.println("the string is converted to a number : "+num);
        }
        catch(NumberFormatException e){
            System.out.println(e);
        }
        scanner.close();
    }
}
