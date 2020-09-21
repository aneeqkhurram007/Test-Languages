#include <iostream>
using namespace std;
int main()
{
    /*float numOfItemsBought, ShippingCharges = 0;
    cin >> numOfItemsBought;
    if (numOfItemsBought > 10)
    {
        ShippingCharges = 0.0;
        cout << ShippingCharges;
    }
    else if (numOfItemsBought >= 5 && numOfItemsBought <= 10)
    {
        ShippingCharges = 3.00 * numOfItemsBought;
        cout << ShippingCharges;
    }
    else if (numOfItemsBought > 0 && numOfItemsBought < 5)
    {
        ShippingCharges = 7.00 * numOfItemsBought;
        cout << ShippingCharges;
    }*/
    /*int num, sum = 0;
    cout << "Enter number: ";
    cin >> num;
    while (num > 0)
    {
        int temp = num / 10;
        int a = num % 10;
        sum += a;
        num = num / 10;
    }
    cout << sum;*/
    
int const size=100; 
char arr[size]; 
cout<<"Enter cstring: ";
 cin>>arr; 
 int count=0; 
 int countInt=0, countPun=0; 
 int i=0; 
 while(arr[i]!='\0') 
 {
 	if(arr[i]>='A' && arr[i]<='Z'||arr[i]>='a' && arr[i]<='z')
 	{
 		count++;
	}
	else if(arr[i]>='0' && arr[i]<='9')
	{
		countInt++;
	}
	else
	{
		countPun++;
	}
 	i++;
  } 
  
  cout<<"Total numbers characters are: "<<count<<endl; 
  cout<<"Total numbers Punctuations are: "<<countPun<<endl; 
  cout<<"Total numbers of integers are: "<<countInt; 
}