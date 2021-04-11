#include<bits/stdc++.h>
using namespace std;


struct Node {
   char data;
   struct Node *next;
}*top = NULL;


void push(char val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}

char pop() {
   if(top==NULL)
    return '-'; //no more elements
   else {
      char temp = top->data;
      top = top->next;
      return temp;
   }
}

void checkPalindrome()
{

  string str = "";

  char ch = pop();
  while(ch != '-')
  {
      if(!((int)ch>=32 && (int)ch<=47)) //pop char validation[space/Punctuation marks]
      {
        str+=ch;
      }
    ch = pop();
  }

    transform(str.begin(), str.end(), str.begin(), ::tolower); //convert to lowercase
    int64_t length = str.length();
    int flag=0;

    for(int64_t i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }

    if (flag)
       cout <<"The expression you entered is not a palindrome"<<endl <<endl;
    else
       cout <<"The expression you entered is a palindrome."<<endl<<endl;
}

int main()
{
    string expression;
    cout<<"Please Enter the input Expression: "<<endl;
    getline(cin, expression);

    do{

        for(int64_t i=0; i<expression.length() ;i++)
        {
            push(expression.at(i));
        }
        checkPalindrome();

        cout<<"Input whether to continue or Not [yes/no] "<<endl;
        getline(cin, expression);

        if(expression!= "no")
        {
            cout<<"Please Enter the input Expression: "<<endl;
            getline(cin, expression);
        }

    }while(expression.compare("no"));


    cout <<endl <<"Palindrome evaluator use krny pr apka Shukira :)" <<endl;
    cout <<"Developed by Lumber 1 university" <<endl;


}
