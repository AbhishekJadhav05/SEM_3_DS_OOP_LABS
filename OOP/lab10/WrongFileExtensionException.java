import java.util.Scanner;

public class WrongFileExtensionException extends Exception {
    public WrongFileExtensionException(){
        super();
        System.out.println("provided wrong file extension");
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the file format : ");
        String format = scanner.next();
        try{
            if(format.equalsIgnoreCase(".xz")){
                System.out.println("xz utils format excepted");
            }else{
                throw new WrongFileExtensionException();
            }
        }
        catch(WrongFileExtensionException e){
            System.out.println("shutting down");
            System.exit(0);
        }
        scanner.close();
    }
}
