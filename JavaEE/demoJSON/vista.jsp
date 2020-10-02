<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Componente VISTA</title>
    </head>
    <body>
        <%
               out.println("El resultado el formato JSON es: " + request.getAttribute("salida"));            
        %>
    </body>
</html>
