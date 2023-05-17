class Stack:
    top = None
    stackvalue = None
    def __init__(self):
        self.top = -1
        self.stackvalue = []

    def __push__(self, value):
        if len(self.stackvalue) == 0:
            self.stackvalue.append(value)
            self.top = self.top + 1
        elif (value == "(" or value == "{" or value == "["):
            self.stackvalue.append(value)
            self.top = self.top + 1 
        else:
            if (value == "]" and self.stackvalue[self.top] == "[") or (value == ")" and self.stackvalue[self.top] == "(") or (value == "}" and self.stackvalue[self.top] == "{"):
                 self.__pop__()
            else: 
                return False

    def __pop__(self):
        if len(self.stackvalue) > 0:
            self.top = self.top - 1
            return self.stackvalue.pop()
        else:
            self.top = -1
            return -1
        
    def __size__(self):
        return len(self.stackvalue)
    def __top__(self):
        return self.top

class Solution:
    def isValid(self, st: str) -> bool:
        s = Stack()
        checkstr = st
        
        for i in checkstr: 
            if s.__push__(i) == False:
                return False
        if len(s.stackvalue) == 0:
            return True
        else:
            return False