
module nios_system (
	clk_clk,
	cout_export,
	modes_export,
	pattern_export,
	reset_reset_n);	

	input		clk_clk;
	output	[7:0]	cout_export;
	input	[1:0]	modes_export;
	output	[17:0]	pattern_export;
	input		reset_reset_n;
endmodule
