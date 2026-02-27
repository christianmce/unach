import SwiftUI

struct ContentView: View {
    
    var body: some View {
        NavigationView {
            
            VStack(spacing: 0) {
                
                // Tarjeta bancaria
                VStack(alignment: .leading, spacing: 8) {
                    
                    Text("SÚPER NÓMINA")
                        .font(.caption)
                        .foregroundColor(.white.opacity(0.9))
                    
                    Text("Dinero disponible en MXN")
                        .font(.caption2)
                        .foregroundColor(.white.opacity(0.9))
                    
                    Text("$ 153.88")
                        .font(.largeTitle)
                        .bold()
                        .foregroundColor(.white)
                    
                    HStack {
                        Text("CTA 56**8907")
                            .font(.caption)
                            .foregroundColor(.white.opacity(0.9))
                        
                        Spacer()
                        
                        Image(systemName: "creditcard.fill")
                            .foregroundColor(.white)
                    }
                }
                .padding()
                .background(Color.red)
                .cornerRadius(12)
                .padding()
                
                
                Text("Toca la tarjeta para ver su información")
                    .font(.footnote)
                    .foregroundColor(.gray)
                    .padding(.bottom, 5)
                
                
                // Lista de opciones
                List {
                    
                    Label("Prender o apagar tarjeta", systemImage: "power")
                    
                    Label("Tarjeta digital", systemImage: "iphone")
                    
                    Label("Movimientos", systemImage: "list.bullet.rectangle")
                    
                    Label("Realizar transferencia", systemImage: "arrow.left.arrow.right")
                    
                    Label("Realizar pago", systemImage: "dollarsign.circle")
                    
                    Label("Retiro sin tarjeta", systemImage: "banknote")
                    
                    Label("Generación de NIP", systemImage: "lock")
                }
                .listStyle(InsetGroupedListStyle())
            }
            .navigationTitle("Cuentas en pesos")
        }
    }
}


#Preview {
    ContentView()
}
