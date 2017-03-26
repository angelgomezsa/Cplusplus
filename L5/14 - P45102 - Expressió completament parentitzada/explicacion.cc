int evalua() {
	char c;
	cin >> c;
	if (c >='0' and c <='9') return c-'0';
	int e1=evalua();
	char op;
	cin >> op;
	int e2=evalua();
	cin >> c;
	if (op == '+') return e1+e2;
	if (op == '-') return e1-e2;
	return e1*e2;
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
c = (			return e1+e2 = 7	|
evalua()							|
e1 = 4								|
op = +								|
evalua()							|
e2 = 3								|
c = )								|
-------------------------------------
c = 8								|
return 8							|
									|
-------------------------------------
c = 2								|
return 2							|
									|
-------------------------------------
c = (			return 	e1-e2 = -6	|
evalua()							|
e1 = 2								|
op = -								|
evalua()							|
e2 = 8								|
c = )								|
-------------------------------------
c = (			return e1*e2 = -42	|
evalua()							|
e1 = -6								|
op = *								|
evalua()							|
e2 = 7								|
c = )								|
-------------------------------------

	   Entrada: ((2-8)*(4+3))