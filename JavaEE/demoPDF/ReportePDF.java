package paq1;

import com.itextpdf.text.BaseColor;
import com.itextpdf.text.Document;
import com.itextpdf.text.DocumentException;
import com.itextpdf.text.Element;
import com.itextpdf.text.Font;
import com.itextpdf.text.Font.FontFamily;
import com.itextpdf.text.Image;
import com.itextpdf.text.PageSize;
import com.itextpdf.text.Paragraph;
import com.itextpdf.text.Phrase;
import com.itextpdf.text.pdf.PdfContentByte;
import com.itextpdf.text.pdf.PdfPCell;
import com.itextpdf.text.pdf.PdfPTable;
import com.itextpdf.text.pdf.PdfWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet(name = "ReportePDF", urlPatterns = {"/ReportePDF"})
public class ReportePDF extends HttpServlet {

    
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }


    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        try {
            response.setContentType("application/pdf");
            OutputStream out = response.getOutputStream();
            Document doc = new Document(PageSize.LETTER);
            PdfWriter.getInstance(doc, out);

            doc.open();           

            Image companyLogo = Image.getInstance("C:\\Users\\chris\\Documents\\NetBeansProjects\\Wapp8u\\web\\img\\CompanyBlue.png");
            companyLogo.setAbsolutePosition(15, 740);
            companyLogo.scalePercent(30);
            doc.add(companyLogo);
            
            Font fuente = new Font();
            fuente.setStyle(Font.BOLD | Font.UNDERLINE);
            fuente.setColor(BaseColor.BLUE);
            fuente.setFamily(FontFamily.COURIER.toString());
            fuente.setSize(15);

            Font fuente2 = new Font();
            fuente2.setStyle(Font.BOLD | Font.UNDERLINE);
            fuente2.setColor(BaseColor.BLUE);
            fuente2.setFamily(FontFamily.COURIER.toString());
            fuente2.setSize(18);

            Paragraph parrafo = new Paragraph("Factura de viaje", fuente2);
            parrafo.setAlignment(Element.ALIGN_CENTER);
            doc.add(parrafo);
            
            Paragraph parrafo3 = new Paragraph("Autobuses ADO");
            parrafo3.setAlignment(Element.ALIGN_CENTER);
            doc.add(parrafo3);
            
            Paragraph parrafo4 = new Paragraph("16/Mayo/2019");
            parrafo4.setAlignment(Element.ALIGN_CENTER);
            doc.add(parrafo4);

            
            //tabla empleador
            PdfPTable table1 = new PdfPTable(2);
            table1.setTotalWidth(new float[]{220, 220});            
            table1.setSpacingBefore(50);
            table1.setLockedWidth(true);
            table1.setHorizontalAlignment(Element.ALIGN_LEFT);

            PdfPCell cell;

            cell = new PdfPCell(new Phrase("Datos"));
            cell.setColspan(1);
            cell.setHorizontalAlignment(Element.ALIGN_CENTER);
            cell.setBackgroundColor(BaseColor.GREEN);
            cell.setBorder(0);
            table1.addCell(cell);
            table1.getDefaultCell().setBorder(0);
            table1.getDefaultCell().setHorizontalAlignment(Element.ALIGN_CENTER);

            cell = new PdfPCell(new Phrase("Detalles"));
            cell.setColspan(1);
            cell.setHorizontalAlignment(Element.ALIGN_CENTER);
            cell.setBackgroundColor(BaseColor.RED);
            cell.setBorder(0);
            table1.addCell(cell);
            table1.getDefaultCell().setBorder(0);
            table1.getDefaultCell().setHorizontalAlignment(Element.ALIGN_CENTER);

            table1.addCell("Folio: ");
            table1.addCell("A-3457");
            
            table1.addCell("Asiento:");
            table1.addCell("5");
            
            table1.addCell("Nombre:");
            table1.addCell("Juan Ramirez Morales");
            
            table1.addCell("Nacionalidad:");
            table1.addCell("Mexicana");
            
            table1.addCell("Coreo:");
            table1.addCell("juanram@gmail.com");

            doc.add(table1);
            
            
            Paragraph parrafoFinal = new Paragraph("El total de la Factura es: ");
            parrafoFinal.setAlignment(Element.ALIGN_CENTER);
            doc.add(parrafoFinal);
            
            doc.close();
                   
        } catch (DocumentException ex) {
            Logger.getLogger(ReportePDF.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

   
    @Override
    public String getServletInfo() {
        return "Short description";
    }

}
