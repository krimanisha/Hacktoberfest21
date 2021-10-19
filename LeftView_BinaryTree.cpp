#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node*left;
    node*right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

/////////******************METHOD-1***************////////////////
//Simple Pre Order traversal
int max_level = 0;
void leftViewRecursive(node* root, int level)
{
    // base case
    if (root == NULL)
        return;

    if (max_level < level)
    {
        cout << root->data << " ";
        max_level = level;
    }

    leftViewRecursive(root->left, level + 1);
    leftViewRecursive(root->right, level + 1);
}

/////////******************METHOD-2***************////////////////
//Simple Level Order traversal
vector<int> leftViewIterative(node* root)
{
    queue<node*>q;
    vector<int>ans;
    if (root == NULL)
        return ans;
    q.push(root);
    q.push(NULL);
    ans.push_back(root->data);
    while (q.size() > 1)
    {
        if (q.front() == NULL)
        {
            q.push(NULL);
            q.pop();
            ans.push_back(q.front()->data);
            continue;
        }
        node* n = q.front();
        if (n->left)
            q.push(n->left);
        if (n->right)
            q.push(n->right);
        q.pop();

    }

    return ans;
}
int main() {
    node* root = buildTree();

    leftViewRecursive(root, 1);
    std::vector<int> ans = leftViewIterative(root);

    cout << endl;
    for (auto x : ans)
        cout << x << " ";
    return 0;
}