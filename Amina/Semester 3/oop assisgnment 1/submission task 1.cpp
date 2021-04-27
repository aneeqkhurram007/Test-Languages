#include <iostream>
using namespace std;
class rectangle {                 //class is by default private
	float length;               //data members
	float width;                //dara members

public:

	rectangle( float len = 1.0, float wid = 1.0){       //parameterized;
		setlength(len);
		setwidth(wid);
		
	}
	//Setters and Getters
	void setlength(float len){
		if (len > 0.0 && len < 20.0){    //check that whether the user is entering the right value
			length = len;
		}
		else{
			cout<<" wrong input"<<endl;//displaying wrong input when user enters above or below the required value
		}
	}


	void setwidth(float wid){
		if (wid >0.0 && wid < 20.0){   //check that whether the user is entering the right value 
			width = wid;
		}
		else {
			cout<<"wrong input"<<endl; //displaying wrong input when user enters above or below the required value
		}
	}

	float getlength(){
		return length;
	}

	float getwidth(){
		return width;
	}

	void display() // a function to display length and width
	{
		cout <<"length:"<<length<<"width:"<<width;
    }
    void area() // a function that calculates area 
    {
    	cout<<"Area of a rectangle is:"<<width*length<<endl;
	}
void perimeter() // a function that calculates perimeter of a rectangle
{
	cout<<"perimeter of a rectangle is:"<<(2*length)+(2*width)<<endl;
}

};

int main()
{
	float length ,width;
	cout<<"enter the length :"; // for user to enter the length
	cin>>length;
	cout<<" enter the width :"; // for user to enter the width
	cin>> width;
    rectangle R1(length,width);
	R1.display(); // displaying length and width
	cout<<endl;
	R1.area(); //displaying area
	cout<<endl;
	R1.perimeter(); //displaying perimeter
	cout<<endl;
}
