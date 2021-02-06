class DoublyLinkedList():
    def __init__(self):
        self.count = 0
        self.first = None
        self.last = None

    def clear(self):
        node = self.first
        while node:
            node.value = None
            node = node.next

    def push(self, value):
        node = ListNode(value)
        if self.last == None:
            self.first = node
            self.last = node
        else:
            self.last.next = node
            node.prev = self.last
            self.last = node

        self.count += 1

    def pop(self):
        node_to_return = self.last
        self.last.prev.next = None
        self.last = self.last.prev
        self.count -= 1

        return node_to_return

    def unshift(self):
        pass

    def shift(self):
        pass

    def remove(self, node):
        pass

    def print(self):
        result = ''
        node = self.first
        while node != None:
            result += f"{node.value} -> "
            node = node.next
        result += "None"
        return result

    def batch_populate(self, items):
        for item in items:
            self.push(item)


class ListNode():
    def __init__(self, value):
        self.next = None
        self.prev = None
        self.value = value

