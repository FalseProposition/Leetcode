/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {

	int *position = (int*)malloc(2 * sizeof (int));
	for (int i = 0; i < numsSize - 1; i += 2)
	{
		if (nums[i] + nums[i + 1] == target)
		{
			position[0] = i ;
			position[1] = i+1 ;
			return position;
		}
		else
		{
			for (int j = i + 2; j < numsSize; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					position[0] = i ;
					position[1] = j ;
					return position;
				}
				else if (nums[i + 1] + nums[j] == target)
				{
					position[0] = i + 1;
					position[1] = j ;
					return position;
				}
			}
		}
	}
	return NULL;
}
