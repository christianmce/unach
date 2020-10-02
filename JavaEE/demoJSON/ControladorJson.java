package paq1;

import com.google.gson.Gson;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import model.Employee;


@WebServlet(name = "Controlador1", urlPatterns = {"/Controlador1"})
public class Controlador1 extends HttpServlet {

    private static final long serialVersionUID = 1L;
    private Gson gson = new Gson();
    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {        
       
    }


    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        
        Employee e1 = new Employee();
        e1.setId(17);
        e1.setEmployee_name("Vania");
        e1.setEmployee_age(25);
        e1.setEmployee_salary(new Double(4500.00));
        e1.setProfile_image("C:/fotos/empleado17.png");
        
        String salidaJson = this.gson.toJson(e1);

        /*PrintWriter out = response.getWriter();
        response.setContentType("application/json");
        response.setCharacterEncoding("UTF-8");
        out.print(salidaJson);
        out.flush();*/        
        
        request.setAttribute("salida",salidaJson);      
        RequestDispatcher ctll = getServletContext().getRequestDispatcher("/vista.jsp");
        ctll.forward(request, response);
    }


    @Override
    public String getServletInfo() {
        return "Short description";
    }

}
