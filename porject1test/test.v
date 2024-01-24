module test (

	input CLOCK_50, //clock
	input [3:0] KEY //reset
);

	nios_system u0 (
		.clk_clk		(CLOCK_50),
		.reset_reset_n (KEY[0])
	);
	
	endmodule
