using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
namespace StarPattern {
  class Program {
    static void Main(string[] args) {
      int x, y, z;
      for (x = 6; x >= 1; x--) {
        for (y = 1; y < x; y++) {
          Console.Write(" ");
        }
        for (z = 6; z >= x; z--) {
          Console.Write("*");
        }
        Console.WriteLine();
      }
      Console.ReadLine();
    }
  }
}
