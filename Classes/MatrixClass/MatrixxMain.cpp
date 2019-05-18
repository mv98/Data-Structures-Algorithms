#include <iostream>
using namespace std;
#include "Matrix.cpp"

int main(int argc, char const *argv[])
{
	Matrix matrix(2,3);
	Matrix matrix2(3,3);
	matrix.setVlera();



	// matrix2.getVlera();
	// Matrix matrix3(matrix2);
	// cout<<endl;
	// matrix3.getVlera();
	// cout<<endl;



	// Matrix matrix4(3,4);
	// matrix4.setVlera();


	//  matrix4=matrix2;
	//  matrix4.getVlera();

	 // Matrix transpositionMatrixx=matrix.transposition();


	 matrix.scalarProduction(2).getVlera(); // okkk


	 Matrix matrix5=matrix.scalarProduction(2);
	 matrix5.getVlera();  //okkkk

	return 0;
}