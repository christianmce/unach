package paq1;

import java.sql.*;

public class Conexion {

    String login = "usuario_bd";
    String password = "contrasena_bd";
    String url = "jdbc:mysql://localhost/nombre_basedatos";
    Connection conn = null;
    Statement st = null;

    public Statement contectaDB() throws SQLException, SQLException, ClassNotFoundException{
        try {

            Class.forName("com.mysql.jdbc.Driver").newInstance();

        } catch (Exception ex) {

            ex.printStackTrace();
        }
        
    conn = DriverManager.getConnection(url, login, password);
    st = conn.createStatement();

    return st;
    }

}
