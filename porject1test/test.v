module test (
	 
	input CLOCK_50, 		   
	input [3:0] KEY,			
	input [7:0] SW,
	output [7:0] HEX0,		// First 7-segment 
	output [7:0] HEX1,		// Second 7-segment 
	output [7:0] HEX2,		// Third 7-segment 
	output [7:0] HEX3,		// Fourth 7-segment 
	output [7:0] HEX4		// Fifth 7-segment 
		
);
	
	
	nios_system u0 (
		.clk_clk       (CLOCK_50),       //    clk.clk
		.modes_export  (SW[1:0]),  //  modes.export
		.bcdin_export  (SW[5:2]),  //  modes.export
		.spcont_export  (SW[7]),  //  modes.export
		//.mode_export  (SW[1:0]),  //  modes.export
		.reset_reset_n (KEY[0]), //  reset.reset_n
		.seg0_export   (HEX0),   //   seg0.export
		.seg1_export   (HEX1),   //   seg1.export
		.seg2_export   (HEX2),   //   seg2.export
		.seg3_export   (HEX3),   //   seg3.export
		.seg4_export   (HEX4)   //   seg4.export	
	);
	
	endmodule 