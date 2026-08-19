class MyHashSet {
public:
    vector<int>hashSet;
    MyHashSet() : hashSet(1000000,-1) {
        
    }
    
    void add(int key) {
        if(hashSet.size() == 0){
            hashSet.push_back(key);
            return;
        }
        for(int i=0;i<hashSet.size();i++)
        {
            if(hashSet[i] == key)
                return;
        }
        hashSet.push_back(key);
    }

    void remove(int key) {
        if(hashSet.size() == 0)
        {
            return;
        }
        for(int i=0;i<hashSet.size();i++){
            if(hashSet[i] == key)
            {
                hashSet[i] = -1;
                // for(int j=i+1;j<hashSet.size();j++)
                //     hashSet[j-1]=hashSet[j];
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0;i<hashSet.size();i++)
            if(hashSet[i] == key)
                return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */