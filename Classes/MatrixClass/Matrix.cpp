#include <iostream>
using namespace std;
#include "Matrix.h"

Matrix::Matrix(int row,int column){
	this->row=row;
	this->column=column;

	elementet = new int*[row];
	for(int i = 0; i < row; ++i)
    elementet[i] = new int[column];
}

void Matrix::setVlera(){
	cout<<"Jep vlerat e matrices";
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cin>>elementet[i][j];
		}
	}
}

Matrix::Matrix(const Matrix &b){
	this->row=b.row;
	this->column=b.column;
	elementet = new int*[row];
	for(int i = 0; i < row; ++i)
    elementet[i] = new int[column];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			elementet[i][j]=b.elementet[i][j];
		}
	}

}



void Matrix::getVlera(){
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout<<elementet[i][j];
		}
	}
}


Matrix &Matrix::operator=(const Matrix &b){
	if(&b!=this){
		if(this->row!=b.row || this->column!=b.column){
			delete [] elementet;
			this->row=b.row;
			this->column=b.column;
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
				{
					elementet[i][j]=b.elementet[i][j];
				}	
		}
	}
	return *this;
}


Matrix Matrix::transposition(){
	Matrix transpositionMatrix(column,row);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			transpositionMatrix.elementet[j][i]=elementet[i][j];

		}

	}



	// for (int i = 0; i < column; ++i)
	// {
	// 	for (int j = 0; j < row; ++j)
	// 	{
	// 		cout<<transpositionMatrix.elementet[i][j]<<endl;
	// 	}

	// }
	// prinitimi behete i-->column  dhe j-->row se nderohen rreshtat me shtyllat

	return transpositionMatrix;
		
}


void Matrix::getTranspositionVlera(Matrix &b){
	
	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout<<b.elementet[i][j]<<endl;
		}

	}
}

Matrix Matrix::scalarProduction(int k){
	Matrix scalarMatrix(row,column);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			scalarMatrix.elementet[i][j]=k*elementet[i][j];

		}

	}

	// for (int i = 0; i < row; ++i)
	// {
	// 	for (int j = 0; j < column; ++j)
	// 	{
	// 		cout<<scalarMatrix.elementet[i][j];

	// 	}

	// }

	return scalarMatrix;
}