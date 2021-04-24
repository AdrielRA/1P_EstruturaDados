Program ex001_matrizes;
uses crt;
var VET : array[1..4,1..2]of byte;
    I, J: integer;

Begin
	clrscr;
	textcolor(15);
	for I:= 1 to 4 do
		begin
			for J := 1 to 2 do
				begin
					write('Informe ', I, 'x', J, ': ');
					readln(VET[I,J]);
				end;
		end;
	clrscr;
	for I:= 1 to 4 do
		begin
			write('[ ');
			for J := 1 to 2 do
				begin
					write(VET[I,J]:2, ' ');
				end; 
			writeln(']');
		end;
  readln;
End.