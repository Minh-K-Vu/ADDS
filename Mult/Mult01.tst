load Mult.asm,
output-file Mult01.out,
compare-to Mult01.cmp,
output-list RAM[0] RAM[1] RAM[2];

set PC 0,
set RAM[0] 0,
set RAM[1] 3,
set RAM[2] 5;
repeat 100 {
  ticktock;
}
output;