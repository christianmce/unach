$(document).ready(function(){

    $('#btnInsertar').click(function(){
	
             
       vIdS = $("#idserv").val();        
       vNombre = $("#nomserv").val();
       vPrecio = $("#precioserv").val();

            $.ajax({
            type: "POST",
            url: "insertar.php",  //destino php backend
            data: "Ids="+ vIdS+"&Nomserv="+vNombre+"&Precio="+vPrecio,
            success: function(res){                    
                
                if(res){	
                    //$("#box_mensaje1").show();
                            $("#idserv").val("");        
                            $("#nomserv").val("");
                            $("#precioserv").val("");     
                }
                else{			
                   // $("#box_error1").show();	
                }	
            },
            beforeSend:function()
            {
                
            }
    
            });
            return false;
      });
    
    
    });
