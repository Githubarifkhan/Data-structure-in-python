class queue:
    def __init__(self):
        self.queue = []

    def empty(self):
        return len(queue) == 0

    def enqueue(self, item):
        self.queue.append(item)

    def dequeue(self):
        if len(self.queue) < 1:
            return None
        else:
            return self.queue.pop(0)

    def display(self):
        print(self.queue)

    def size(self):
        return len(self.queue)
        
q = queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.display()
q.dequeue()
print("after removing an element")
q.display()

    
