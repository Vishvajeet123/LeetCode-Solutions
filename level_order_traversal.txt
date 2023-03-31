
Node * level_order_traversal (Node * root )
{
    queue<Node * >q;
    
    q.push(root);
    q.push(NULL);
    
    while (!q.empty())
    {
        Node *  temp = q.front ();
        q.pop();
        if (temp==NULL)
        {
            cout<<endl;
            if (!q.empty)
            {
                q.push(NULL);
            }
        }
        
      else

                    cout<<temp->data<<" ";

      {
            if (root->left)
        {
            q.push(root->left);
        }
        if (root->right)
        {
            q.push(root->right);
        }

      }
      
      
      
      
          }
    return root ;
}
