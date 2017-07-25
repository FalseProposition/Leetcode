/*在第13行提示有空指针*/
bool canFinish(int numCourses, int** prerequisites, int prerequisitesRowSize, int prerequisitesColSize) {
	int *map = (int *)malloc(sizeof(int)*numCourses);
	int i;
	for (i = 0; i<numCourses; i++)map[i] = 0;
	for (i = 0; i<prerequisitesRowSize; i++)map[prerequisites[i][0]]++;//记录有前提的课程
	for (i = 0; i<numCourses; i++)//每次选一门课，总共选numCourses门
	{     
		int StartingPoint = 0;
		while (StartingPoint<numCourses && map[StartingPoint] != 0)StartingPoint++;//寻找没有前提的课程作为起点
		if (StartingPoint == numCourses)return false;//找不到起点则说明图中有环
		map[StartingPoint] = -1;//表示该课程已经修完
		if(prerequisites[StartingPoint][0]>=0)map[prerequisites[StartingPoint][0]]--;//将以起点为前提的课程作为起点
	}
	return true;
}
