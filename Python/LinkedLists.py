# SinglyNode class to represent each node in the linked list
class SinglyNode:
    def __init__(self, data):
        self.data = data
        self.next = None

# SinglyLinkedList class to handle operations on the linked list
class SinglyLinkedList:
    def __init__(self):
        self.head = None

    # Method to append a node to the end of the list
    def append(self, data):
        new_node = SinglyNode(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    # Method to print the linked list
    def print_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")

    # Method to delete a node by value
    def delete_node(self, key):
        current_node = self.head
        if current_node and current_node.data == key:
            self.head = current_node.next
            current_node = None
            return
        prev = None
        while current_node and current_node.data != key:
            prev = current_node
            current_node = current_node.next
        if current_node is None:
            return
        prev.next = current_node.next
        current_node = None


class DoublyNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = DoublyNode(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
        new_node.prev = last_node

    def print_list_forward(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" <-> ")
            current_node = current_node.next
        print("None")

    def print_list_backward(self):
        current_node = self.head
        if current_node is None:
            return
        while current_node.next:
            current_node = current_node.next
        while current_node:
            print(current_node.data, end=" <-> ")
            current_node = current_node.prev
        print("None")

    def delete_node(self, key):
        current_node = self.head
        
        if current_node and current_node.data == key:
            self.head = current_node.next
            if self.head:
                self.head.prev = None
            current_node = None
            return
        
        while current_node and current_node.data != key:
            current_node = current_node.next
        
        if current_node is None:
            return
        
        if current_node.next:
            current_node.next.prev = current_node.prev
        
        if current_node.prev:
            current_node.prev.next = current_node.next
        
        current_node = None


# Example usage:

linked_list = SinglyLinkedList()
linked_list.append(1)
linked_list.append(2)
linked_list.append(3)
linked_list.print_list()  # Output: 1 -> 2 -> 3 -> None
linked_list.delete_node(2)
linked_list.print_list()  # Output: 1 -> 3 -> None
dll = DoublyLinkedList()
dll.append(1)
dll.append(2)
dll.append(3)
print("Forward traversal:")
dll.print_list_forward()  # Output: 1 <-> 2 <-> 3 <-> None
print("Backward traversal:")
dll.print_list_backward()  # Output: 3 <-> 2 <-> 1 <-> None
dll.delete_node(2)
print("After deletion:")
dll.print_list_forward()  # Output: 1 <-> 3 <-> None