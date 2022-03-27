public class interface1 implements x1,x2{

    public void name(){
        System.out.println("Hello there");
    }
    @Override
    public void surname() {
        System.out.println("yooooooooooo");
        
    }
}

interface x1{
    String surname = new String();
    void surname();
}

interface x2{
    void name();
}

