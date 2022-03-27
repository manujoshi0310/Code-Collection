// import java.util.*;
class inheritance{
    int modelNo, x=500;
    String modelName, bodyType;

    public static void main(String[] args) {
        Audi r8 = new Audi(2622, "R8", "Sedan", 4000, 380);
        r8.display();
        
    }
}

class Audi extends inheritance{
    int engHPW, maxSpeed;
    Audi(int modelNo, String modelName, String bodyType, int engHPW, int maxSpeed){
        this.modelNo = modelNo;
        this.modelName = modelName;
        this.bodyType = bodyType;
        this.engHPW = engHPW;
        this.maxSpeed = maxSpeed;
    }

    void display(){
        System.out.println(this.bodyType);
        System.out.println(this.modelName);
        System.out.println(this.maxSpeed);
        System.out.println(this.engHPW);
        System.out.println(this.modelNo);
        System.out.println(super.x);
    }
}