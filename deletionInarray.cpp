#include<iostream>
using namespace std;
class Array{
    private:
    int arr[100];
    int n;

    public:
    //Function to input Array
    void inputArray(){
        cout<<"Enter size: ";
        cin>>n;

        cout<<"Enter elements:\n";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }
    //Function to delete elements
    void deleteElement(int pos){
        if(pos<0 || pos>=n){
            cout<<"Invalid position \n";
            return;
        }

        //shift elements left
        for(int i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        //reduce the size of Array
        n--;
        cout<<"Element deleeted successfully!\n";
    }
    //Function to display Array
    void displayArray(){
        cout<<"Array: ";

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }    
};
int main(){
    Array a1;
    int pos;

    a1.inputArray();

    cout<<"Enter position to delete element(0-based index): ";
    cin>>pos;
    a1.displayArray();

    a1.deleteElement(pos);
    a1.displayArray();
    return 0;
}
