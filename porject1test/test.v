module test (
	// inputs of the top-level-design
	input CLOCK_50, // clock
	input [1:0] KEY, // reset
	input [1:0] SW,
	output [17:0] LEDR,
	output [7:0] LEDG);
nios_system u0 (
	.clk_clk (CLOCK_50), // clk.clk
	.reset_reset_n (KEY[0]), // reset.reset_n
	.cout_export (LEDG), // counter.export
	.modes_export (SW[1:0]), // modes.export
	.pattern_export (LEDR) // pattern.export
);
endmodule