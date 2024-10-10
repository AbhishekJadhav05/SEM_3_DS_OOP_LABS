import java.util.Scanner;

public class grades {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] marks = new int[3];
        System.out.println("enter name : ");
        String name = scanner.nextLine();
        System.out.println("enter roll number : ");
        int roll = scanner.nextInt();
        try{
            for(int i=1;i<=3;i++){
                System.out.println("enter marks of subject : "+i);
                marks[i-1] = Integer.parseInt(scanner.next());
            }
        }
        catch(NumberFormatException e){
            System.out.println("not valid marks : "+e.getMessage());
            System.exit(1);
        }
        System.out.println(name);
        System.out.println(roll);
        System.out.println("average is : "+(marks[0]+marks[1]+marks[2])/3);
        scanner.close();
    }
}
