<Dialog v-model:visible="deleteGradosAcadDialog" :style="{width: '450px'}" header="Confirma eliminación" :modal="true">
					<div class="confirmation-content">
						<i class="pi pi-exclamation-triangle p-mr-3" style="font-size: 2rem" />
						<span>¿ Deseas eliminar el registro seleccionado ?</span>
					</div>
					<template #footer>
						<Button label="No" icon="pi pi-times" class="p-button-text" @click="deleteGradosAcadDialog = false"/>
						<Button label="Yes" icon="pi pi-check" class="p-button-text" @click="deleteGradosAcad" />
					</template>
			</Dialog>
      
      
      <Dialog v-model:visible="gradosacadDialog" :style="{width: '470px'}" header="Registrar Grado Académico" :modal="true" class="p-fluid">
					<div class="p-field">
						<label for="name">Nombre del Grado Académico:</label>
						<InputText id="nom" v-model="gradosItem.nomGrado" required="true" autofocus :class="{'p-invalid': submitted && validarErrores.nomGrado}" />
						<small class="p-error" v-show="submitted && validarErrores.nomGrado">El nombre del Grado Académico es requerido.</small>
					</div>					
					<div class="p-field">
						<label for="name">Institución:</label>
						<InputText id="tiempo"  v-model="gradosItem.institucion" required="true" :class="{'p-invalid': submitted && validarErrores.institucion}"/>
						<small class="p-error" v-show="submitted && validarErrores.institucion">El nombre de la Institución es requerido.</small>
					</div>
					<div class="p-field">
						<label for="name">Periodo cursado:</label>
						<InputText id="nom" v-model="gradosItem.periodoCursado" required="true" :class="{'p-invalid': submitted && validarErrores.periodoCursado}" />
						<small class="p-error" v-show="submitted && validarErrores.periodoCursado">El periodo cursado es requerido.</small>
					</div>
					<div class="p-field">
						<label for="name">Año Titulación:</label>
						<InputText id="tiempo"  v-model="gradosItem.aTitula" required="true" integeronly :class="{'p-invalid': submitted && validarErrores.atitulacion}"/>
						<small class="p-error" v-show="submitted && validarErrores.atitulacion">El año de Titulación es requerido.</small>
					</div>
					<template #footer>
						<Button label="Cancelar" icon="pi pi-times" class="p-button-danger" @click="hideDialog"/>
						<Button label="Guardar " icon="pi pi-check" class="p-button-primary" @click="saveGradosAcad" />
					</template>
			</Dialog>
      
      <--------------- Script ---------------->      
      
      //Declarar la variable de la ventana de dialogo
     gradosacadDialog: false,
     
     //Para activar la ventana es necesario asignar el valor de true
     this.gradosacadDialog = true;	
      
