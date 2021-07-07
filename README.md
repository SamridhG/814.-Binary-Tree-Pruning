# 814.-Binary-Tree-Pruning
Given the root of a binary tree, return the same tree where every subtree (of the given tree) not containing a 1 has been removed.

A subtree of a node node is node plus every node that is a descendant of node.

 

Example 1:


![image](https://user-images.githubusercontent.com/63790684/124713957-d164f700-df1e-11eb-9288-69bd29d11e67.png)

Input: root = [1,null,0,0,1]


Output: [1,null,0,null,1]


Explanation: 


Only the red nodes satisfy the property "every subtree not containing a 1".


The diagram on the right represents the answer.


Example 2:

![image](https://user-images.githubusercontent.com/63790684/124713970-d5911480-df1e-11eb-83d8-230c6dd84b4e.png)

Input: root = [1,0,1,0,0,0,1]


Output: [1,null,1,null,1]


Example 3:

![image](https://user-images.githubusercontent.com/63790684/124713992-db86f580-df1e-11eb-8b30-1c887216a2ba.png)

Input: root = [1,1,0,1,1,0,1,0]


Output: [1,1,0,1,1,null,1]
 

Constraints:


The number of nodes in the tree is in the range [1, 200].


Node.val is either 0 or 1.
