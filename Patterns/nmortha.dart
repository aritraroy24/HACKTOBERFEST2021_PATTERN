import 'dart:io';
void main(){
    int rows = 6;
    for(int i = 0 ; i< rows; i++)
    {
        for(int j = 0; j<=i;j++)
        {
            stdout.write('* ');
        }
        stdout.writeln();
    }
}