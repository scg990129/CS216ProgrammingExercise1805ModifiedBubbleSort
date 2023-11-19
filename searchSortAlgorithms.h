//
// Created by Jacob Yeung on 11/12/23.
//
using namespace std;

template <class elemType>
void modifiedBubbleSort(elemType list[], int length)
{
    bool flag;
    elemType temp;
    for(int i = 0; i < length; i++){
        flag = false;
        cout << "\nThe flag is false, length: " << i << endl;
        for(int i = 0; i < length; i++){
            cout << list[i] << " ";
        }
        cout << "\nThe go sort: " << i << endl;
        for(int j=0; j < length-1-i; j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                flag = true;
            }
        }
        if(!flag){
            cout << "The list is sorted." << endl;
            break;
        }
    }
}


//#ifndef CS216PROGRAMMINGEXERCISE1805_SEARCHSORTALGORITHMS_H
//#define CS216PROGRAMMINGEXERCISE1805_SEARCHSORTALGORITHMS_H
//
//#endif //CS216PROGRAMMINGEXERCISE1805_SEARCHSORTALGORITHMS_H
