//link: https://www.naukri.com/code360/problems/left-view-of-binary-tree_625707?leftPanelTabValue=SUBMISSION
#include<bits/stdc++.h>
vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
        if(root == NULL)return ans;
        map<int, int> mpp;//line->node
        queue<pair<BinaryTreeNode<int>*, int>> q;//node, line

        q.push({root, -1});
        while(!q.empty()){
            auto it = q.front();
            BinaryTreeNode<int>* node = it.first;
            int line = it.second;

            q.pop();
            if(mpp.find(line) == mpp.end())mpp[line] = node->data;//we need not replace it
            if(node->left != NULL)q.push({node->left, line+1});//vertical lines so root = -1, children at 0, c-children at 1
            if(node->right != NULL)q.push({node->right, line+1});

        }
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
