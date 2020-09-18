package paq1;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


@WebServlet(name = "Controlador1", urlPatterns = {"/Controlador1"})
public class Controlador1 extends HttpServlet {


    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        HttpSession s2 = request.getSession();
        s2.setMaxInactiveInterval(0);  //Finalizar Sesión
        response.sendRedirect("index.html");
        
    }



    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        
        String nuser = request.getParameter("nomuser");
        String puser = request.getParameter("passuser");
        
        if(nuser.equals("admin") && puser.equals("unach"))
        {
            HttpSession session = request.getSession();
            session.setAttribute("logincontrol","OK"); //ya valide que es un  usuario correcto
            session.setAttribute("Datonuevo", "LSC2020"); //insertar dentro de la Cookie
            response.sendRedirect("vista.jsp");
        }
        else{
            response.sendRedirect("index.html");
        }
        
        
    }



    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
