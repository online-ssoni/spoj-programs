/*
ONP - Transform the expression

http://www.spoj.com/problems/ONP/
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char poppedValue;
char sendPopped(char c)
{
    return c;
}


/*
 * Node Declaration
 */
struct node
{
    int info;
    struct node *link;
}*top;

/*
 * Class Declaration
 */
class stack_list
{
    public:
        node *push(node *, int);
        node *pop(node *);
        void traverse(node *);
        stack_list()
        {
            top = NULL;
        }
};

int main()
{
    string s;
    stack_list sl;
    int length,t;

    //number of test cases
    cin>>t;

    for(int p=0;p<t; p++)
    {
        string temp = "";
        cin>>s;

        //convert string to array
        char arr[s.size()+1];
        strcpy(arr, s.c_str());

        //find the length of array
        length = (sizeof(arr)/sizeof(*arr))-1;

        //logic for postfix conversion
        for(int i=0; i<length; i++)
        {
            if(arr[i]=='(')
            {
                top = sl.push(top, arr[i]);
            }
            else if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i]=='/' || arr[i]=='^')
            {
                top = sl.push(top, arr[i]);;
            }
            else if(arr[i]==')')
            {
                for(int j=0;;)
                {
                    top = sl.pop(top);
                    if(poppedValue == '(')
                    {
                        break;
                    }
                    else
                    {
                        temp.push_back(poppedValue);
                    }
                }
            }
            else
            {
                temp.push_back(arr[i]);
            }
        }

        //print temp string
        cout<<temp<<endl;
    }
    return 0;
}

/*
 * Push Element into the Stack
 */
node *stack_list::push(node *top, int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    return top;
}

/*
 * Pop Element from the Stack
 */
node *stack_list::pop(node *top)
{
    node *tmp;
    if (top != NULL)
    {
        tmp = top;
        poppedValue = sendPopped(tmp->info);
        top = top->link;
        delete(tmp);
    }
    return top;
}
