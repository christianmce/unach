
public static void main(String[] args) {
     final int PAISES = 7;
     final int MEDALLAS = 3;
     String[] paises = {"Canada","China","Japon","Rusia","Espana","Ucrania","Estados Unidos" };
     int[][] cuentas = { { 0, 0, 1 },{ 0, 1, 1}, { 1, 0, 0 }, { 3, 0, 1 }, { 0, 1, 0 }, { 0,0, 1 }, { 0, 2, 0 }};
     System.out.println(" Pais Oro Plata Bronce Total");

     for (int i = 0; i < PAISES; i++) {
          System.out.printf("%15s", paises[i]);
          int total = 0;
          for (int j = 0; j < MEDALLAS; j++) {
               System.out.printf("%8d",cuentas[i][j]);               
               total = total + cuentas[i][j];
          }
          System.out.printf("%8d\n", total);
     }
}


//ArrayList de Objetos <Object> 
    ArrayList<String> lista = new ArrayList<>();
    lista.add("MEXICO");
    lista.add("CANADA");
    lista.add("ITALIA");
    
    for (int i=0;i<lista.size();i++) {      
      System.out.println(lista.get(i));
    }


              
