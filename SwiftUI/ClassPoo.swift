class Person {
    var name: String
    var age: Int

    init(name: String, age: Int) {
        self.name = name
        self.age = age
    }
}

let person = Person(name: "John", age: 30)


class Student: Person {
    var studentID: String

    init(name: String, age: Int, studentID: String) {
        self.studentID = studentID
        super.init(name: name, age: age)
    }

    func study() {
        print("\(name) is studying.")
    }
}

let student = Student(name: "Alice", age: 20, studentID: "S12345")
student.study() // Output: Alice is studying.


final class FinalClass {
    // ...
}
