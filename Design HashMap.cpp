// Design a HashMap without using any built-in hash table libraries.

// Implement the MyHashMap class:

// MyHashMap() initializes the object with an empty map.
// void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists in the map, update the corresponding value.
// int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
// void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.
 

// Example 1:

// Input
// ["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
// [[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
// Output
// [null, null, null, 1, -1, null, 1, null, -1]

// Explanation
// MyHashMap myHashMap = new MyHashMap();
// myHashMap.put(1, 1); // The map is now [[1,1]]
// myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
// myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
// myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
// myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
// myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
// myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
// myHashMap.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]
 

// Constraints:

// 0 <= key, value <= 106
// At most 104 calls will be made to put, get, and remove.


struct node{
    int key;
    int val;
    node *next;

    node(int x){
        key = x;
        val  = 0;
        next = NULL;
    }
    node(int x , int y){
        key = x;
        val = y;
        next = NULL;
    }
};
class MyHashMap {
public:
    node *head;
    MyHashMap() {
        head = new node(-1);
    }
    
    void put(int key, int value) {
      node *temp = new node(key , value);
        node *curr = head;
        
        while(curr->next){
            curr = curr->next;
            if(curr->key == key){
                curr->val = value;
                return;
            }
        }
        curr->next = temp;
    }
    
    int get(int key) {
        node *curr = head;
        while(curr){
            if(curr->key == key){
                return curr->val;
            }
        curr= curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
         node *curr = head;
        while(curr){
            if(curr->next &&curr->next->key == key){
                curr->next = curr->next->next;
            }
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