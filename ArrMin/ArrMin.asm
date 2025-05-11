// Finds the smallest element in the array of length R2 whose first element is at RAM[R1] and stores the result in R0.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@2
D=M
@END
D;JEQ
@1
D=M
@R3
M=D
@R3
A=M
D=M
@0
M=D
@R2
D=M
@R4
M=D
@R4
M=M-1

(LOOP)
@R4
D=M
@END
D;LT

@R3
M=M+1

A=M
D=M
@0
D=D-M
@SKIP
D;JGE

@R3
A=M
D=M
@0
M=D

(SKIP)
@R4
M=M-1
@LOOP
0;JMP

(END)