int avalua() {
	char c;	
	cin >> c;
	if (c>='0' and c<='9') return c-'0';
	int e1=avalua();
	int e2=avalua();
	if (c=='*') return e1*e2;
	if (c=='+') return e1+e2;
	else return e1-e2;
}
	
-------------------------------------
c = 3								|
return 3							|
									|
-------------------------------------
c = 4								|
return 4							|
									|
-------------------------------------
c = +			return e1+e2 = 7	|
avalua()							|
e1 = 4								|
avalua()							|
e2 = 3								|
-------------------------------------
c = 8								|
return 8							|
									|
-------------------------------------
c = 2								|
return 2							|
									|
-------------------------------------
c = -			return e1-e2 = -6	|
avalua()							|
e1 = 2								|
avalua()							|
e2 = 8								|
-------------------------------------
c = *			return e1*e2 = -42	|
avalua()							|
e1 = -6								|
avalua()							|
e2 = 7								|
-------------------------------------

	   Entrada: * - 2 8 + 4 3