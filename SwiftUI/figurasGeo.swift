// A custom shape that draws a polygon with a variable number of sides
struct PolygonShape: Shape {
    var sides: Int

    func path(in rect: CGRect) -> Path {
        var path = Path()
        let center = CGPoint(x: rect.midX, y: rect.midY)
        let radius = min(rect.width, rect.height) / 2
        
        path.move(to: CGPoint(x: center.x + radius, y: center.y))
        for i in 1..<sides {
            let angle = Double(i) * (2 * .pi / Double(sides))
            let x = center.x + radius * cos(angle)
            let y = center.y + radius * sin(angle)
            path.addLine(to: CGPoint(x: x, y: y))
        }
        path.closeSubpath()
        return path
    }
}


// A view that uses the custom shape and a Stepper ------------------------------------------

struct PolygonStepperView: View {
    @State private var sides: Double = 3.0

    var body: some View {
        VStack {
            Text("Sides: \(Int(sides))")
            PolygonShape(sides: Int(sides))
                .stroke(Color.red, lineWidth: 5)
                .frame(width: 200, height: 200)
            Stepper("Number of Sides", value: $sides, in: 3...12)
                .padding()
        }
    }
}

// -------------------------------------------------------------------------------------------

