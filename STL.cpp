#include <bits/stdc++.h>
using namespace std;

void print() {
    cout<<"vansh";
}

int sum(int a, int b) {
    return a + b;
}

void explainPair() {

    pair <int, int> p = {1, 3};

    cout<<p.first<<" "<<p.second<<endl;

    pair <int, pair<int, int>> p1 = {1, {3, 4}};

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair <int, int> arr[] = {{1, 2}, {3, 4}, {5,6}};

    cout<<arr[1].second<<endl;

}

void explainVector() {

    vector <int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    vector <pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector <int> v1(5);

    vector <int> v2(5, 100);
    v2.push_back(1);

    vector <int> v3(5,20);
    vector <int> v4(v3);

    vector <int>:: iterator it = v.begin();
    it++;
    cout << *it << " "; 

    it = it + 2;
    cout << *it << " ";
    
    vector <int>:: iterator it = v.end();
    // vector <int>:: iterator it = v.rend();
    // vector <int>:: iterator it = v.rbegin();

    cout<< v[0];

    cout << v.back() << " ";


    for (vector <int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    for (auto it: v)
    {
        cout << it << " ";
    }
        
    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 1, v.begin() + 4);


    // Insert function

    vector <int> vq(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 10, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector <int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); //2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

    v.clear();

    cout << v.empty();

}

void explainList(){
    list <int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2 ,4}

    ls.emplace_front(1); // {1, 5, 2, 4} 

    //rest functions same as vector 
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {

    deque <int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    
    dq.front();

    //rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack() {
    
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout << st.top();

    st.pop();

    cout << st.top();

    cout << st.size();

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() +=5;

    cout<< q.back();

    cout<< q.front();

    q.pop();

    cout<< q.front();
}

void explainPQ() {

    priority_queue <int> pq;
    // Maximum Heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();

    pq.pop();

    cout<< pq.top();

    // Minimum Heap
    priority_queue <int, vector<int>, greater <int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();
}

int main() {
    print();
    cout<<endl;
    int x = sum(4,6);
    cout<<x<<endl;
    explainPair();
    explainVector();
    return 0;
}
