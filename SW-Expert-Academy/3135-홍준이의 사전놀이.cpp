class Trie {
public:
	Trie() {
		for (int i = 0; i < 26; i++) {
			if (n_node[i])
				n_node[i] = 0;
		}
		query = 0;
	}
	~Trie() {}
	Trie* n_node[26];
	int query;
};
Trie* root;

void init(void) {
	root = new Trie();
}

void insert(int buffer_size, char* buf) {
	Trie* cur_node = root;
	for (int i = 0; i < buffer_size; i++) {
		int idx = buf[i] - 'a';
		if (!cur_node->n_node[idx])
			cur_node->n_node[idx] = new Trie();
		cur_node = cur_node->n_node[idx];
		cur_node->query += 1;
	}
}

int query(int buffer_size, char* buf) {
	Trie* cur_node = root;
	for (int i = 0; i < buffer_size; i++) {
		int idx = buf[i] - 'a';
		if (!cur_node->n_node[idx])
			return 0;
		cur_node = cur_node->n_node[idx];
	}
	return cur_node->query;
}