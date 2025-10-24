struct RoundedRectangleView: View {
    @State private var cornerRadius: Double = 25.0

    var body: some View {
        VStack {
            Text("Corner Radius: \(Int(cornerRadius))")
            RoundedRectangle(cornerRadius: cornerRadius)
                .fill(Color.green)
                .frame(width: 150, height: 150)
            Stepper("Change Corner Radius", value: $cornerRadius, in: 0...75)
                .padding()
        }
    }
}

// ---------------------------------------------------------------------------------------------

import SwiftUI

struct StepperShapeView: View {
    // 1. Create an @State property to hold the stepper's value.
    // The initial value of 50 will be the circle's starting size.
    @State private var circleSize: Double = 50

    var body: some View {
        VStack(spacing: 40) {
            // 2. Display the current value from the state variable.
            Text("Circle Size: \(Int(circleSize))")
                .font(.title2)
                .bold()

            // 3. Create the Shape view and use the state variable to set its dimensions.
            Circle()
                .fill(Color.blue)
                .frame(width: circleSize, height: circleSize)
            
            // 4. Create the Stepper and bind its value to the state variable.
            //    - The `value:` parameter binds to the `circleSize` variable using `$`.
            //    - The `in:` parameter sets the minimum and maximum value for the stepper.
            Stepper("Adjust Size", value: $circleSize, in: 20...200, step: 5)
                .padding()
        }
        .padding()
    }
}

// How to use this in a SwiftUI Preview
#Preview {
    StepperShapeView()
}
