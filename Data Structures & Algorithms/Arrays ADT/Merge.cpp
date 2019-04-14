de <iostream>
using namespace std;
void merge(int A[],int B[],int lengthA,int lengthB,int mergedArray[]){
	int i=0,j=0,k=0;
	while(i<lengthA && j<lengthB){
		if(A[i]<B[j]){
			 mergedArray[k++]=A[i++];
		}else if(A[i]>B[j]){
			mergedArray[k++]=B[j++];
		}
	}
	for(;i<lengthA;i++){
		mergedArray[k++]=A[i];
	}
		for(;j<lengthB;j++){
		mergedArray[k++]=B[j];
	}
}

int main(int argc, char const *argv[])
{
	int A[]={1,5,8,9,11,23,56};
	int B[]={2,4,9,13,57};	
	int lengthA=sizeof(A)/sizeof(A[0]);
	int lengthB=sizeof(B)/sizeof(B[0]);
	int mergedArray[lengthA+lengthB];
	merge(A,B,lengthA,lengthB,mergedArray);
	for(int i=0;i<lengthB+lengthA;i++){
		cout<<mergedArray[i]<<" ";
	}
	return 0;
}
