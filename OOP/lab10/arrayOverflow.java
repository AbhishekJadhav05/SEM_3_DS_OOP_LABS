import java.util.Scanner;

public class arrayOverflow {
    public static void main(String[] args) {
        Scanner scanner =  new Scanner(System.in);
        System.out.println("enter the length of the array : ");
        int length = scanner.nextInt();
        int[] arr = new int[length];
        boolean flag = true;
        System.out.println("enter a value and an index : ");
        int val = scanner.nextInt();
        int index = scanner.nextInt();
        try{
            arr[index] = val;
        }
        catch(ArrayIndexOutOfBoundsException e){
            flag = false;
            System.out.println(e.getMessage());
        }
        if(flag){
            System.out.println("array after element insertion : ");
            for(int i=0;i<length;i++){
                System.out.println(arr[i]);
            }
        }
        scanner.close();
    }
}
