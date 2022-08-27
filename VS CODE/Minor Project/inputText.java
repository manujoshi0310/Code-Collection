import java.io.*;
import java.util.*;

public class inputText {
    public static void main(String[] args) {
        input ip1 = new input();         
    }
}

class input{

    void inputText(){
      try {
        String addr = new String();
        System.out.println("Enter File path:");
        Scanner sc = new Scanner(System.in);
        addr = sc.nextLine();
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


}
