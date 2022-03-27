public class Overloading {
    int add(int a, int b){
        return(a+b);
    }
    double add(double a, double b){
        return(a+b);
    }
    int add(int a, int b, int c){
        return(a+b+c);
    }
    Overloading(){}
    Overloading(int a, int b){
        System.out.println(this.add(a,b));
    }

    public static void main(String[] args) {
        Overloading o1 = new Overloading();
        System.out.println(o1.add(420, 69));
        System.out.println(o1.add(36.125, 32.875));
        System.out.println(o1.add(120,175,125));
        Overloading o2 = new Overloading(15,35);
        o2.add(3,6,9);
    }

}
