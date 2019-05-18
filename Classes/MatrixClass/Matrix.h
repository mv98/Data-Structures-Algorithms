#ifndef Matrix_H
#define Matrix_H

class Matrix
{
	
	
private:
	int row;
	int column;
	int **elementet;

public:
	Matrix(int,int);
	Matrix(const Matrix&);
	void getVlera();
	void setVlera();
	Matrix &operator=(const Matrix&);
	Matrix transposition();
	void getTranspositionVlera(Matrix &);
	Matrix scalarProduction(int);

};




#endif