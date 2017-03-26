void hanoi(int n, char from, char to, char aux) {   |   A => C		
	if (n == 0) return;								|	A => B
	hanoi(n-1,from,aux,to);							|	C => B
	cout << from << " => " << to << endl;			|	A => C
	hanoi(n-1,aux,to,from);							|	B => A
-----------------------------------------------------   B => C
n = 1    from = A  to = C  aux = B  |					A => C
hanoi(0,from,aux,to) >> A => C (1st)|
hanoi(0,aux,to,from)				|
---------------------------------------------------------------------------
n = 2    from = A  to = B  aux = C  | n = 1    from = C  to = B  aux = A  |
hanoi(1,from,aux,to) >> A => B (2nd)| hanoi(0,from,aux,to) >> C => B (3rd)|
hanoi(1,aux,to,from)				| hanoi(0,aux,to,from)				  |
-------------------------------------------------------------------------------------------------------------------------------------------------------
n = 3    from = A  to = C  aux = B  | n = 2    from = B  to = C  aux = A  | n = 1    from = B  to = A  aux = B  | n = 1    from = A  to = C  aux = B  |
hanoi(2,from,aux,to) >> A => C (4th)| hanoi(1,from,aux,to) >> B => C (6th)| hanoi(0,from,aux,to) >> B => A (5th)| hanoi(0,from,aux,to) >> A => C (7th)|
hanoi(2,aux,to,from)				| hanoi(1,aux,to,from)				  | hanoi(0,aux,to,from)				| hanoi(0,aux,to,from)		          |
-------------------------------------------------------------------------------------------------------------------------------------------------------
ndisks = 3
hanoi(ndisks,'A','C','B');