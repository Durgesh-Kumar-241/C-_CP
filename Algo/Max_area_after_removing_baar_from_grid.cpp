/*
Largest area possible after removal of a series of horizontal & vertical bars
Given a grid consisting of horizontal & vertical bars of size (N + 2) x (M + 2) and two arrays H[] and V[] denoting the number of horizontal & vertical bars required to be removed, the task is to find the largest area when a series of vertical and horizontal bars are removed.



Approach: Follow the steps below to solve the problem:

Initialize two sets, s1 & s2 to store the integers.
Iterate over the range [1, N+1] and store every integer in s1.
Similarly, iterate over the range [1, M + 1] and store every integer in s2.
Traverse the array H[] and remove all H[i] from s1.
Similarly, traverse the array V[] and remove all V[i] from s2.
Convert updated s1 and s2 sets into lists l1 and l2.
Sort both the lists in ascending order.
Traverse the list l1 and l2 and store the maximum distance between two neighbours as maxH and maxV respectively.
Print the product of maxH and maxV as the largest area.

*/


/*

to find maximum area after removing certain horizontal and vertical baars

*/

#include <iostream>

using namespace std;

void printSetm(set<int> &s)
{
for(auto a:s)
	{ cout << a << '\t';
		}cout <<endl;	
}



int main()
{
int n,m;
	cin>>n>>m;
	set<int> hrz;
	set<int> vrt;
	for(int i=0;i<=n+1;i++)
	hrz.insert(i);
	
	printSetm(hrz);
	
		for(int i=0;i<=m+1;i++)
	    vrt.insert(i);
	printSetm(vrt);
	
	int v,h;
	cin >> h ;
	while(h--)
	{
		int x;
		cin >> x;
		hrz.erase(x);
	}
	cout << "remaining hrz \n";
	printSetm(hrz);
	int max_w=0,max_h=0,prev_h=0,prev_v=0;
	
		for(auto i = ++hrz.begin();i!=hrz.end();i++)
	{ cout<<"prev "<<prev_h<<" curr"<<(*i)<<" diff "<<prev_h-(*i)<<endl;
		max_h=max(max_h,(*i)-prev_h);
		prev_h=*i;
		}
	
	cout << "max_h "<< max_h<<endl;	
	
	
	
	
	
	
	
	cin >> v ;
	while(v--)
	{
		int x;
		cin >> x;
		vrt.erase(x);
	}
	
	cout << "remaining vrt \n";
	printSetm(vrt);
	
	for(auto i = ++vrt.begin();i!=vrt.end();i++)
	{ cout<<"prev "<<prev_v<<" curr"<<(*i)<<" diff "<<prev_v-(*i)<<endl;
		max_w=max(max_w,(*i)-prev_v);
		prev_v=*i;
		}
	
	cout << "max_w "<< max_w<<endl;	
	cout<<"area "<<max_w*max_h<<endl;
		
}
