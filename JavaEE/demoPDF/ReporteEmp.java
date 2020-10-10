package paq1;
import com.itextpdf.text.Document;
import com.itextpdf.text.DocumentException;
import com.itextpdf.text.Image;
import com.itextpdf.text.PageSize;
import com.itextpdf.text.pdf.BaseFont;
import com.itextpdf.text.pdf.PdfContentByte;
import com.itextpdf.text.pdf.PdfWriter;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet(name = "ReporteEmp", urlPatterns = {"/ReporteEmp"})
public class ReporteEmp extends HttpServlet {
   
   
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
       
    response.setContentType("application/pdf");
    Document documento = new Document(PageSize.LETTER);
    try {
   
    PdfWriter writer = PdfWriter.getInstance(documento,response.getOutputStream());
   
    documento.open();
        Image logoad = Image.getInstance("C:\\Users\\chris\\Documents\\NetBeansProjects\\Wapp8u\\web\\img\\CompanyBlue.png");
                 PdfContentByte clave = writer.getDirectContent();
                    clave.saveState();
                    BaseFont bf = BaseFont.createFont(BaseFont.HELVETICA_BOLD, BaseFont.CP1257,BaseFont.EMBEDDED);
                    BaseFont bn = BaseFont.createFont();
                    clave.beginText();
                    clave.setFontAndSize(bf, 10);
                    clave.setTextMatrix((float)1, (float)0, (float) 0,1, 180, 655);
                    clave.showText("Clave:");
                    clave.endText();
                    clave.restoreState();
                    
                PdfContentByte curp = writer.getDirectContent();
                    curp.saveState();
                    curp.beginText();
                    curp.setFontAndSize(bf, 15);
                    curp.setTextMatrix((float)1, (float)0, (float) 0,1, 178, 639);
                    curp.showText("CRTYRU6575785");
                    curp.endText();
                    curp.restoreState();
                    
        
        logoad.setAbsolutePosition(23,475); 
        logoad.scaleAbsoluteWidth(125f);
        logoad.scaleAbsoluteHeight(120f);
        documento.add(logoad);
        documento.close();

        } catch (DocumentException ex) {
                
        }
        
    }

   
    @Override
    public String getServletInfo() {
        return "Short description";
    }

}
