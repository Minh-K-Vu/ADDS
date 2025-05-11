// Sorts the array of length R2 whose first element is at RAM[R1] in ascending order in place. Sets R0 to True (-1) when complete.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@0
M=0
@2
D=M
D=D-1
@DONE
D;JLE
@1
D=M
@R8
M=D
@R3
M=0
(OUTER)
  @R3
  D=M
  @2
  D=M-D
  D=D-1
  @DONE
  D;JLE

  @R3
  D=M
  @R4
  M=D

  @R3
  D=M
  D=D+1
  @R5
  M=D

  (INNER)
    @R5
    D=M
    @2
    D=M-D
    @EXIT_INNER
    D;JLE

    @1
    D=M
    @R5
    D=D+M
    @R6
    M=D

    @1
    D=M
    @R4
    D=D+M
    @R7
    M=D

    @R6
    A=M
    D=M
    @R8
    M=D

    @R7
    A=M
    D=M
    @R9
    M=D

    @R8
    D=M
    @R9
    D=D-M
    @NO_UPDATE
    D;JGE

    @R5
    D=M
    @R4
    M=D

    (NO_UPDATE)
    @R5
    M=M+1
    @INNER
    0;JMP

  (EXIT_INNER)
  @R3
  M=M+1
  @OUTER
  0;JMP

(DONE)
@0
M=-1
