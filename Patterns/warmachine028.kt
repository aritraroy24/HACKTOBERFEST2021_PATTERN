fun main() {
    var rows = 5
    var k = 2 * rows - 2
    for (i in 0..rows - 1) {
        for (j in 0..k - 1) print(" ")
        k -= 1
        print("*")
        for (j in 0..i * 2 - 1) print(" ")
        println("*")
    }
    k = rows - 2
    for (i in rows downTo 0) {
        for (j in k downTo 1) print(" ")
        k += 1
        print("*")
        for (j in 0..i * 2 - 1) print(" ")
        println("*")
    }
}
