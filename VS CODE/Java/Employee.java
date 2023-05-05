import java.util.*;

public class Employee implements Cloneable{
    private List<String> empList;
    public Employee(){
        empList = new ArrayList<String>();
    }    
    public Employee(List<String> list){
        this.empList = list;
    }
    public void loadData(){
        empList.add("Pankaj");
        empList.add("Lisa");
        empList.add("David");
        empList.add("Raj");
    }
    public List<String> getEmpList(){
        return empList;
    }

    @Override
    public Object clone() throws CloneNotSupportedException{
        List<String> temp = new ArrayList<String>();
        for(String s : this.getEmpList()){
            temp.add(s);
        }
        return new Employee(temp);
    }
}
