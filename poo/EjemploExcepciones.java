import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;


class MatriculaRegistradaMyException extends Exception {

    public MatriculaRegistradaMyException(String message) {
        super(message);
    }
}

class EstudiantesRegistrados {
    List<String> listaEstudiantes = Arrays.asList("B101112", "B101114", "B101117", "B101119");

    public void validarMatricula(String Mat) throws MatriculaRegistradaMyException {
        if (listaEstudiantes.contains(Mat)) {
            throw new MatriculaRegistradaMyException("La matricula ingresada ya se encuentra registrada en la convocatoria");
        }
    }
}

class Triangulo {
    private int base;
    private int altura;

    public Triangulo() {

    }

    public Triangulo(int base, int altura){
        this.base = base;
        this.altura = altura;
    }

    public int getBase() {
        return base;
    }

    public void setBase(int base) {
        this.base = base;
    }

    public int getAltura() {
        return altura;
    }

    public void setAltura(int altura) {
        this.altura = altura;
    }
}

public class Main {
    public static void main(String[] args) {

//******* 1er Caso .- Excepciones personalizadas
        int i,maxnum=0;
        int[] numeros = { 23, 46, 520, 8, 17 };

        for(i=0; i<=6; i++)
        {
            try {
                System.out.println(numeros[i]);
                if(numeros[i]>maxnum){
                    maxnum = numeros[i];
                }
            }
            catch(ArrayIndexOutOfBoundsException exception) {
                System.out.println("Error al acceder a la posición de los números");
            }

        }

        System.out.println("El número mayor es: " +maxnum);

//******* 2 Caso .- Excepciones personalizadas
        Triangulo o1 = new Triangulo(5,3);
        Triangulo o2 = new Triangulo(7,4);
        ArrayList<Triangulo> pilaobjetos = new ArrayList<Triangulo>();
        pilaobjetos.add(o1);
        pilaobjetos.add(o2);


        try {
            Triangulo aux = pilaobjetos.get(4);
            System.out.println("El valor de la base del triangulo es:" + aux.getBase());
        }catch(IndexOutOfBoundsException e) {
            System.out.println("Error al acceder a la posición de los números");
        }



//******* 3 Caso .- Excepciones personalizadas

        EstudiantesRegistrados validaciones = new EstudiantesRegistrados();
        try {
            validaciones.validarMatricula("B101117");
        } catch (MatriculaRegistradaMyException e) {
            System.out.println(e.getMessage());
        }

    }
}
