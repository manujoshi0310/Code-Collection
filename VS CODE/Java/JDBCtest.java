// import java.sql.Connection;
// import java.sql.DriverManager;
// import java.sql.ResultSet;
// // import java.util.*;

// public class JDBCtest {
//     public static void main(String[] args) {
//         try {
//             Class.forName("com.mysql.jdbc.Driver");
//             final String murl = "jdbc:mysql://localhost:8080/upes_db";
//             final String muser = "root";
//             final String mpass = "manu";

//             Connection c1 = DriverManager.getConnection(murl, muser, mpass);

//             java.sql.Statement s1 = c1.createStatement();

//             //String mysql_stmt = "create table record(SerialNo integer, Name varchar(40), Company varchar(40))";
//             //ResultSet rs = s1.executeQuery(mysql_stmt);
            
//             //mysql_stmt = "insert into record values(1, tushu, google)";
//             //ResultSet rs1 = s1.executeQuery(mysql_stmt);

//             c1.close();


//         } catch (Exception e) {
//             System.out.println(e);
//         }

//     }
// }
