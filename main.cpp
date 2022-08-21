#include <bits/stdc++.h>
#include<utility>
#include<vector>
#include<set>
#include<set>
#include<unordered_set>
#include<unordered_map>
#define all(s) s.begin(),s.end()
#define allr(i) i.rbegin(),i.rend()
#define sz(s) (int)(s.size())
#define ceil(x,y) ((x+y-1)/y)
#define F first
#define S second
#define pb push_back
#define pop pop_back
#define vi vector<int>
#define si set<int>
#define uns unordered_set<int>
#define pq_max priority_queue<int>
#define pq_min priorrity_queue<int,pqi,greater<int>>
#define khaled_kasmeri ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef  long long ll;
typedef long double ld;
typedef  double dd;
using namespace std;
class linked_list{
    struct Node{
        int date ;
        Node * next ;
    };
    Node * head = NULL ;
public:
    void appeand(int val){
        Node * newnode = new Node ;
        newnode -> date = val ;
        newnode -> next = NULL;
        // if head is empty
        if( head == NULL){
            head = newnode ;
        }
        // if head not empty
        else{
    // create pointer to node to loop nodes of list
          Node * temp = head ;
          while( temp ->next != NULL){
                temp = temp -> next ;
          }
          temp->next = newnode ;
        }
    }
};
int main(){

// type your code
}
