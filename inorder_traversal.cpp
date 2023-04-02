

void print_inorder(Node * root)
{
    if (root == NULL)
    {
        return ;
    }
    print_inorder(root->left);
    cout<<root->data<<" "<<endl;
    print_inorder(root->right);
}
