//https://www.codingninjas.com/codestudio/problems/number-of-distinct-substring_8230842?challengeSlug=striver-sde-challenge

struct Node {
    Node* links[26];
    bool flag = false;

    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

int distinctSubstring(string &word) {
    int cnt = 0;
    Node* root = new Node();

    for(int i = 0; i < word.length(); i++) {
        Node* node = root;
        for(int j = i; j < word.length(); j++) {
            if(!node->containsKey(word[j])) {
                cnt++;
                node->put(word[j], new Node());
            }
            node = node->get(word[j]);  
        }
    }
    return cnt;
}
