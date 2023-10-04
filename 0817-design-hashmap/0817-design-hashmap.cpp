class MyHashMap {
public:
    vector<int> hash;
    int capacity = 1e6+1;
    MyHashMap() {
        hash.resize(1e6+1, -1);
    }

    int findidx(int key){
        float A = 0.0735;
        double intpart, fracpart;
        double num = A * key;
        fracpart = modf(num, &intpart);
        int idx = floor(capacity *  fracpart);
        cout<<idx<<" ";
        return idx;
    }
    
    void put(int key, int value) {
        // int idx = findidx(key);
        hash[key] = value;
    }
    
    int get(int key) {
        // int idx = findidx(key);
        return hash[key];
    }
    
    void remove(int key) {
        // int idx = findidx(key);
        hash[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */