// Sorts the array of length R2 whose first element is at RAM[R1] in ascending order in place. Sets R0 to True (-1) when complete.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

//Bubble sorted

@0
M=0
@2
D=M
@END
D;LE
@R3
M=0

(OUTER)
@R3
D=M
@2
D=D-M
@END
D=1+D
@END
D;JGE
@R4
M=0

(INNER)
@R4
D=M
@2
D=D-M
@R3
D=D+M
@INNER_END
D=1+D
@INNER_END
D;JGE

@R4
D=M
@1
A=M
A=A+D
D=A
@R5
M=D

@R5
D=M
@R6
M=D+1

@R5
A=M
D=M

@R6
A=M
D=D-M

@NO_SWAP
D;JLE

@R5
A=M
D=M
@R6
A=M
D=D+M
M=D-M
D=D-M
@R5
A=M
M=D

(NO_SWAP)
@R4
M=M+1
@INNER
0;JMP

(INNER_END)
@R3
M=M+1
@OUTER
0;JMP

(END)
@0
M=-1       // R0 = true