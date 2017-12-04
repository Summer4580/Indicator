#include"iostream"
#include"string"
using namespace std;
int main()
{
	struct student
	{
		string name;
		string num;
		string sex;
		int age;
		struct student *next;
	};
	student *p,*end,*head=NULL;
	int x;
	while(cout<<"是否继续输入(1 or 2):",cin >> x,x==1)
	{
		p=new student;
		cout<< "请输入学生姓名: ";
		cin >> p->name;
		cout<< "请输入学生学号: ";
		cin >> p->num;
		cout<< "请输入学生性别: ";
		cin >> p->sex;
		cout<< "请输入学生年龄: ";
		cin >> p->age;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			end->next=p;
		}
		p->next=NULL;
		end=p;
	}
	
	p=head;
	int i=1;
	while(p!=NULL)
	{
		cout << "学生" << i << "学号: " << p->num << endl;
		cout << "学生" << i << "姓名: " << p->name << endl;
		cout << "学生" << i << "年龄: " << p->age << endl;
		cout << "学生" << i << "性别: " << p->sex << endl << endl;
		i++;
		p=p->next;
	}
	
	p=head;
	while(p!=NULL)
	{
		end=p->next;
		delete p;
		p=end;
	}
	return 0;
}
