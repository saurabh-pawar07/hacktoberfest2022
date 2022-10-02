# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict as dd
class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        ans = dd(list)
        queue = deque([(root.val, 0, root)])
        # Iterative BFS with HashMap
        while queue:
            size = len(queue)
            nq = []
            while size:
                val, col, node = queue.popleft()
                ans[col].append(val)
                if node.left: nq.append((node.left.val, col - 1, node.left))
                if node.right: nq.append((node.right.val, col + 1, node.right))
                size -= 1
            print('nq',nq)
            queue = deque(sorted(nq, key = lambda x: x[0]))
        res = []
        for k in sorted(ans):
            res.append(ans[k])
        return res
