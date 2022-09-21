#include<iostream>
#include<queue>
using namespace std;

class node{
  public:
    int data;
    node* left;
    node* right;
    
  public:
  //  constructor
  node(int d){
      this -> data = d;
      this -> left = NULL;
      this -> right = NULL;
    }
};

  // functions
node* buildTree(node* root){
  int data;
  cout << "Enter the data: " << endl;
  cin >> data;

  root = new node(data);

  if(data == -1){
    return NULL;
  }

  cout << "Enter the data inserting at the left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data inserting at the right of " << data << endl;
  root->right = buildTree(root->right);

  return root;
}

int height(node* root){
  if(root == NULL){
    return 0;
  }
  return max(height(root->left), height(root->right)) + 1;
}

void printCurrentLevel(node* root, int level){
  if(root == NULL){
    return;
  }
  else if(level == 1){
    cout << root->data << " ";
  }
  else if(level > 1){
    printCurrentLevel(root->left, level-1);
    printCurrentLevel(root->right, level-1);
  }
}

void levelOrder(node* root){
  int h = height(root);
  int i;
  for(i=1; i<=h; i++){
    printCurrentLevel(root, i);
  }
}

void printLevelOrder(node* root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);
  
  while(!q.empty()){
    node* temp = q.front();
   // cout << temp->data << " ";
    q.pop();
    
    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }

    else{
      cout << temp->data << " ";
      if(temp->left != NULL){
        q.push(temp->left);
      }
      if(temp->right != NULL){
        q.push(temp->right);
      } 
    }
  }
}

void preOrder(node* root){
  
  if(root == NULL){
    return;
  }
  
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
  
}

void inOrder(node* root){
  
  if(root == NULL){
    return;
  }

  inOrder(root->left);
  cout << root->data;
  inOrder(root->right);
  
 }

void postOrder(node* root){

  if(root == NULL){
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
  
}

int main(){
  vector<int> v1;
  node* root = NULL;
  root = buildTree(root);

  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
  printLevelOrder(root);
  cout << endl;
  
  return 0;
}
