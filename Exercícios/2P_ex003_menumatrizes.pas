Program ex003_menumatrizes;

const MPX = 2;
			MPY = 4;
			ALTURA = 20;
			LARGURA= 48;
			XSTA= LARGURA + 4;
			AREA= ALTURA * LARGURA;
			BGP = 8;
			BGA = 11;
			TCA = 11;
			TCE = 14;
			TCP = 15;
			TCV = 12;

var BG : array[1..10] of integer;
		TC : array[1..10] of integer;

		MAT : array[1..20,1..20] of integer;
		OP, SUB_OP, L, C, I, J, S: integer;
		F1, F2 : boolean;

procedure TELA(COR_BG, COR_TX:integer);
	begin
		gotoxy(1,1);
		textcolor(COR_TX);
		textbackground(COR_BG);
		write(chr(201));
		for I := 1 to LARGURA do
			write(chr(205));
		write(chr(203));
		for I := 1 to 10 do
			write(chr(205));
		writeln(chr(187));
		write(chr(186));
		for I := 1 to LARGURA do
			write(' ');
		write(chr(186));
		for I := 1 to 10 do
			write(' ');
		writeln(chr(186));
		write(chr(204));
		for I := 1 to LARGURA do
			write(chr(205));
		write(chr(185));
		for I := 1 to 10 do
			write(' ');
		writeln(chr(186));
		for I := 1 to ALTURA do
			begin
				write(chr(186));
				for J := 1 to LARGURA do
					write(' ');
				write(chr(186));
				for J := 1 to 10 do
					write(' ');
				writeln(chr(186));	
			end;
		write(chr(204));
		for I := 1 to LARGURA do
			write(chr(205));                                             
		write(chr(202));
		for I := 1 to 10 do
			write(chr(205));
		writeln(chr(185));
		write(chr(186));
		for I := 1 to LARGURA+11 do
			write(' ');
		writeln(chr(186));
		write(chr(200));
		for I := 1 to LARGURA+11 do
			write(chr(205));
		write(chr(188));
	end;

procedure TITULO(TXT:string);
	begin
		gotoxy(3,2);
		write(TXT);
	end;

procedure LIMPA_LINHA(Y:integer);
	begin
		gotoxy(MPX, Y);
		for J := 1 to LARGURA do
			write(' ');
	end;
	
procedure RODAPE(TXT:string; COR:integer);
	begin
		LIMPA_LINHA(ALTURA+5);
		gotoxy(MPX+1, ALTURA+5);
		textcolor(COR);
		write(TXT);
	end;
	


procedure INICIO();
	begin
		TELA(BGA, TCP);
		TITULO('MENU - MATRIZES');
		if not(F1) then
			OP := 1
		else if not(F2) then
			OP := 2;
		for I := 1 to 10 do
			begin
				BG[I] := BGA;
				TC[I] := TCP;
			end;
		BG[OP] := BGP; TC[OP] := TCA;
		repeat
			begin
				if keypressed then
					case upcase(readkey) of
						#0:begin
								case upcase(readkey) of
									#80:begin
												inc(OP);
												if OP > 10 then
													begin
														OP := 1;
														BG[1] := BGP; TC[1] := TCA;
														BG[10] := BGA; TC[10] := TCP;
													end
												else	
													begin
														BG[OP] := BGP; BG[OP-1] := BGA;
														TC[OP] := TCA; TC[OP-1] := TCP;
													end;
											end;
									#72:begin
												dec(OP);
												if OP < 1 then
													begin
														OP := 10;
														BG[10] := BGP; TC[10] := TCA;
														BG[1] := BGA; TC[1] := TCP;
													end
												else	
													begin
														BG[OP] := BGP; BG[OP+1] := BGA;
														TC[OP] := TCA; TC[OP+1] := TCP;
													end;
											end;
								end;
							 end;
						#13:Exit;
					end;
				gotoxy(MPX+1, 5);
				textbackground(BG[1]);
				textcolor(TC[1]);
				write(' Tamanho da Matriz              ');
				gotoxy(MPX+1, 6);
				textbackground(BG[2]);
				textcolor(TC[2]);
				write(' Ler Matriz                     ');
				gotoxy(MPX+1, 7);
				textbackground(BG[3]);
				textcolor(TC[3]);
				write(' Exibir a Matriz                ');
				gotoxy(MPX+1, 8);
				textbackground(BG[4]);
				textcolor(TC[4]);          
				write(' Multipilcar Matriz por Inteiro ');
				gotoxy(MPX+1, 9);
				textbackground(BG[5]);
				textcolor(TC[5]);
				write(' Soma Todos Valores da Matriz   ');
				gotoxy(MPX+1, 10);
				textbackground(BG[6]);
				textcolor(TC[6]);
				write(' Somar Valores da Coluna        ');
				gotoxy(MPX+1, 11);
				textbackground(BG[7]);
				textcolor(TC[7]);
				write(' Somar Valores da Linha         ');
				gotoxy(MPX+1, 12);
				textbackground(BG[8]);
				textcolor(TC[8]);
				write(' Trocar um Valor na Matriz      ');
				gotoxy(MPX+1, 13);
				textbackground(BG[9]);
				textcolor(TC[9]);
				write(' Somar Diagonal Principal       ');	
				gotoxy(MPX+1, 15);
				textbackground(BG[10]);
				textcolor(TC[10]);
				write(' Sair                           ');			
			end;
		until (False);
	end;


procedure TAMANHO();
	begin
		TELA(BGA, TCP);
		TITULO('DEFININDO TAMANHO max(20x20)');
		gotoxy(MPX+1, 5);
		write('Número de Linhas : ');
		readln(L);
		while (L = 0) or (L >= 20) do
			begin
					LIMPA_LINHA(5);
					RODAPE('ERRO >> Número de Linhas Inválido!', TCE);
					textcolor(TCP);
					gotoxy(MPX+1, 5);
					write('Número de Linhas : ');
					readln(L);
			end;
		gotoxy(MPX+1, 6);
		write('Número de Colunas: ');
		readln(C);
		while (C = 0) or (C >= 20) do
			begin
					LIMPA_LINHA(6);
					RODAPE('ERRO >> Número de Colunas Inválido!', TCE);
					textcolor(TCP);
					gotoxy(MPX+1, 6);
					write('Número de Colunas: ');
					readln(C);
			end;
		F1 := True;
	end;
	
procedure LER();
	begin
		TELA(BGA, TCP);
		TITULO('LEITURA DE VALORES');
		gotoxy(MPX+1, 5);
		for I := 1 to L do
			begin
				for J := 1 to C do
					begin
						gotoxy(MPX+1, whereY);
						write('Valor ', I, 'x', J, ': ');
						readln(MAT[I,J]);
					end;
			end;
		F2 := True;
	end;
	
procedure ESCREVER();
	begin
		TELA(BGA, TCP);
		TITULO('VIZUALIZAÇÃO DA MATRIZ');
		gotoxy(MPX+1, 5);
		for I := 1 to L do
			begin
				gotoxy(MPX+1, whereY);
				write('[ ');
				for J := 1 to C do
					begin
						write(MAT[I,J]:3, '   ');
					end;
				writeln(']');
			end;
		RODAPE('[ENTER] para continuar...', TCP);
		repeat
			begin
				if keypressed then
					case upcase(readkey) of
						#13:Exit;
						#27:Exit;
					end;
			end;
		until (False);
	end;
	
	
procedure MULTIPLICAR();
	var N: integer;
	begin
		TELA(BGA, TCP);
		TITULO('MULTIPLICANDO MATRIZ');
		gotoxy(MPX+1, 5);
		write('Informe um valor inteiro: ');
		readln(N);
		for I := 1 to L do
			begin
				for J := 1 to C do
					begin
						MAT[I,J] := MAT[I,J] * N;
					end;
			end;
		ESCREVER();	
	end;
	
procedure SOMA();
	begin
		S := 0;
		TELA(BGA, TCP);
		TITULO('SOMA DA MATRIZ');
		gotoxy(MPX+1, 5);
		for I := 1 to L do
			begin
				for J := 1 to C do
					begin
						S := S + MAT[I,J];
					end;
			end;
		writeln('A soma dos valores é: ', S);
		RODAPE('[ENTER] para continuar...', TCP);
		repeat
			begin
				if keypressed then
					case upcase(readkey) of
						#13:Exit;
						#27:Exit;
					end;
			end;
		until (False);
	end;
	
procedure SOMA_COLUNA();
	var COL : integer;
	begin
		S := 0;
		TELA(BGA, TCP);
		TITULO('SOMA VALORES DA COLUNA');
		gotoxy(MPX+1, 5);
		write('Informe o número da coluna: ');
		readln(COL);
		while (COL <= 0) or (COL > C) do
			begin
					RODAPE('ERRO >> Número de Coluna Inválido! ', TCE);
					textcolor(TCP);
					LIMPA_LINHA(5);
					gotoxy(MPX+1, 5);
					write('Informe o número da coluna: ');
					readln(COL);
			end;
		for I := 1 to L do
			S := S + MAT[I,COL];
		gotoxy(MPX+1, 7);
		write('A soma dos valores da coluna ',COL,' é: ', S);
		RODAPE('[ENTER] para continuar...', TCP);
		repeat
			begin
				if keypressed then
					case upcase(readkey) of
						#13:Exit;
						#27:Exit;
					end;
			end;
		until (False);
	end;
	
procedure SOMA_LINHA();
	var LIN: integer;
	begin
		S := 0;
		TELA(BGA, TCP);
		TITULO('SOMA VALORES DA LINHA');
		gotoxy(MPX+1, 5);
		write('Informe o número da linha: ');
		readln(LIN);
		while (LIN <= 0) or (LIN > L) do
			begin
					RODAPE('ERRO >> Número de Linha Inválido! ', TCE);
					textcolor(TCP);
					LIMPA_LINHA(5);
					gotoxy(MPX+1, 5);
					write('Informe o número da linha: ');
					readln(LIN);
			end;
		for I := 1 to C do
			S := S + MAT[LIN,I];
		gotoxy(MPX+1, 7);
		write('A soma dos valores da linha ',LIN,' é: ', S);
		RODAPE('[ENTER] para continuar...', TCP);
		repeat
			begin
				if keypressed then
					case upcase(readkey) of
						#13:Exit;
						#27:Exit;
					end;
			end;
		until (False);
	end;
	
procedure TROCA_VALOR();
	var LIN, COL, NUM : integer;
	begin
		TELA(BGA, TCP);
		TITULO('TROCA VALOR NA MATRIZ');
		gotoxy(MPX+1, 5);
		write('Informe o número da linha: ');
		readln(LIN);
		while (LIN <= 0) or (LIN > L) do
			begin
					RODAPE('ERRO >> Número de Linha Inválido! ', TCE);
					textcolor(TCP);
					LIMPA_LINHA(5);
					gotoxy(MPX+1, 5);
					write('Informe o número da linha: ');
					readln(LIN);
			end;
		gotoxy(MPX+1, 6);
		write('Informe o número da coluna: ');
		readln(COL);
		while (COL <= 0) or (COL > C) do
			begin
					RODAPE('ERRO >> Número de Coluna Inválido! ', TCE);
					textcolor(TCP);
					LIMPA_LINHA(6);
					gotoxy(MPX+1, 6);
					write('Informe o número da coluna: ');
					readln(COL);
			end;
		gotoxy(MPX+1, 8);
		write('Informe o novo valor: ');
		readln(NUM);
		MAT[LIN,COL] := NUM;
		ESCREVER();
	end;
	
procedure SOMA_DIAGONAL_PRINCIPAL();
	begin
		TELA(BGA, TCP);
		TITULO('TROCA VALOR NA MATRIZ');
		S := 0;
		if L = C then
			begin
				for I := 1 to L do
					S := S + MAT[I,I];
				gotoxy(MPX+1, 5);
				write('A soma da diagonal principal é: ', S);
				RODAPE('[ENTER] para continuar...', TCP);
				repeat
					begin
						if keypressed then
							case upcase(readkey) of
								#13:Exit;
								#27:Exit;
							end;
					end;
				until (False);
			end
		else
			begin
				gotoxy(MPX+1, 5);
				write('Não é possível realizar a soma nessa matriz!');
				RODAPE('[ENTER] para continuar...', TCP);
				repeat
					begin
						if keypressed then
							case upcase(readkey) of
								#13:Exit;
								#27:Exit;
							end;
					end;
				until (False);
			end;
	end;

Begin
	F1 := false;
	F2 := false;
	L := 1; C := 1;
	OP := 1;
	cursoroff;
	while True do
		begin
			INICIO();
			case OP of
				1:TAMANHO();
				2:begin
						if F1 then
							begin
								LER();
							end
						else
							begin
								RODAPE('Informe o tamanho para a matriz!', TCE);
								delay(1000);
							end;
					end;
				3:begin
						if F2 then
							begin
								ESCREVER();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				4:begin
						if F2 then
							begin
								MULTIPLICAR();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				5:begin
						if F2 then
							begin
								SOMA();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				6:begin
						if F2 then
							begin
								SOMA_COLUNA();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				7:begin
						if F2 then
							begin
								SOMA_LINHA();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				8:begin
						if F2 then
							begin
								TROCA_VALOR()
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				9:begin
						if F2 then
							begin
								SOMA_DIAGONAL_PRINCIPAL();
							end
						else
							begin
								if F1 then
									begin
										RODAPE('Informe os valores da matriz!', TCE);
										delay(1000);
									end
								else
									begin
										RODAPE('Informe o tamanho para a matriz!', TCE);
										delay(1000);
									end;
							end;
					end;
				10:Exit;
			end;
		end;
End.  