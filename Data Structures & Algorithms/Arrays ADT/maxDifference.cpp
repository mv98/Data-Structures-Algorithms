#include <iostream>
using namespace std;
int max(int x,int y){
	return x>y ? x:y;
}
int maxDifference(int A[],int n){
	int dif=-9999999;
	for (int i=0; i<n-1;i++){
		for (int j=i+1;j<n;j++){
				dif=max(dif,A[j]-A[i]);
		}
	}
	return dif;
}

int main(int argc, char const *argv[])
{
	int A[]={2,1,2,7,8,12,7,15};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<maxDifference(A,n);
	return 0;
}
