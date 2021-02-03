`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:42:23 12/26/2018 
// Design Name: 
// Module Name:    koder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module koder(ime,indeks,izlaz_1,izlaz_2);
input [39:0]ime;
input [11:0]indeks;
output reg [40:0]izlaz_1;
output reg [12:0]izlaz_2;

always @(ime or indeks)
	begin

			if(ime[0]==0)
					 izlaz_1={1'b0,ime+3};
					 
					
			else
					 izlaz_1={1'b1,ime+5};
					
		
			if(indeks[0]==0)
					 izlaz_2={1'b0,indeks+3};
					 
			else
					 izlaz_2={1'b1,indeks+5};
	end


endmodule


module dekoder(ulaz_1,ulaz_2,izlaz1_dec,izlaz2_dec);
input [40:0]ulaz_1;
input [12:0]ulaz_2;
output reg [39:0]izlaz1_dec;
output reg[11:0]izlaz2_dec;

always @(ulaz_1 or ulaz_2)
	begin
			if(ulaz_1[40]==0)
					 izlaz1_dec={ulaz_1-3};
			else
					 izlaz1_dec={ulaz_1-5};
		
			if(ulaz_2[12]==0)
					 izlaz2_dec={ulaz_2-3};
			else
					 izlaz2_dec={ulaz_2-5};
	end
	

	
endmodule 

module topmodulL(ulaz_koder,ulaz2_koder,izlaz_koder,izlaz2_koder,izlaz_dekoder,izlaz2_dekoder);
input [39:0]ulaz_koder;
input [11:0]ulaz2_koder;
output [40:0]izlaz_koder;
output [12:0]izlaz2_koder;
output [39:0]izlaz_dekoder;
output [11:0]izlaz2_dekoder;


koder u1(.ime(ulaz_koder[39:0]),.izlaz_1(izlaz_koder[40:0]));
koder u2(.indeks(ulaz2_koder[11:0]),.izlaz_2(izlaz2_koder[12:0]));

dekoder u3(.ulaz_1(izlaz_koder[40:0]),.izlaz1_dec(izlaz_dekoder[39:0]));
dekoder u4(.ulaz_2(izlaz2_koder[12:0]),.izlaz2_dec(izlaz2_dekoder[11:0]));

endmodule
