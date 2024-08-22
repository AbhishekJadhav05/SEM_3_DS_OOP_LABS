import java.util.Scanner;

public class sumPrinciple {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter order of matrix : ");
        int order = scanner.nextInt();
        int[][] matrix = new int[order][order];
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix[i][j] = scanner.nextInt();
            }
        }
        int sum = 0;
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                if(i == j){
                    sum+=matrix[i][j];
                }
            }
        }
        System.out.println("sum of elements in principle diagonal is : "+sum);
        scanner.close();
    }
}
