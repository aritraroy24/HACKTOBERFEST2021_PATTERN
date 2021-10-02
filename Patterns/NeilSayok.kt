/*
Program to create Boxed Cross

Inputs:
1: Box size
2: Character Make the box with

*/

fun main(args: Array<String>) {
   	println("Input the size of the box.")
  	val sizeInp = readLine()!!.toInt()
    println("Input the size of the box.")
   	val charInp = readLine()!!
    
    //print("$sizeInp $charInp")
    
    for (i in 0 until sizeInp){
        for(j in 0 until sizeInp){
            if(i==j || i+j == sizeInp-1 || i == 0 || j == 0 || i==sizeInp-1 || j == sizeInp-1){
                    print(charInp)
            }else{
                print(" ")
            }
            
            
        }
        println()
    }
}