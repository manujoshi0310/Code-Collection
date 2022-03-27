
public class StringTest {
    public static void main(String[] args) {
        String s1 = "HelloWorldThisIsTestString";
        System.out.println(s1.contains("e"));//true
        System.out.println(s1.substring(1, 2));
        String s2 = s1.concat(" Yooooo");
        System.out.println(s2);
        System.out.println(s1.compareTo(s2));
        System.out.println(s1.charAt(1));

    }
}
