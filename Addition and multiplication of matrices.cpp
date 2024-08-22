#include <iostream>
using namespace std;
int main () {
    int matrix1[2][2];
	int matrix2[2][2];
	int matrix3[2][2];
	int matrix4[2][2];
	int c[2][2];
	
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
            cin >> matrix2[i][j];
            cin >> matrix3[i][j];
            cin >> matrix4[i][j];
        }
    }

    cout << "Matrix1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix1[i][j] << "  ";
        }
        cout << endl;
    }
	 cout << "Matrix2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix2[i][j] << "  ";
        }
        cout << endl;
    }
     cout << "Matrix3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix3[i][j] << "  ";
        }
        cout << endl;
    }
     cout << "Matrix4:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix4[i][j] << "  ";
        }
        cout << endl;
    }
	cout << "addition of matrix 1 and 2"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "multiplication of matrix 3 and 4"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
        	c[i][j]=0;
        	for (int k = 0; k < 2; k++){
        		c[i][j]+= matrix3[i][k] * matrix4[k][j];
			}
           }
        }
        cout << endl;
        for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
        	cout << c[i][j]<< "  ";
		}
		cout << endl;
    }
}


