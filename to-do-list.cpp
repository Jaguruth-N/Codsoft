#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int key = 1, choice, question, delete_key, edit_key;
    string val, error;
    map<int, string> Task;
    map<int, int> map;
    while(choice!=5){
    cout<<"\nTODO LIST\n"<<endl;
    cout<<"Enter a choice\n"<<endl;
    cout<<"1. Add a Task "<<endl;
    cout<<"2. View Tasks "<<endl;
    cout<<"3. Remove a Task "<<endl;
    cout<<"4. Mark a Task as Completed "<<endl;
    cout<<"5. Exit "<<endl;
    cout<<"\nSelect your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<endl;
            do{
                cin.ignore();
                cout<<"Enter Your Task Details : ";
                getline(cin, val);
                Task.insert({key, val});
                map.insert({key, 0});
                key++;
                cout<<"Do you want to add more Task? (1=Yes / 0=No) : ";
                cin>>question;
            }while(question);
            break;
        case 2:
            cout<<endl;
            for (auto x : Task) 
            {
                if(map.at(x.first) == 1)
                {
                    cout << "Task-" << x.first << " : " << x.second << endl; 
                }
                else if(map.at(x.first) == 0)
                {
                    cout << "Task-" << x.first << " : " << x.second << " ---> [Pending]" << endl;
                }
            }
            break;
        case 3:
            cout<<"\nEnter the task number which one you want to remove/delete : ";
            cin>>delete_key;
            Task.erase(delete_key);
            map.erase(delete_key);
            cout<<"\nTask-"<<delete_key<<" deleted successfully...!"<<endl;
            break;
        case 4:
            cout<<"\nEnter the task number which one you want to mark as completed : ";
            cin>>edit_key;
            try
            {
                Task[edit_key] = Task.at(edit_key) + " ---> [Completed]";
                map[edit_key] = 1;
                cout<<"\nTask-"<<edit_key<<" marked as completed successfully...!"<<endl;
            }
            catch(const out_of_range &e) 
            {  
                cout<<endl<<"Invalid Task Number...!"<<endl;  
            } 
            break;
        case 5:
            cout<<"\nThank you for using My To-Do List Application...!"<<endl;
            exit(0);
            break;
        default:
            cout<<"Invalid choice...! Please try again..."<<endl;
            break;
    }
    }
  return 0;
}