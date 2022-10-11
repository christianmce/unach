<template>

<div class="col-12">
			<div class="card">
				<h5>Lista de Empleados</h5>
				<DataTable :value="datosTodos.data" sortMode="single" class="p-datatable-gridlines" rows="7" :paginator="true" responsiveLayout="scroll">
                    <Column field="employee_name" header="Nombre del Empleado"></Column>
                    <Column field="employee_salary" header="Salario" style="min-width:200px"></Column>                    
                    <Column field="employee_age" header="Edad" style="min-width:200px"></Column>
                </DataTable>
			</div>
</div>

</template>

<script>
import apiDatosEmpleado from '@/service/EmpleadoService';

	export default {
		data() {
			return {
				datosRespuesta:[],
				datosTodos:[],
				datosEmpleado: {
					idEmp:'',
					nombre: '',        
					salario: '',
					edad: ''
				}
			}
		},
		created() {
			
		},
		mounted() {												
			this.getDatosTodos();
		},		
		methods: {				
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
		}
	}
</script>
