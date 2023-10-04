class MyHashMap {
private:

    struct node{
        int key;
        int value;
        node* next;

        node(int key, int val){
            this->key = key;
            value = val;
            next = NULL; 
        }

        node(){
            key = -1;
            value = -1;
            next = NULL;
        }

    };

    int capacity = 573;
    vector<node> map;

    int findhash(int key){
        return key % capacity;
    }

public:

    MyHashMap() {
        map.resize(capacity);
        
    }
    
    void put(int key, int value) {
        int idx = findhash(key);

        //tarversing linkedlist
        node *curr = &map[idx];
        node *prev = NULL; 
        while(curr != NULL){
            if(curr->key == key)
                {
                    curr->value = value;
                    return;
                }
            prev = curr;
            curr = curr->next;
        }

        prev->next = new node(key, value);

      }
    
    int get(int key) {
        int idx = findhash(key);
        node *curr = &map[idx];
        while(curr != NULL){
            if(curr->key == key)
                return curr->value;
            curr = curr->next;
        }
        return -1;   
    }
    
    void remove(int key) {

        int idx = findhash(key);

        node *curr = &map[idx];
        node *prev = NULL; 
        while(curr != NULL){
            if(curr->key == key)
                {
                    prev->next = curr->next;
                    return;
                }
            prev = curr;
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */