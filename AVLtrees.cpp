struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution{
  public:
    /*You are required to complete this method */
    int height(Node* node){
        if(node==NULL)return 0;
        return node->height;
    }
    int balance(Node* node){
        if(node==NULL)return 0;
        return height(node->left)-height(node->right);
    }
    Node* leftrot(Node* y){
        if(y==NULL)return y;
        Node* x=y->right;
        Node* T2=x->left;
        //left rotation
        x->left=y;
        y->right=T2;
        
        y->height=max(height(y->left),height(y->right))+1;
        x->height=max(height(x->left),height(x->right))+1;
        return x;
    }
    
    Node* rightrot(Node* y){
        if(y==NULL)return y;
        Node* x=y->left;
        Node* T2=x->right;
        //right rotation
        
        x->right=y;
        y->left=T2;
        
        y->height=max(height(y->left),height(y->right))+1;
        x->height=max(height(x->left),height(x->right))+1;
        return x;
    }
    Node* insertToAVL(Node* root, int data)
    {
        if(root==NULL)return new Node(data);
        if(data<root->data)root->left=insertToAVL(root->left,data);
        else if(data>root->data)root->right=insertToAVL(root->right,data);
        else return root;
        root->height=1+max(height(root->left),height(root->right));
        
        int bal=balance(root);
        
        if(bal>1){
            if(data>root->left->data)root->left=leftrot(root->left);
        
        return rightrot(root);}
        if(bal<-1){
            if(data<root->right->data){
                root->right=rightrot(root->right);
            }
            return leftrot(root);
        }
        return root;
    }
};
