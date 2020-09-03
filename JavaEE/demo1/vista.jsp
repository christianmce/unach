<%-- 
    Document   : Componente VISTA
    Created on : 26/08/2020, 12:44:01 PM
    Author     : Mtro. Christian Mauricio Castillo Estrada UNACH
--%>

<%@page import="paq1.Persona"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Plantilla de Vista (Sistema)</h1>
        <br>
        <% Persona p = (Persona) request.getAttribute("persona1"); %>
<b>Nombre Completo:</b> <% out.println(p.getNombre() + " " + p.getApellidos()); %>
<br>
<b>Edad:</b> <% out.println(p.getEdad()); %>        
    </body>
</html>
