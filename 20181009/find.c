#include<stdio.h>

int myfind(int numbers[], int low, int high, int t){
	while(low<=high)
	{
		int mid = (low+high)/2;

		if (numbers[mid] == t)
			return mid;

		if (numbers[mid]!=t && low==high)
			return -1;


		if (numbers[mid]>numbers[low]) {
			if (numbers[mid] > t && t >=numbers[low])
				high = mid - 1;
			else
				low = mid + 1;
		}else if(numbers[mid]<numbers[high]){
			if (numbers[mid]<t && t<=numbers[high])
				low = mid + 1;
			else
				high = mid - 1;
		}

		//if (low > high)
		//	return -1;
	}

	return -1;
}





int main(int argc, char **argv) {
	if (argc!=2) {
		exit(1);
	}

	int numbers[] = {6,8,10,12,     14,     16,18,2,4};
	//int numbers[] = {16,18,2,4,   6,      8,10,12,14};

	printf("%d\n",myfind(numbers, 0, sizeof(numbers)/sizeof(int)-1,atoi(argv[1])));

	return 0;
}

