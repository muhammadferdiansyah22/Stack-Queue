class buku:
    def __init__(self, judul):
        self.judul = judul

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items += [item]

    def pop(self):
        index=-1
        if not self.is_empty():
            tmp = self.items[index]
            self.items = self.items[:index]
            return tmp

        else:
            return None

    def is_empty(self):
        return self.items == []

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return None

    def size(self):
        count = 0
        for char in self.items:
            count += 1
        return count
