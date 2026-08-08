class Solution {
  public:
    Node *flattenBST(Node *root) {
        // code here
        if(root == NULL){
            return 0;
        }
        Node *head = flattenBST(root->left);
        root->left = NULL;
        root->right = flattenBST(root->right);
        
        if(head != NULL){
            Node *temp = head;
            while(temp->right){
                temp = temp->right;
            }
            temp->right = root;
        }
        else{
            head = root;
        }
        return head;
    }
};