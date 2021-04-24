Program ex002_planocarteziano;
uses crt;
const CAR : array[1..4,1..2]of char = (('+','+'),
																			 ('-','+'),
																			 ('-','-'),
																			 ('+','-'));
var   I, J: integer;

Begin
	clrscr;
	textcolor(15);
	writeln('  X Y');
	for I:= 1 to 4 do
		begin
			write('[ ');
			for J := 1 to 2 do
				begin
					write(CAR[I,J], ' ');
				end; 
			writeln(']');
		end;
  readln;
End.