load Mult.asm,
output-file Mult02.out,
compare-to Mult02.cmp,
output-list RAM[0] RAM[1] RAM[2];

set PC 0,
set RAM[0] 0,
set RAM[1] 2,
set RAM[2] -3;
repeat 100 {
  ticktock;
}
output;