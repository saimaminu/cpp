#include <iostream>
using namespace std;

int main()
{
    int n,a,A,sum=0,i=0,j=0,odd=0,even=0,positive=0,negative=0,zero=0;
    float avg=0;

    cout<<"Give element number of an Array: ";
    cin>>n;     //user input

    int arr[n];// Array declaration
    cout<<"Enter the Array(by separating with space): ";
    for(i=0; i<n; i++){
        cin>>arr[i]; //user input{array}
    }
    cout<<"Which element you want to Search: ";
    cin>>a;//element searching

    cout<<endl<<endl<<"The Array is: ";
    for(i=0; i<n;i++){
        cout<<arr[i]<<", ";}

    cout<<endl<<"This Array in reverse: ";
    for(i=0,j=n-1; i<n,j>=0; i++,j--){
        cout<<arr[j]<<", ";}

    int max=arr[0],min=arr[0];
    for(i=0; i<n; i++){
        sum+=arr[i];//Sum
        if(max<arr[i]){max=arr[i]; cout<<arr[i]<<" ";}
        if(min>arr[i]){min=arr[i]; cout<<arr[i]<<" ";}

        if(a==arr[i]){A=a;}//Searching element

        if(arr[i]%2!=0){odd++;}
        else if(arr[i]%2==0){even++;}

        if(arr[i]>0){positive++;}
        else if(arr[i]<0){negative++;}
        else{zero++;}

    }

    avg=(float)sum/i;
    cout<<endl<<"Loop run = "<<i<<" times";
    if(A==a){cout<<endl<<a<<" is available";}
    else{cout<<endl<<a<<" is not available";}
    cout<<endl<<"Sum of Array element is = "<<sum;//printing sum
    cout<<endl<<"Maximum Number is:"<<max;
    cout<<endl<<"Minimum Number is:"<<min;
    cout<<endl<<"Average is:"<<avg;
    cout<<endl<<"Odd Number: "<<odd<<" times";
    cout<<endl<<"Even Number: "<<even<<" times";
    cout<<endl<<"Positive Number: "<<positive<<" times";
    cout<<endl<<"Negative Number: "<<negative<<" times";
    cout<<endl<<"Zero Number: "<<zero<<" times";

    return 0;
}
