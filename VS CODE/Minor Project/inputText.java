import java.io.*;
// import java.util.Scanner.*;
import java.util.*;

class input{
  public void inputText(String addr){
      try {
        //String addr = new String();
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter File name:");
        //if (sc.hasNext()) addr = sc.next();
        // addr = sc.nextLine();
        addr = "C:\\Users\\Manu\\Documents\\MinorProjectDirectory\\" + addr;
        File myObj = new File(addr);
        if (myObj.createNewFile()) {
          System.out.println("File created: " + myObj.getName());
        } 
        else {
          System.out.println("File already exists.");
        }
    } 
    catch (IOException e) {
        System.out.println("An error occurred.");
        e.printStackTrace();
    }
  }

  public void deleteText(String addr){
    // String addr = new String();
    // String confirm = new String();
    Scanner sc = new Scanner(System.in);
    // System.out.println("Enter file name to delete:");
    
    // if (sc.hasNext())  addr = sc.next();
    addr = "C:\\Users\\Manu\\Documents\\MinorProjectDirectory\\" + addr;
    
    File myObj = new File(addr);
    // System.out.println("Are you sure you want to delete the file?(type yes to confirm)");
    
    // confirm = sc.next();
    //above line shows error without sc.hasNext()
    myObj.delete();
    sc.close();
  }
}

public class inputText {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
        int choice=0;
        input ip = new input(); 
        String addr = new String();
        System.out.println("Hello there! What action would you like to perform?");
        System.out.println("Press 1 for create a file\n2 for deleting a file\n3 to exit");
        System.out.println("Enter choice:");

        if (sc.hasNext()) choice = sc.nextInt();
  
        
          if(choice==1){
            System.out.println("Enter File name:");
            addr = sc.next();
            ip.inputText(addr);
            }
          else if(choice==2){ 
            System.out.println("Enter File name:");
            addr = sc.next();
            ip.deleteText(addr);
          }
//            else break;
        sc.close();
    }
}


