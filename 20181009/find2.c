#include<stdio.h>

int find(int numbers[], int low, int high, int t){
	if (low < 0 || high < 0 || low > high) {
		return -1;
	}

	int mid = (low+high)/2;

	if (numbers[mid] == t)
		return mid;
	if (numbers[mid] > t)
		return find(numbers, low, mid-1, t);
	if (numbers[mid]<t)
		return find(numbers, mid+1, high, t);
}


int myfind(int numbers[], int low, int high, int t){
	int mid = (low+high)/2;

	if (numbers[mid] == t)
		return mid;

	if (numbers[mid]>numbers[low]) {
		if (numbers[mid] > t && t >=numbers[low])
			return find(numbers, low, mid-1, t);
		return myfind(numbers, mid+1, high, t);
	}else if(numbers[mid]<numbers[high]){
		if (numbers[mid]<t && t<=numbers[high])
			return find(numbers, mid+1, high, t);
		return myfind(numbers, low, mid-1, t);
	}
}




int main(int argc, char **argv) {
	if (argc!=2) {
		exit(1);
	}

	//int numbers[] = {6,8,10,12,     14,     16,18,2,4};
	int numbers[] = {16,18,2,4,   6,      8,10,12,14};

	printf("%d\n",myfind(numbers, 0, sizeof(numbers)/sizeof(int)-1,atoi(argv[1])));

	return 0;
}

