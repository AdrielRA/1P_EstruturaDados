Program Matrizes;
var A,B:array[1..10] of array[1..10] of integer;
    NLA,NCA,NLB,NCB: integer; // dimens�es das matrizes
    I,J: integer; //vari�veis auxiliares
Begin
   readln(NLA,NCA);
   for I:=1 to NLA do
	   for J:=1 to NCA do
		    readln(A[I][J]);
	 readln(NLB,NCB);
	 if NCA<>NLB then 
	 begin
	    writeln('N�mero de colunas de A deve ser igual ao n�mero linhas de B!');
	    exit;
	 end;
   for I:=1 to NLB do
	   for J:=1 to NCB do
		    readln(B[I][J]);
		    
	 writeln('Matriz A:');
	 for I:=1 to NLA do
	 begin
	   for J:=1 to NCA do
		 begin
		    write(A[I][J]:5);
		 end;
		 writeln;
   end;	 

	 writeln('Matriz B:');
	 for I:=1 to NLB do
	 begin
	   for J:=1 to NCB do
		 begin
		    write(B[I][J]:5);
		 end;
		 writeln;
   end;	 
	  
   readln;
End.