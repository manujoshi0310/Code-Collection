public class Overiding {
    void ovd(){
        System.out.println("parent class");
    }
    Overiding m1(){
        System.out.println("covariant p");
        return this;
    }



    public static void main(String[] args) {
        Child c = new Child();
        c.ovd();
        c.m1();
    }
}

class Child{
    Child m1(){
        System.out.println("Covariant c");
        return this;
    }
    void ovd(){
        System.out.println("Child Class");
    }
}
