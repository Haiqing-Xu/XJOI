var i,j,T,flag:integer;
	n:longint;
begin
	readln(T);
	for i:=1 to T do
	begin
		readln(n);
		flag:=0;
		if n=1 then
			flag:=1;
		if n>2 then
		begin
			for j:=2 to trunc(sqrt(n)) do
				if n mod j=0 then
				begin
					flag:=1;
    				break;
    			end;
    	end;
    	if flag=1 then
    		writeln('No')
    	else
    		writeln('Yes');
    end;
end.

