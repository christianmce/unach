<%
    response.setHeader("Cache-Control","no-cache"); //Forces caches to obtain a new copy of the page from the origin server
    response.setHeader("Cache-Control","no-store"); //Directs caches not to store the page under any circumstance <--- Esto es lo importante
    response.setDateHeader("Expires", 0); //Causes the proxy cache to see the page as "stale"
    response.setHeader("Pragma","no-cache"); //HTTP 1.0 backward compatibility

            HttpSession s1 = request.getSession();
            if(s1.getAttribute("logincontrol")==null){
                response.sendRedirect("index.html");
            }
%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Componente VISTA</title>
    </head>
    <body>
        <%
            out.println("BIENVENIDO AL MENU PRINCIPAL");
            out.println("<br> <br>");
            out.println("<b>El ID de sesión asignado por el Server es</b>: " + s1.getId() );
            out.println("<br> <b>El valor nuevo es</b>: " + s1.getAttribute("Datonuevo") );
            out.println("<br> <br>");
            out.println("<a href='Controlador1'> Cerrar Sesión </a>");
            
        %>
    </body>
</html>
