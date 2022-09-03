import java.io.*;
import java.util.*;

public class inputText {
    public static void main(String[] args) {
        input ip1 = new input();  
        ip1.inputText();       
    }
}

class input{

  void inputText(){
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

  void deleteFile(File myObj){
    if(myObj.delete()) System.out.println("File deleted successfully");
    else System.out.println("File not deleted");
  }
}
