package paq1;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.transform.OutputKeys;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Text;

@WebServlet(name = "ServXML", urlPatterns = {"/ServXML"})
public class ServXML extends HttpServlet {


    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
    }


    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        try {

        DocumentBuilderFactory builderFactory = DocumentBuilderFactory.newInstance();
        DocumentBuilder docBuilder = builderFactory.newDocumentBuilder();
        //creating a new instance of a DOM to build a DOM tree.

        Document doc = docBuilder.newDocument();
        new ServXML().GenerarCatalogoXmlTree(doc);      
            
        
            
        } catch (Exception ex) {
            Logger.getLogger(ServXML.class.getName()).log(Level.SEVERE, null, ex);
        }
    }


    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
    }


    @Override
    public String getServletInfo() {
        return "Short description";
    }
    
    
    public void GenerarCatalogoXmlTree(Document doc) throws Exception {


        Element catalogo = doc.createElement("Catalogo");
        doc.appendChild(catalogo);
              

        Element productos = doc.createElement("Producto");
        catalogo.appendChild(productos);

        Element e1 = doc.createElement("idProducto");
        Text text = doc.createTextNode("A575");
        e1.appendChild(text);
        productos.appendChild(e1);

        Element e2 = doc.createElement("Descrip");        
        Text text1 = doc.createTextNode("TV A COLORES PANTALLA PLANA");
        e2.appendChild(text1);
        productos.appendChild(e2);       

     
        TransformerFactory factory = TransformerFactory.newInstance();
        Transformer transformer = factory.newTransformer();

        transformer.setOutputProperty(OutputKeys.INDENT, "yes");

        
        StringWriter sw = new StringWriter();
        StreamResult result = new StreamResult(sw);
        DOMSource source = new DOMSource(doc);
        transformer.transform(source, result);
        String xmlString = sw.toString();

        File file = new File("C:/UNACH/catalogoXML.xml");   //Ruta (Path) para almacenar el archivo.xml generado
        BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(new FileOutputStream(file)));
        bw.write(xmlString);
        bw.flush();
        bw.close();

    }

}
