class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {

    }

    void add(int key) {
        if(find(vec.begin(),vec.end(),key)==vec.end())
            vec.push_back(key);

    }

    void remove(int key) {
        auto iter=find(vec.begin(),vec.end(),key);
        if(iter!=vec.end())
            vec.erase(iter);
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(find(vec.begin(),vec.end(),key)!=vec.end())
            return true;
        return false;
    }
    private:
    vector<int> vec;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */
