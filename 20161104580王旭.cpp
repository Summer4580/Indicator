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
	while(cout<<"�Ƿ��������(1 or 2):",cin >> x,x==1)
	{
		p=new student;
		cout<< "������ѧ������: ";
		cin >> p->name;
		cout<< "������ѧ��ѧ��: ";
		cin >> p->num;
		cout<< "������ѧ���Ա�: ";
		cin >> p->sex;
		cout<< "������ѧ������: ";
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
		cout << "ѧ��" << i << "ѧ��: " << p->num << endl;
		cout << "ѧ��" << i << "����: " << p->name << endl;
		cout << "ѧ��" << i << "����: " << p->age << endl;
		cout << "ѧ��" << i << "�Ա�: " << p->sex << endl << endl;
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
