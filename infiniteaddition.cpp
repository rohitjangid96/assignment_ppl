#include<iostream>
using namespace std;

struct node
{
	int val;
	node *link;
};

node *insertBeg (node *start, int value)
{
	node *newnode = new node();
	newnode ->val=value;
	newnode ->link= start;
}
void *traverse (node *start)
{

	while(start!=NULL)
	{
	cout<<start->val;
	start=start->link;
	}
}

node *insertEnd(node *start, int value)
{
	if (start==NULL)
	{ start= insertBeg(start,value);
		return start;
	}
	else
	{
		node *bk= start;
		node *newnode = new node();
		newnode ->val=value;
		newnode ->link= NULL;

		while(start->link !=NULL)
		{
			start=start->link;
		}
		start->link= newnode;
		return bk;

	}

}
int main()
{
    node *start1 = NULL;
    node *start2 = NULL;
    node *cstart1 = NULL;
    node *cstart2 = NULL;
    node *start3 =NULL;
    int n;
    char ch='y';
    cout<<"enter the first numbers "<<endl;

    do
    {
        cin>>n;
     start1=insertBeg(start1,n);
     cout<<"enter y to continue and n to stop"<<endl;
     cin>>ch;
    }
    while(ch=='y');
    cout<<"insert 2 no";
    do
    {
        cin>>n;
     start2=insertBeg(start2,n);
     cout<<"enter y to continue and n to stop"<<endl;
     cin>>ch;
    }
    while(ch=='y');

    cstart1=start1;
    cstart2=start2;
    int carry=0,num,mod;
    while(cstart1!=NULL && cstart2!=NULL)
    {
             num= cstart1->val + cstart2->val+carry;
             mod= num%10;
            carry= num/10;

            start3=insertBeg(start3 ,mod);
            cstart1=cstart1->link;
            cstart2=cstart2->link;
    }


    while (cstart1==NULL && cstart2!=NULL)
    {
        num=cstart2->val+carry;
        mod= num%10;
        carry= num/10;
        start3=insertBeg(start3 ,mod);
        cstart2=cstart2->link;
    }

    while (cstart2==NULL && cstart1!=NULL)
    {
        num=cstart1->val+carry;
        mod= num%10;
        carry= num/10;
        start3=insertBeg(start3 ,mod);
        cstart1=cstart1->link;
    }
    if(carry>0)
    {start3=insertBeg(start3,carry);
    }

    cout<<"addition is :";
traverse(start3);
return 0;}
