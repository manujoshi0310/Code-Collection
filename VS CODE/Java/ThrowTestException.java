import java.util.*;
public class ThrowTestException {
    void validate(int x){
        if(x<18){
            throw new ArithmeticException("Not valid");
        }
        else{
            System.out.println("Valid");
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        ThrowTestException t = new ThrowTestException();
        try{
            t.validate(x);
        }
        catch(ArithmeticException e){
            System.out.println("New excp: "+e);
        }
        finally{
            System.out.println("DONE");
        }
        s.close();

    }
}
