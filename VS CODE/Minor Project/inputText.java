import java.io.*;
import java.util.*;

public class inputText {
    
}

class input{

  public void inputText(){
      try {
        String addr = new String();
        System.out.println("Enter File name:");
        Scanner sc = new Scanner(System.in);
        addr = sc.nextLine();
        addr = "C:\\Users\\Manu\\Documents\\MinorProjectDirectory\\" + addr;
        File myObj = new File(addr);
        if (myObj.createNewFile()) {
          System.out.println("File created: " + myObj.getName());
        } 
        else {
          System.out.println("File already exists.");
        }
        sc.close();
    } 
    catch (IOException e) {
        System.out.println("An error occurred.");
        e.printStackTrace();
    }
  }

  public void deleteText(){
    String addr, confirm;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter file name to delete:");
    addr = sc.nextLine();
    addr = "C:\\Users\\Manu\\Documents\\MinorProjectDirectory\\" + addr;
    File myObj = new File(addr);
    System.out.println("Are you sure you want to delete the file?(type yes to confirm)");
    confirm = sc.nextLine();
    if(confirm=="yes"){
      if(myObj.delete()) System.out.println("File deleted successfully");
      else System.out.println("File not deleted");
    }
    sc.close();
  }
}
