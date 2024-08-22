import java.util.Scanner;

public class symmetric {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of order : ");
        int order = scanner.nextInt();
        int[][] matrix = new int[order][order];
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                System.out.println("enter element at : "+i+" "+j);
                matrix[i][j] = scanner.nextInt();
            }
        }
        boolean flag = true;
        for(int i =0;i<order;i++){
            for(int j=0;j<order;j++){
                if(matrix[i][j] != matrix[j][i]){
                    flag = false;
                    System.out.println("not symmetric");
                    break;
                }
            }
        }
        if(flag){
            System.out.println("symmetric");
        }
        
        scanner.close();
    }
}
