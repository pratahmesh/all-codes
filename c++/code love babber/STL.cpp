#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
//     static array
//     int basic[3] = {1, 2, 3};
//     array<int, 4> a = {1, 2, 3, 4};
//     int size = a.size();

//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << endl;
//     }
//     cout << "Element at 2nd Index-> " << a.at(2) << endl;
//     cout << "Empty or not-> " << a.empty() << endl;
//     cout << "First Element-> "<<a.front()<<endl;
//     cout << "Last Element-> "<<a.back()<<endl;




// vector is a *dynamic array* it is based on heaps concept if the elements are more then the size it will make a size on double of that of previous size and dumbing itself by copy things from the old array to new
// capacity-> kitna element keliye space asing hai
// size-> kitna element padhe hai 
// vector<int>v;
// vector<int> a(5,1);
// // it tell to set size and initilzlie to from 1 coz defulte is 0
// vector<int> last(a);//copying "a" array in "last" array 
// cout<<"print last:"<<endl;
// for(int j:last){
//     cout<<j<<" ";
// }cout<<endl;

// cout<<"Size="<<v.capacity()<<endl;

// v.push_back(1);
// cout<<"capacity="<<v.capacity()<<endl;
// v.push_back(2);
// cout<<"capacity="<<v.capacity()<<endl;
// v.push_back(3);
// cout<<"capacity="<<v.capacity()<<endl;
// cout<<"Size="<<v.size()<<endl;
// cout<<"Element at 2nd Index= "<<v.at(2)<<endl;
// cout<<"Before pop"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }cout <<endl;

// v.pop_back();

// cout<<"After pop"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }
// cout<<"Before Clear Size: "<<v.size()<<endl;
// v.clear();
// cout<<"After Clear Size: "<<v.size()<<endl;




// DQ in W ended q in begnning and ending we can perform push and pop operation , insertion and deletion are performed in both the ends,mutiple fixed static array tracking is used to keep memory location, random access  is possible 
// deque<int>d;
// d.push_back(1);
// d.push_back(3);
// d.push_back(4);
// d.push_front(2);
// for(int i:d){
//     cout<<i<<" ";
// }
// // d.pop_front();
// cout<<endl;
// cout<<"Print First Index Elemnet->"<<d.at(0)<<endl;
// cout<<"Front "<<d.front()<<endl;
// cout<<"Back "<<d.back()<<endl;
// cout<<"Empty or not "<<d.empty()<<endl;
// cout<<"Before erase"<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+1);
// cout<<"After earse "<<d.size()<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }




// wlinked list
// list<int> l;
// list<int>n(5,100);
// for(int i:n){
//     cout<<i<<" ";
// }cout<<endl;
// l.push_back(1);
// l.push_front(2);

// for(int i:l){
//     cout<<i<<" ";
// }cout<<endl;
// l.erase(l.begin());
// cout<<"After earse: "<<endl;
// for(int i:l){
//     cout<<i<<" ";
// }



// stack upper wali plate last hai, lifo
// stack<string>s;
// s.push("hey");
// s.push("prathamesh");
// s.push("jakkula");
// cout<<"Top Element: "<<s.top()<<endl;
// s.pop();
// cout<<"Top Element: "<<s.top()<<endl;
// cout<<"Size of stack:"<<s.size()<<endl;
// cout<<"Empty or not "<<s.empty()<<endl;

// queue fifo 
// queue<string>s;
// s.push("hey");
// s.push("prathamesh");
// s.push("jakkula");
// cout<<"Top Element: "<<s.front()<<endl;
// s.pop();
// cout<<"Top Element: "<<s.front()<<endl;
// cout<<"Size of stack:"<<s.size()<<endl;
// cout<<"Empty or not "<<s.empty()<<endl;






// //Max Heap
// priority_queue <int> p;//this is based on max heap,the element which we will remove will always be greater among the avalabile onces
// p.push(1);
// p.push(2);
// p.push(3);
// p.push(4);
// cout<<"Size: "<<p.size()<<endl;
// int n=p.size();  
// for(int i=0; i<n;i++){
// cout<<p.top()<<" "; 
// p.pop();
// }
// cout<<endl;
// //Min Heap
// priority_queue<int,vector<int>, greater<int>> m;
// m.push(1);
// m.push(2);
// m.push(3);
// m.push(4);
// cout<<"Size: "<<m.size()<<endl;
// int j=m.size();
// for(int i=0; i<j;i++){
// cout<<m.top()<<" "; 
// m.pop();
// }
// cout<<endl;
// cout<<"Khali hai kya Bhai:"<<m.empty()<<endl;//khali hai isliye 1 aayega





// SET store unique elements in it,the implementation is done through BST,can be modified after inserted, it give output in sorted way
// set <int> s;
// s.insert(72);
// s.insert(14);
// s.insert(6);
// s.insert(14);
// s.insert(14);
// s.insert(32);
// s.insert(32);
// for(int i:s){
//     cout<<i<<endl;
// }
//     cout<<endl;
// set <int>::iterator it = s.begin();
// it++;
// // s.erase(s.begin());
// s.erase(it);
// for(int i:s){
// cout<<i<<endl;
// }
// cout<<endl;
// int a;
// cout<<"what to find:";
// cin>>a;
// cout<<a<<"is present:"<<s.count(a)<<endl;//if elemenet is present it will return 1   

// set<int>::iterator itr = s.find(-6);
// cout << "Value present at ITR: "<<*it<<endl;





// i ordered map the data is stored in form of key value,All keys are unique and points to one data at a time, a key is unique but vlaue may not be , the map is sorted regurdless of order,this is based on bigO(log n) whereas unoredered map is basaed on bigO(1) 
// e.g: u -> redmi v-> redmi correct //u points redmi
//     u -> redmi u-> oppo not oppsible

// map<int,string> a;
// a[1]="prathamesh";
// a[2]="gara";
// a[19]="itachi";
// a[5]="madara";
// a[13]="hashirama";
// a[9]="tobi";
// // a.insert(5,"rohan"); // to check whats the mistake
// cout<<"Before erase:"<<endl;
// for(auto i:a){
//     cout<<i.first<<" "<<i.second<<endl;
// }
// int x{};
// cout<<"\nWhat to find:";
// cin>>x;
// cout<<x<<"is present or not: "<<a.count(x)<<endl;
// a.erase(5);
// cout<<"\nAfter eraseing 5th:"<<endl;
// for(auto i:a){
//     cout<<i.first<<" "<<i.second<<endl;
// }
// cout<<"\niterator:"<<endl;// need to do research travers
// auto it =a.find(13);
// for(auto i=it;i!=a.end();i++){
//     cout<<(*i).first<<(*i).second<<endl;
// }





vector<int>v;
v.push_back(1);
v.push_back(13);
v.push_back(6);
v.push_back(3);
v.push_back(19);
for(int y:v){
    cout<<y<<" ";
}cout<<endl;
rotate(v.begin(),v.begin()+2,v.end());
cout<<"After Rotate"<<endl;
for(int y:v){
    cout<<y<<" ";
}
cout<<endl;
cout<<"Finding 3-->"<<binary_search(v.begin(),v.end(),3)<<endl;//mistake
cout<<"Lower Bond-->"<<lower_bound(v.begin(),v.end(),13)-v.begin()<<endl;
int a=5;int b=7;
cout<<"Max:"<<max(a,b);
cout<<"\tMin:"<<min(a,b)<<endl;
cout<<"before swap:"<<a<<" "<<b<<endl;
swap(a,b);  
cout<<"after swap:"<<a<<" " <<b<<endl;

sort(v.begin(),v.end());// this sort is based on intro sort it is the mixer of three algorithm-> quit sort, heap sort, insertion sort;
cout<<"After Sort:";
for(int y:v){
    cout<<y<<" ";
}cout<<endl;

string abcd = "abcdefg";
reverse(abcd.begin(),abcd.end());
cout<<"String: "<<abcd;

 


}
