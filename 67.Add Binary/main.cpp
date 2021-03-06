/*在LeetCode上可以Run code，但是Submission时却显示free(): invalid next size (normal): 0x00000000010fde60 ***，暂时还没有解决问题*/
char* addBinary(char* a, char* b) {
	int a_len = strlen(a) - 1;
	int b_len = strlen(b) - 1;
	if (a_len<b_len){
		char *temp = a;
		a = b;
		b = temp;
		int tempLen = a_len;
		a_len = b_len;
		b_len = tempLen;
	}//令a为更长的数组，将b加到a上
	int flag = 0;
	while (b_len >= 0 || a_len >= 0)
	{
		int a_num = a[a_len] - '0';
		int b_num = 0;
		if (b_len >= 0)
			b_num = b[b_len--] - '0';
		int num = a_num + b_num + flag;
		a[a_len--] = num % 2 + '0';
		flag = num / 2;
		if (b_len<0 && !flag)
			return a;//当b已经全部加完，且无进位，则a剩余部分不用再计算
	}
	if (!flag)return a;//a和b都加完，且无进位，则计算结束
	char *A = (char *)malloc(sizeof(char)*(a_len + 2));
	A[0] = '1';
	strcpy(A + 1, a);
	return A;//有进位则需要在a的前面加上1
}
