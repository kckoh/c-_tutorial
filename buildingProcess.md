source code --> preprocessor
    output translation unit; .pre
    gcc -E <name of the file>
--> Compiler 
    output: assembly code; .s
    gcc -S <Name of the file>
--> Assembler
    output: object code; .o
    gcc -c <Name of the file>
-- Linker
    output: 