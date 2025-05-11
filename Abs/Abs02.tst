load Abs.asm,
output-file Abs02.out,
compare-to Abs02.cmp,
output-list RAM[0] RAM[1];

set PC 0,
set RAM[0] 0,
set RAM[1] 0;
repeat 100 {
  ticktock;
}
set RAM[1] 0,
output;
