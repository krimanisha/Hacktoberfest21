class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        rows = [set() for i in range(9)]
        cols = [set() for i in range(9)]
        mMat = [set() for i in range(9)]
        
        for i in range(9):
            for j in range(9):
                cur = board[i][j]
                if cur != '.':
                    
                    k = (i // 3 ) * 3 + j // 3
                
                    if cur not in rows[i]: rows[i].add(cur)
                    else: return False
                    
                    if cur not in cols[j]: cols[j].add(cur)
                    else: return False
                
                    if cur not in mMat[k]: mMat[k].add(cur)
                    else: return False
        return True
