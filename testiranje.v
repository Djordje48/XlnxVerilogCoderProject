`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:24 01/05/2019
// Design Name:   topmodulL
// Module Name:   /home/ise/Desktop/djordje_ilic_648_projekat/testiranje.v
// Project Name:  djordje_ilic_648_projekat
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: topmodulL
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testiranje;

	// Inputs
	reg [39:0] ulaz_koder;
	reg [11:0] ulaz2_koder;

	// Outputs
	wire [40:0] izlaz_koder;
	wire [12:0] izlaz2_koder;
	wire [39:0] izlaz_dekoder;
	wire [11:0] izlaz2_dekoder;

	// Instantiate the Unit Under Test (UUT)
	topmodulL uut (
		.ulaz_koder(ulaz_koder), 
		.ulaz2_koder(ulaz2_koder), 
		.izlaz_koder(izlaz_koder), 
		.izlaz2_koder(izlaz2_koder), 
		.izlaz_dekoder(izlaz_dekoder), 
		.izlaz2_dekoder(izlaz2_dekoder)
	);

	initial begin
		// Initialize Inputs
		ulaz_koder = 0;
		ulaz2_koder = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		ulaz_koder = 40'h646a6f6c65; // Ascii kod djole,prema Ascii tabeli
		ulaz2_koder = 12'b011001001000; //Broj indeksa u binarnom zapisu

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

