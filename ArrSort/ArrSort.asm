// Sorts the array of length R2 whose first element is at RAM[R1] in ascending order in place. Sets R0 to True (-1) when complete.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@0
M=0
@2
D=M
@DONE
D;LE
@1
D=M
@R8
M=D
@2
D=M
D=D-1
@R9
M=D
@R3
M=0

(OUTER)
  @R9
  D=M
  @R3
  D=D-M
  @DONE
  D;LE

  @R8
  D=M
  @R5
  M=D
  @R3
  D=M
  @R5
  M=M+D
  @R4
  M=0

  (INNER)
    @R4
    D=M
    @R9
    D=M-D
    @INNER_END
    D;JEQ

    @R5
    A=M
    D=M
    @R6
    M=D
    @R5
    M=M+1
    @R5
    A=M
    D=M
    @R7
    M=D

    @R7
    D=M
    @R6
    D=D-M
    @NOSWAP
    D;JGE

    @R7
    D=M
    @R5
    A=M
    M=D
    @R6
    D=M
    @R5
    M=M-1
    @R5
    A=M
    M=D
    @R5
    M=M+1

    (NOSWAP)
    @R4
    M=M+1
    @INNER
    0;JMP

  (INNER_END)
  @R3
  M=M+1
  @OUTER
  0;JMP

(DONE)
@0
M=-1
