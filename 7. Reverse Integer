int reverse(int x) {
	int t = 0;
	int flag = 1;
	if (x<0)
	{
		flag = -1;
		x = - x;
	}
	while (x)
	{
		int k = t;
		t = t * 10 + x % 10;
		if ((t - x % 10) / 10 != k)
		{ return0;}
		x /= 10;
	}
	return t * flag;
}
