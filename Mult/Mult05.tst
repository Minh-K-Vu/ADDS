load Mult.asm,
output-file Mult05.out,
compare-to Mult05.cmp,
output-list RAM[0] RAM[1] RAM[2];

set PC 0,
set RAM[0] 0,
set RAM[1] 10,
set RAM[2] -20;
repeat 200 {
  ticktock;
}
output;