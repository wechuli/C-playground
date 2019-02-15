#include <stdio.h> //The symbol # indicates this is a preprocessing directive, which is an instruction to your compiler to do something before compiling the source code.The compiler handles these directives during an initial preprocessing phase brfore the compilation process starts.
//In this case, the compiler is instucted to include in your program the contents of the file with the name stdio.h
//header files specify information that the compiler uses to intergrate any predefined dunctions or other global objects within a program
//The .c extension identifies the contents of the file as C source code
int main(void){
    printf("Hello world! How unoriginal, millions of words in English and you chose those two");
    //Lets try escaping and new lines
    printf("He said \"I need to get dinner tonight\" \n Then he walked away fast ");
    return 0;
    
}

//The program is first compiled to object code files and then the object files are linked with a linker
