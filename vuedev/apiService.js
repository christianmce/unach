//-------------------------------- Dentro del directorio /service crear un archivo denominado apiService.js ------------------------------

import axios from "axios";

const apiDatosEmpleado = {	
	async readDatosEmpleado(idEmp) {           
		const response = await axios.get("http://dummy.restapiexample.com/api/v1/employee/"+idEmp);  
		response.message
		return response.data;        
	},
	async readTodos() {           
		const response = await axios.get("http://dummy.restapiexample.com/api/v1/employees");  
		return response.data;        
	},
	async readAcciones() {           
		const response = await axios.get("https://eodhistoricaldata.com/api/eod/MCD.US?from=2017-01-05&to=2017-02-05&period=d&fmt=json&api_token=OeAFFmMliFG5orCUuwAKQ8l4WWFQ67YX");  
		return response.data;        
	}
};

export default apiDatosEmpleado;


//-------------------------------------------------- LLamar a la libreria AXIOS desde el la vista componente --------------------------
// Dentro del apartado <script> de la vista:

import apiDatosEmpleado from '@/service/apiService';

      getDatosTodos: async function() {   //Leer datos desde el API REST
				const data = await apiDatosEmpleado.readTodos();
				this.datosTodos = data;
			},
			getDatosEmpleado: async function(idE) {   //Leer datos desde el API REST
				const data = await apiDatosEmpleado.readDatosEmpleado(idE);
				this.datosRespuesta = data;

				this.datosEmpleado={	
					idEmp: this.datosRespuesta.data.id,					
					nombre: this.datosRespuesta.data.employee_name,
					salario: this.datosRespuesta.data.employee_salary,
					edad: this.datosRespuesta.data.employee_age
				} 
			},
			consultarIdEmpleado(){
				this.getDatosEmpleado(this.datosEmpleado.idEmp); //Consultar 1 Empleado				
			}
