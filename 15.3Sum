/*最大的问题就是内存的分配，position只能记录一组数据*/
int** threeSum(int* nums, int numsSize, int* returnSize)  {
	int (*position)[3] = (int(*)[3])malloc(3 *max* sizeof (int*));
	int count = 0, i, j, k;
	for (i = 0; i < numsSize ; i++)
	{
		for (j = i+1; j < numsSize-1; j++)
		{
			if (nums[j] + nums[j + 1] == -nums[i])
			{
				*(*(position+count)) = nums[i];
				*(*(position+count)+1) = nums[j];
				*(*(position+count)+2) = nums[j + 1];
				count++;
			}
			else
			{
				for ( k= j + 2; k < numsSize; k++)
				{
					if (nums[k] + nums[j] == -nums[i])
					{
						*(*(position+count)) = nums[i];
						*(*(position+count)+1) = nums[j];
						*(*(position+count)+2) = nums[k];
						count++;
					}
					else if (nums[j + 1] + nums[k] == -nums[i])
					{
						(*(position+count))[0] = nums[i];
						*(*(position+count)+1) = nums[j + 1];
						*(*(position+count)+2) = nums[k];
						count++;
					}
				}
			}
		}
	}
	returnSize[0] = count;
	return (int**)position;
}
