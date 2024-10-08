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

void explainStack() {           // LIFO
                                // PUSH, POP AND TOP -> O(1)
    
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

void explainQueue() {           // FIFO
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

void explainPQ() {          // PUSH AND POP -> log n
                            // TOP -> O(1)

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

void explainSet() {         // SORTED AND UNIQUE
                            //log n
    set <int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    // Functionality of insert in vector can be used also, that only increases efficiency
    // begin(), end(), rbeign(), rend(), size(), empty() and swap() are same as those of above

    auto it = st.find(3);
    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);


    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

void explainMultiSet() {            // SORTED       

    // Everything is same as set, only stores duplicate elements also

    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));


    // ms.erase(ms.find(1), ms.find(1) + 2);

    //rest all function same as set
}

void explainUSet() {            // UNIQUE
                                // O(1) -> BEST AND AVERAGE
                                // O(n) -> WORST

    unordered_set <int> st;
    // lower_bound and upper_bound function does not works, rest all functions are same as above, it does not stores in any particular order it has a better complexity than set in most cases, except some when collision happens 

}

void explainMap() {         //UNIQUE KEYS IN SORTED ORDER
                            // log n
    
    map <int, int> mpp;
    
    map <int, pair<int, int>> mpp1;

    map <pair<int, int>, int> mpp2;


    mpp[1] = 2;
    mpp.insert({3, 1});

    mpp.insert({2, 4});

    mpp2[{2, 3}] = 10;

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout<< mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    //This is the syntax
    auto it = mpp.lower_bound(2);
    
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above

}

void explainMultiMap() {        // SORTED
    // everything same as map, only it can store multiple keys 
    // only mpp[key] cannot be used here 
}

void explainUnorderedMap() {        // UNIQUE
                                    // O(1) -> BEST AND AVERAGE
                                    // O(n) -> WORST
    // same as set and unordered_set difference
}

bool comp(pair <int,int> p1, pair <int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // They are same 

    if(p1.first > p2.first) return true;
    else return false;
}

void explainExtra() {

    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair <int,int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it accordingly to second element 
    // if second element is same, then sort it accordingly to first element but in descending

    sort(a, a+n, comp);

    // {4,1}, (2,1), {1,2}

    int num = 7;
    int cnt = _builtin_popcount();

    long long num = 16578578687;
    int cnt = _builtin_popcountll();


    string s = "123";
    sort(s.begin(), s.end());

    do(
        cout << s << endl;
    ) while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n); 
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
