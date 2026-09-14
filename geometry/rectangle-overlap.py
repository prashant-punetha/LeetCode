class Solution(object):
    def isRectangleOverlap(self, rect1, rect2):
        return rect1[2]>rect2[0]and rect2[2]>rect1[0] and rect1[3]>rect2[1] and rect1[1]<rect2[3]
        
        