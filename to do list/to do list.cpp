#include<iostream>
using namespace std;
string tasks[10]={""};
int count=0;
int add_task()
{
	if(count>=10)
	{
		cout<<"Task list is Full...."<<endl;
	}
	else
	{
		cout<<"Enter the task:";
		cin.ignore();
		getline(cin,tasks[count]);
		count++;
	}
}
void view()
{
	if(count==0)
	{
		cout<<"Task list is empty...."<<endl;
	}
	else
	{
		cout<<"----------------------------";
		cout<<"----Tasks to do----"<<endl;
		int i;
		for(int i=0;i<count;i++)
		{
			cout<<"Task"<<i<<" : "<<tasks[i]<<endl;
		}
		cout<<"----------------------------";
	}
}
int delete_task()
{
    int del_task = 0;
    cout << "Enter the task to delete: ";
    cin >> del_task;
    if (del_task < 0 || del_task >= count) 
	{
        cout << "You entered an invalid task..." << endl;
    } else 
	{
        for (int i = del_task; i < count - 1; i++) 
		{
            tasks[i] = tasks[i + 1];
        }
        count--;
    }
    return 0;
}
int main()
{
	int c;
	cout<<"\t\t\t<<<<<TO DO LIST>>>>>"<<endl;
	do
	{
		cout<<"1.Add new task\n2.To view the task\n3.Delete the task\n4.End the program\n";
		cin>>c;
		switch(c)
		{
			case 1:
				add_task();
				break;
			case 2:
				view();
				break;
			case 3:
				delete_task();
				break;
			case 4:
				cout<<".....EXIT....."<<endl;
				break;
			default:
				cout<<"Please enter correct option..."<<endl;
		}
	}while(c!=4);
}
