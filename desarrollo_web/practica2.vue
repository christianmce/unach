<template>
  <div id="app">
    <div class="app-container">      

<Panel header="REGISTRAR CLIENTE" style="height:350px;width:500px;">            
        <div class="p-field">
						<label for="name">idCliente: </label>
						<InputText type="text" v-model="text"/>						
				</div><br>               
        <div class="p-field">
						<label for="name">Nombre: </label>
						<InputText type="text" v-model="text"/>						
				</div><br>
        <div class="p-field">
						<label for="name">Email: </label>
						<Calendar v-model="value" />
         </div><br>

         <Button label="Registrar" icon="pi pi-check" iconPos="right" @click="agregar"/>
         <Button label="Cancelar" class="p-button-danger" icon="pi pi-check" iconPos="right" />                 
</Panel>    

      <DataTable :value="listaClientes" v-model:selection="cteItem" class="p-datatable-gridlines" :rows="5" dataKey="idCTE" style="margin-bottom: 20px" :paginator="true"	responsiveLayout="scroll">		
        <Column field="idCte" header="IdCTE" :sortable="true"></Column>
				<Column field="nombreCte" header="Nombre del Cliente" :sortable="true"></Column>					
			</DataTable>

    </div>
    <Toast/>
  </div>
</template>

<script>

export default {
    data() {
        return {  
            text:null,          
            value: null,
            listaClientes: [{"idCte": "C7854", "nombreCte": "Sandra Rodriguez"},
                            {"idCte": "C7856", "nombreCte": "Gilberto Morales"}],
            cteItem: null, 
        }
    },
    methods: {
        agregar() {
				this.listaClientes.push({"idCte": "C7478", "nombreCte": "Karen Aguilar"})
			}
    }
}
</script>

<style scoped>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  color: #2c3e50;
  margin-top: 60px;
}
.app-container {
  text-align: center;
}
body #app .p-button {
  margin-left: .2em;
}
form {
  margin-top: 2em;
}
</style>



//*************************************************************************************************************************************

import DataTable from 'primevue/datatable';
import Column from 'primevue/column';
import ColumnGroup from 'primevue/columngroup';

app.component('DataTable', DataTable);
app.component('Column', Column);
app.component('ColumnGroup', ColumnGroup);
