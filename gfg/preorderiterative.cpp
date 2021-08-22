vector<int> preOrder(Node* root)
    {
    vector<int> res;
    
    stack<Node *> s;
    s.push(root);
    
    while(!s.empty())
    {
        Node *temp = s.top();
        
        res.push_back(temp->data);
        s.pop();
        
        if(temp->right)
        {
            s.push(temp->right);
        }
        
        if(temp->left)
        {
            s.push(temp->left);
        }
    }
    
    return res;
    }