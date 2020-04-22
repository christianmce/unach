package paq1;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.OutputKeys;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Text;


@WebServlet(name="ServCatalogoXML", urlPatterns={"/ServCatalogoXML"})
public class ServCatalogoXML extends HttpServlet {
   

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException, ParserConfigurationException, Exception {     
        
    }



    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {

    } 


    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {
        try {

              DocumentBuilderFactory builderFactory = DocumentBuilderFactory.newInstance();
              DocumentBuilder docBuilder = builderFactory.newDocumentBuilder();        

              Document doc = docBuilder.newDocument();
              new ServCatalogoXML().GenerarCatalogoXmlTree(doc);       
            
        } finally { 
            
        }
    }


    @Override
    public String getServletInfo() {
        return "Short description";
    }


    public void GenerarCatalogoXmlTree(Document doc) throws Exception {

        Statement st;
        ResultSet res;
        Conexion con = new Conexion();
        
        try {
          st = con.contectaDB();
          String sql ="SELECT idProducto,descripcion FROM producto ORDER BY idProducto";
          res = st.executeQuery(sql);

          Element catalogo = doc.createElement("Catalogo");
          doc.appendChild(catalogo);

          while(res.next()){       

              Element productos = doc.createElement("Producto");
              catalogo.appendChild(productos);

              Element e1 = doc.createElement("idProducto");
              Text text = doc.createTextNode(res.getString(1));
              e1.appendChild(text);
              productos.appendChild(e1);

              Element e2 = doc.createElement("Clave");        
              Text text1 = doc.createTextNode(res.getString(2));
              e2.appendChild(text1);
              productos.appendChild(e2);     
        }
        

        } catch (Exception ex) {

        }

     
        TransformerFactory factory = TransformerFactory.newInstance();
        Transformer transformer = factory.newTransformer();
        transformer.setOutputProperty(OutputKeys.INDENT, "yes");

        
        StringWriter sw = new StringWriter();
        StreamResult result = new StreamResult(sw);
        DOMSource source = new DOMSource(doc);
        transformer.transform(source, result);
        String xmlString = sw.toString();

        File file = new File("C:/UNACH/catalogoXML.xml");
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(file)));
        bw.write(xmlString);
        bw.flush();
        bw.close();

    }

}
