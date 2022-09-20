https://primefaces.org/primevue/datatable/crud

<template>
	<div class="p-grid">
		<div class="p-col-12">
			<div class="card">
			<Panel header="PUNTO DE VENTA (POS)" style="height: 100%">
				<Toolbar class="p-mb-4">
				<template v-slot:start>
					<InputText type="text" size="40" placeholder="Nombre del producto..." v-model="productoItem.nomProducto"/>
					<InputText type="text" placeholder="Cant" v-model="productoItem.cantidad"/>
					<InputText type="text" placeholder="$ Precio U." v-model="productoItem.precioUnitario"/>										
				</template>
				<template v-slot:end>
					<Button label="Registrar" icon="pi pi-plus" class="p-button-success p-mr-2" @click="registrarCompra" />	
				</template>
				</Toolbar>
				<br>

				<DataTable :value="tablaCompras" v-model:selection="productoItem" class="p-datatable-gridlines" dataKey="cns" :rows="5" 
				paginatorTemplate="FirstPageLink PrevPageLink PageLinks NextPageLink LastPageLink CurrentPageReport RowsPerPageDropdown"
				:rowsPerPageOptions="[5,10,25]"
				currentPageReportTemplate="Visualizando {last} de {totalRecords} productos"
				style="margin-bottom: 20px" :paginator="true" responsiveLayout="scroll">				
			
				<Column field="cns" header="Cns" :sortable="true" style="width:50px"></Column>
				<Column field="nomProducto" header="Nombre del Producto" style="width:370px"></Column>				
				<Column field="precioUnitario" header="Precio U." dataType="numeric" style="width:80px">
					<template #body="slotProps">
                            {{ formatoMoneda(slotProps.data.precioUnitario) }}
                    </template>
				</Column>
				<Column field="cantidad" header="Cant." style="width:60px;text-align:center"></Column>
				<Column field="precioParcial" header="Precio P." style="width:80px">
					<template #body="slotProps">
                            {{ formatoMoneda(slotProps.data.precioParcial) }}
                    </template></Column>
				<Column style="width:140px">
					<template #header>
						Acciones
					</template>
					<template #body="slotProps">
                        <Button icon="pi pi-pencil" type="button" class="p-button-success p-mr-2 p-mb-1" @click="editarProductos(slotProps.data)"></Button>
                        <Button icon="pi pi-trash" type="button" class="p-button-danger p-mb-1" @click="confirmaEliminarProductos(slotProps.data)"></Button>
					</template>
				</Column>
			</DataTable>

			<br>
				<Toolbar class="p-mb-4">
				<template v-slot:start>
								
				</template>
				<template v-slot:end>
					<label for="total">Total: </label>
					<InputText type="text" placeholder="$ " v-model="totalCompra"/>	
				</template>
				</Toolbar>
			</Panel>

			<Toast/>
			</div>	
		</div>
	</div>
</template>

<script>
export default {
    data() {
        return {                			
					tablaCompras: [
					{"cns": 1, "nomProducto": "Impresora LaserJet Color", "cantidad": 2, "precioUnitario": 5200.00, "precioParcial": 10400.00},
					{"cns": 2, "nomProducto": "Monitor LED 31 plg.", "cantidad": 3, "precioUnitario": 1700.00, "precioParcial": 5100.00}
					],
					productoItem: {
						cns: null,
						nomProducto: null,
						cantidad:null,
						precioUnintario:null,
						precioParcial:null
					}
			}
		},
		created() {
			
		},		
		methods: {
			formatoMoneda(value) {
			if(value)
					return value.toLocaleString('en-US', {style: 'currency', currency: 'USD'});
				return;
			},	
			registrarCompra(){				
				
				this.tablaCompras.push(this.productoItem);
				this.$toast.add({severity:'success', summary: 'Confirmación', detail: 'Nueva compra registrada', life: 3000});
			},		
			editarProductos() {				
							
			},
			confirmaEliminarProductos() {
						
			}

        }    
}
</script>
