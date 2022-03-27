class Student

{

    public String Name;

    public int Roll_No;

    public Student(){ };

    public Student(String N, int R)

    {

        Name = N;

        Roll_No = R;

        System.out.println("Name : "+Name+" "+"Roll_no : "+Roll_No);

    }

    public void print(String P, int K)

    {

        Name = P;

        Roll_No = K;

        System.out.println("Name : "+Name+" "+"Roll_no : "+Roll_No);

    }

}

class exception1

{

public static void main(String[] args)

    {

        Student[] Stu;

        Stu = new Student[8];

        Stu[0] = new Student("Manu",91);
        Stu[1] = new Student("gaurav",92);
        Stu[2] = new Student("Himang",93);
        Stu[3] = new Student("kd",94);
        Stu[4] = new Student("Kaushal",95);
        Stu[5] = new Student("rathore",96);
        Stu[6] = new Student("loki",97);
        Stu[7] = new Student("pritam",98);
        

        try
        {
            Stu[8] = new Student();

            Stu[8].print("sid",156);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Do not cross size of array!!!."  + e );
        }
    }
}