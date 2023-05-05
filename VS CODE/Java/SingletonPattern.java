class SingleObject{
    private static SingleObject instance = null;

    private SingleObject(){}

    public static SingleObject getInstance(){
        if(instance == null){
            instance = new SingleObject();
        }
        return instance;
    }

    public void showMessage(){
        System.out.println("Single Object created");
    }
}


public class SingletonPattern{
    public static void main(String[] args) {
        
        SingleObject object = SingleObject.getInstance();
        
        object.showMessage();

    }


}