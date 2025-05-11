// This file is based on part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: Mult.asm

// Multiplies R1 and R2 and stores the result in R0.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@0
M=0
@1
D=M
@R3
M=D
@R4
M=0
@R3
D=M
@R4
D;JGE
@R3
M=-M
@R4
M=1
@2
D=M
@R5
M=D
@R6
M=0
@R5
D=M
@R6
D;JGE
@R5
M=-M
@R6
M=1
@R5
D=M
@END
D;JEQ
@R7
M=0
(LOOP)
@R7
D=M
@R5
D=D-M
@END
D;JEQ
@R3
D=M
@0
M=M+D
@R7
M=M+1
@LOOP
0;JMP
(END)
@R4
D=M
@R6
D=D-M
@POSITIVE
D;JEQ
@0
M=-M
(POSITIVE)
