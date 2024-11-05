<script>

import { useToast } from 'primevue/usetoast';
import { ref, onBeforeMount, onMounted, computed } from 'vue';

export default {
    data() {

	const toast = useToast();
        const visibleUpdate = ref(false);
        const visibleDelete = ref(false);

        const nomp = ref('');
        const cantidad = ref('');
        const precioUnitario = ref('');

        async function editarProducto(row) {
           
        }

        async function updateProducto() {
            
        }

        async function eliminarProducto(row) {
			
	}

	async function deleteProducto(row) {
			
	}

		async function registrarCompra() {
			if (
				this.productoItem.nomProducto.trim() !== '' &&
				this.productoItem.cantidad.trim() !== '' &&
				this.productoItem.precioUnitario.trim() !== ''
			) {
					this.tablaCompras.push({
					cns: this.tablaCompras.length + 1, 
					nomProducto: this.productoItem.nomProducto,
					cantidad: parseFloat(this.productoItem.cantidad), 
					precioUnitario: parseFloat(this.productoItem.precioUnitario),
					precioParcial: parseFloat(this.productoItem.cantidad) * parseFloat(this.productoItem.precioUnitario)
				});
				toast.add({ severity: 'success', summary: 'Confirmación', detail: 'Nueva compra registrada', life: 3000 });

				this.productoItem.nomProducto = '';
				this.productoItem.cantidad = '';
				this.productoItem.precioUnintario = '';
			} 
		}

        return { 
	    registrarCompra,
	    toast,      
            nomp,
            cantidad,
            precioUnitario,
            visibleDelete,
            visibleUpdate,
            editarProducto,
			deleteProducto,
            updateProducto,
            eliminarProducto,         			
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
			}
        },
		computed: {
			subtotal() {
				
			},
			iva(){
				
			},
			totalTotal(){
				
			}
		}
}
</script>


<template>
	<div class="p-grid">
		<Toast/>
		<div class="p-col-12">
			<div class="card">
			<Panel header="PUNTO DE VENTA (POS)" style="height: 100%">
				<Toolbar class="p-mb-4">
				<template v-slot:start>
					<InputText type="text" size="40" placeholder="Nombre del producto..." v-model="productoItem.nomProducto"/>
					<InputText class="ml-8" type="text" placeholder="Cant" v-model="productoItem.cantidad"/>
					<InputText class="ml-8" type="text" placeholder="$ Precio U." v-model="productoItem.precioUnitario"/>										
				</template>
				<template v-slot:end>
					<Button label="Registrar" icon="pi pi-plus" class="p-button-success p-mr-2" @click="registrarCompra()" />	
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
                        <Button icon="pi pi-pencil" type="button" class="p-button-success p-mr-2 p-mb-1" @click="editarProducto(slotProps.data)"></Button>
                        <Dialog v-model:visible="visibleUpdate" modal header="Actualizar datos de un producto" :style="{ width: '45vw' }">
                            <p>
                                <div class="flex gap-2">
                                    <div class="flex-auto">
                                        <label for="nomp"><strong>Nombre del producto: </strong></label>
                                        <InputText class="ml-2" id="nomp" v-model="nomp"/>  
                                    </div>                         
                                    <div class="flex-auto">
                                        <label for="precioUnitario"><strong>Precio Unitario: </strong></label>
                                        <InputText class="ml-2" id="precioUnitario" v-model="precioUnitario"/>
                                    </div>
                                    <div class="flex-auto">
                                        <label for="cantidad"><strong>Cantidad: </strong></label>
                                        <InputText class="ml-2" id="cantidad" v-model="cantidad"/>
                                    </div>
                                </div>
                                <br>
                            </p>
                            <template #footer>
                                <Button label="Actualizar" icon="pi pi-replay" @click="updateProducto()" />
                            </template>
                        </Dialog>
                        <Button icon="pi pi-trash" type="button" class="p-button-danger p-mb-1" @click="eliminarProducto(slotProps.data)"></Button>
                        <Dialog v-model:visible="visibleDelete" modal header="Estas seguro que quieres borrar este producto?" :style="{ width: '30vw' }">
                            <p>
                                <br>
                            </p>
                            <template #footer>
                                <Button label="Eliminar" severity="warning" icon="pi pi-check" @click="deleteProducto(slotProps.data)" autofocus />
                            </template>
                        </Dialog>
					</template>
				</Column>
			</DataTable>

			<br>
				<Toolbar class="p-mb-4">
				<template v-slot:start>
								
				</template>
				<template v-slot:end>
                    
				
				</template>
				</Toolbar>
			</Panel>
			</div>	
		</div>
	</div>
</template>
