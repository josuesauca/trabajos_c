#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int matriz[3][3],i,j,sumaprin = 0,sumase = 0;
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            
            cout<<"Ingres el valor de la Matriz en la posicion ["<<i<<"]["<<j<<"] : ";
            cin>>matriz[i][j];
        }        
        
    }
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            if(i==j){
                sumaprin = sumaprin + matriz[i][j];
            }
            
            if (i==2-j){
                sumase = sumase+ matriz[i][j];
            }
        }      
    }

    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            cout<<matriz[i][j];
            cout<<"    ";
        }      
        cout<<endl<<endl<<endl<<endl;
    }

	cout<<"La suma de la diagonal principal es :"<<sumaprin<<endl;
	cout<<"La suma de la diagonal Secundaria es :"<<sumase<<endl;

    //system("pause");
    return 0;
    
}
