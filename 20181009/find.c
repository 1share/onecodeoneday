#include<stdio.h>

int myfind(int numbers[], int low, int high, int t){
	while(low<=high)
	{
		int mid = (low+high)/2;

		if (numbers[mid] == t)
			return mid;

		if (numbers[mid]>numbers[low]) {
			if (numbers[mid] > t && t >=numbers[low])
				high = mid - 1;
			else
				low = mid + 1;
		}else{
			if (numbers[mid]<t && t<=numbers[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}

	return -1;
}


int search(int A[], int n, int target)
{
    if(n<=0)
        return -1;
    int left = 0, right = n-1;
    while(left<=right)
    {
        int mid = left + ((right-left)/2);
        if(A[mid] == target)
            return mid;

        if(A[left] <= A[mid])//转折点在右半边，左半边是有序递增的，所以在左边采用普通的二分查找
        {
            if(A[left] <= target && target < A[mid])//目标元素在左边，将右边缩减到中间
                right = mid - 1;
            else//目标在右边，将左边缩减到中间
                left = mid + 1;
        }
        else //转折点在左半边，类似上面的注释。
        {
            if(A[mid] < target && target <= A[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;//不存在这个元素，返回-1
}



int main(int argc, char **argv) {
	if (argc!=2) {
		exit(1);
	}

	//int numbers[] = {6,8,10,12,     14,     16,18,2,4};
	int numbers[] = {16,18,2,4,   6,      8,10,12,14};

	//printf("%d\n",search(numbers, sizeof(numbers)/sizeof(int),atoi(argv[1])));
	printf("%d\n",myfind(numbers, 0, sizeof(numbers)/sizeof(int)-1,atoi(argv[1])));

	return 0;
}

