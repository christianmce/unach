package paq2;

import java.util.ArrayList;
import javax.jws.WebService;
import javax.jws.WebMethod;
import javax.jws.WebParam;
import paq1.Persona;

/**
 *
 * @author Mtro. Christian Mauricio Castillo Estrada
 * Facultad de Negocios CIV UNACH
 */
@WebService(serviceName = "WSEmpresa")
public class WSEmpresa {

    /**
     * This is a sample web service operation
     */
    @WebMethod(operationName = "hello")
    public String hello(@WebParam(name = "name") String txt) {
        return "Hello " + txt + " !";
    }

    /**
     * Web service operation
     */
    @WebMethod(operationName = "suma")
    public Integer suma(@WebParam(name = "num1") int num1, @WebParam(name = "num2") int num2) {
        int res = num1 + num2;
        return res;
    }

    /**
     * Web service operation
     */
    @WebMethod(operationName = "ConsultaPersona")
    public Persona ConsultaPersona(@WebParam(name = "nombre") String nombre, @WebParam(name = "apellidos") String apellidos, @WebParam(name = "edad") String edad) {
        
        Persona obj = new Persona();
        obj.setNombre(nombre);
        obj.setApellidos(apellidos);
        obj.setEdad(edad);
        
        return obj;
    }

    /**
     * Web service operation
     */
    @WebMethod(operationName = "ConsultaTodos")
    public ArrayList<Persona> ConsultaTodos() {
        
        Persona obj = new Persona();
        obj.setNombre("Objeto1");
        obj.setApellidos("apellidosx..");
        obj.setEdad("37");
        
        Persona obj2 = new Persona();
        obj2.setNombre("Objeto2");
        obj2.setApellidos("apellidosx..");
        obj2.setEdad("42");
        
        Persona obj3 = new Persona();
        obj3.setNombre("Objeto3");
        obj3.setApellidos("apellidosx..");
        obj3.setEdad("18");
        
        ArrayList<Persona> lista = new ArrayList<Persona>();
        lista.add(obj);
        lista.add(obj2);
        lista.add(obj3);
        
        return lista;
    }
}
