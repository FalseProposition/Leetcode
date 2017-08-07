//一看到这题目马上就想到了递归（如下），但是却提示时间超过了
int climbStairs(int n) 
{
    
	if(n==1)return 1;
    
	if(n==2)return 2;
    
	else return climbStairs(n-1)+climbStairs(n-2);

}
//改进后的方法（如下）采用不断改变第一步与第二步的方法，将下一步表示为第一步，第一步表示为第二步
int climbStairs(int n) 
{

    int first=1, second=2;

    if(n==1)return 1;

    if(n==2)return 2;

    while(n>2)

    {
 
       second+=first;
 
       first=second-first;

        n--;

    }

    return second;

}
//看到的最佳方法（如下），因为一直被递归的思维束缚，所以没想到其实这个只需要使用一个数组就可以表示了
int climbStairs(int n) {
    int ways[n + 1];
    memset((void *)ways, 0x00, sizeof(ways));
    
    ways[0] = 1;  // 为了让ways[2] = 2;
    ways[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    
    return ways[n];
}
