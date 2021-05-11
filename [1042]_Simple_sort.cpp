#include <iostream>


using namespace std;
 
int main() {

    int arr[3];
    int arr_cpy[3];
    int i=0;
    int j,temp;

 
    for(i=0;i<3;i++) {

        cin >> arr[i];
        arr_cpy[i]=arr[i];


    }

    for(i=1;i<3;i++) {

        for(j=0;j<2;j++) {

            if(arr[j]>arr[j+1]) {
            
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

            }

        }

    }


    for(i=0;i<3;i++) {

        cout << arr[i] << endl;

    }

    cout << endl;

    for(i=0;i<3;i++) {

        cout << arr_cpy[i] << endl;

    }




    system("pause");
    
    return 0;
}