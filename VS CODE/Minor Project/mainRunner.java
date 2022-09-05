import java.util.*;

public class mainRunner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice=0;
        input i = new input(); 

        System.out.println("Hello there! What action would you like to perform?");
        System.out.println("Press 1 for create a file\n2 for deleting a file\n3 to exit");
        System.out.println("Enter choice:");

        choice = sc.nextInt();
        sc.close();
        while(true){
            if(choice==1) i.inputText();
            else if(choice==2) i.deleteText();
            else break;
        }
        
    }
}
