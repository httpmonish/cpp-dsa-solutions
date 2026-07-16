#include <iostream>
#include <unordered_set>   // include correct header

using namespace std;

int main() {
    unordered_set<int> st;   // using unordered_set

    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    if(st.find(15) != st.end()){
        cout<< "Found";
    } else {
        cout<< "Not Found";
    }
    st.clear();
    cout<< st.size() << endl;
        st.clear();
        cout<< st.size()<<endl;

        if(st.empty()) {
            cout << "set is empty"<<endl;
        } else {
            cout<<"set is  not empty"<<endl;
        }
    // use correct iterator type
    unordered_set<int>::iterator it = st.begin();

    while (it != st.end()) {
        cout << *it << " ";
        it++;   // increment iterator
    }

    return 0;
}
