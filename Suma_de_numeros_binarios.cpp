#include <iostream>


void main(){

    int b,v[200],v1[200],acarreo[200],total[200];
    cout <<"Ingrese longitud para los vectores ";
    for(int i=0;i<b;i++){
        v[0]=0;
        v1[0]=0;
        acarreo [0]=0;
        total[0]=0;
        acarreo [i+1]=0;
        total [i+1] = 0;
        cout <<"Ingrese el primer sumando binario : ";
        cin >>v[i+1];
        
    }
    for (int j=0;j<b;j++){
        cout << "Ingreses el segundo sumando : ";
        cin >> v1[j+1];
    }
    for(int i1=b;i1>=0;i1--){
        int aux;
        aux =(v[i1]+v1[i1]+acarreo[i1]);
        total[i1]=aux;
            if(aux==2){
                acarreo[i1-1]=1;
                total[i1]=0;
            }else{
                if(aux==3){
                    acarreo[i1-1]=1;
                    total[i1]=1;
                }
            }
    }
    cout<<"Total :";
    for(int j1=0;j1<b+1;j1++){
        cout <<total[j1];
    }
}