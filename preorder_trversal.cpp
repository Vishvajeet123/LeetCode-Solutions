
void print_preorder(Node * root)
{
    if (root == NULL)
    {
        return ;
    }
    cout<<root->data<<" "<<endl;
    print_preorder(root->left);
    print_preorder(root->right);
}

int main ()
{
 
 Node * root = NULL;
 print_preorder(root);

}
