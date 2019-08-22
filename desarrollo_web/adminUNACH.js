$( document ).ready(function(){
    $("#box_error1").hide();
    $("#box_mensaje1").hide();

  /*********************************************************
  Registrar nuevo Cliente
  ********************************************************* */
  
  $('#btnCliente').click(function(){
	
	if ( $("#txtidcliente").val().length < 1 || $("#txtnombre").val().length < 1){
		$("#box_error1").show();
		$("#txtidcliente").focus();		
		return false;
	}
	
        vIdC = $("#txtidcliente").val();        
	vNombre = $("#txtnombre").val();
        vApe = $("#txtapellidos").val();
	vEmail = $("#txtemail").val();
	vDireccion = $("#txtdireccion").val();
        vRfc = $("#txtrfc").val();
	
		$.ajax({
		type: "POST",
		url: "ServClientes",  //llamada al Servelt enviando los datos mediante el metodo POST
		data: "idCliente="+vIdC+"&Nombre="+vNombre+"&Apellidos="+vApe+"&Email="+vEmail+"&Direccion="+vDireccion+"&Rfc="+vRfc,
		success: function(res){    
                        
			if(res){	
				$("#box_mensaje1").show();
                                    $("#txtidcliente").val("");        
                                    $("#txtnombre").val("");
                                    $("#txtapellidos").val("");
                                    $("#txtemail").val("");
                                    $("#txtdireccion").val("");
                                    $("#txtrfc").val("");
			}
			else{			
				$("#box_error1").show();	
			}	
		},
		beforeSend:function()
		{
			
		}

		});
		return false;
  });


});
