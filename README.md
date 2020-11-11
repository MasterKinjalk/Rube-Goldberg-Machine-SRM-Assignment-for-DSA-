Data Structure 

Rube Goldberg Machine With Code

Your Virtual Rube Goldberg machine will do the following:

• You will read from a provided space-and-comma-delimited text file list of data in the following
format:

 first name (30 characters)
 last name (30 characters)
 age
 day of birth (mm-dd-yy)

An example would be as follows: Mallika David, 49, 1960

• Your program should support any number of entries. As the data is read from a file, initially store
the data in a queue.

• Dequeue each element from the queue, print each item, and requeue each item. Ask the user to
press any key to continue the processing.

• Next, you will reverse the order of the data in the queue by dequeuing each element and pushing
them onto a stack. Once all the data is dequeued from the queue and pushed on to the stack, pop off
each element of the stack and re-queue each element back into a queue ADT, reversing their order in
the queue. Once completed, dequeue each element from the queue and print each item for the user
- ask the user to press any key to continue the processing. Make sure you requeue each item to
preserve the queue.

• Next, dequeue the elements from the queue and place them into an unordered binary tree. Add the
items into the tree ADT in the order they are dequeued, adhering to the binary tree shape property.

• Print the contents of the tree in pre-order and ask the user to press any key to continue the
processing. Print the contents of the tree in post-order and ask the user to press any key to continue
the processing. Ask the user to press any key to continue the processing.

• Move the data from the unordered binary tree into a linked list ADT using an in-order traversal of
the tree. Print the contents of the list and ask the user to press any key to continue the processing.

• Sort the contents of the list using a quick sort in ascending order. Print the contents of the list and
ask the user to press any key to continue the processing.

• Allow the user to interactively enter another name, age, and birthday. Add this to the list in the
proper location to maintain the sorted order. Print the contents of the list and ask the user to press
any key to continue the processing.

• At this point you are done with the processing.
