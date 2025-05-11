load Mult.asm,
output-file Mult04.out,
compare-to Mult04.cmp,
output-list RAM[0] RAM[1] RAM[2];

set PC 0,
set RAM[0] 999,
set RAM[1] 0,
set RAM[2] 1;
repeat 100 {
  ticktock;
}
output;