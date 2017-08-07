int* findDuplicates(int* nums, int numsSize, int* returnSize) {
	int j = 0;
	returnSize = (int*)malloc(sizeof(int)* numsSize);
	for (int i = 0; i<numsSize; i++)
	{
		if (nums[abs(nums[i])-1] < 0)returnSize[j++] = abs(nums[abs(nums[i])-1]);
		else nums[abs(nums[i])-1] *= -1;
	}
	return returnSize;
}
