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

# Membuat objek stack
stack_buku = Stack()

# Menambahkan sampah ke dalam stack
buku_1 = buku("Buku Dongeng")
stack_buku.push(buku_1)

buku_2 = buku("Buku Pelajaran")
stack_buku.push(buku_2)

buku_3 = buku("Buku Masakan")
stack_buku.push(buku_3)

buku_4 = buku("Buku Tabungan")
stack_buku.push(buku_4)

buku_5 = buku("Buku Komik")
stack_buku.push(buku_5)

# Menampilkan ukuran stack
ukuran_stack = stack_buku.size()
print("Ukuran tumpukan buku: ",ukuran_stack)
