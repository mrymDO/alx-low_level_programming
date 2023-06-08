## 0x1A. C - Hash tables

# Description

A hash table, also known as a hash map, is a data structure that provides efficient insertion, deletion, and retrieval operations. It is based on the concept of a hash function, which maps keys to their corresponding values. Hash tables are widely used in computer science and provide fast access to data, making them suitable for applications that require efficient lookup operations.
Here's how a hash table works:

* Hash function: A hash function takes an input (the key) and produces a hash code, which is an integer value. The hash code is typically derived from the key's characteristics, such as its content or size. The goal of a hash function is to distribute the hash codes uniformly across the available range of hash table slots or buckets.

* Mapping keys to buckets: Once the hash code is generated, it is used to determine the bucket or slot where the key-value pair will be stored. The hash code is often reduced to fit within the range of available slots using a technique called modulo arithmetic. Each bucket can hold multiple key-value pairs or a linked list of entries.

* Handling collisions: Collisions occur when two or more keys produce the same hash code, resulting in a collision in the hash table. There are different techniques to handle collisions, such as separate chaining and open addressing.

* Retrieval and modification: To retrieve a value from the hash table, the key is hashed using the hash function, and the resulting hash code is used to locate the corresponding bucket. If there are multiple entries in the bucket due to collisions, the appropriate entry is found using key comparison.

* Resizing: Hash tables may need to be resized when the number of elements exceeds a certain threshold. Resizing involves creating a larger hash table and rehashing all the elements from the original hash table to the new one. This ensures a good distribution of elements and avoids performance degradation.

To use a hash table, you typically need to follow these steps:

* Choose or implement an appropriate hash function for your keys. The hash function should produce a good distribution of hash codes to minimize collisions.

* Define the data structure for storing key-value pairs in the hash table. This could be an array of buckets or a dynamic structure that can resize itself as needed.

* Insert key-value pairs into the hash table by hashing the keys and mapping them to the appropriate buckets.

* Retrieve values from the hash table by hashing the keys and locating the corresponding buckets. If there are collisions, use the appropriate collision resolution method to find the desired entry.

* Handle resizing if the hash table becomes too full or inefficient. This involves creating a new, larger hash table, rehashing the existing elements, and updating the references

# Mandatory Tasks

0. >>> ht = {}

Write a function that creates a hash table.

* Prototype: hash_table_t *hash_table_create(unsigned long int size);
    - where size is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return NULL


1. djb2

Write a hash function implementing the djb2 algorithm.

* Prototype: unsigned long int hash_djb2(const unsigned char *str);
* You are allowed to copy and paste the function from this page


2. key -> index

Write a function that gives you the index of a key.

* Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
    - where key is the key
    - and size is the size of the array of the hash table
* This function should use the hash_djb2 function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks


3. >>> ht['betty'] = 'cool'

Write a function that adds an element to the hash table.

* Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
    - Where ht is the hash table you want to add or update the key/value to
    - key is the key. key can not be an empty string
    - and value is the value associated with the key. value must be duplicated. value can be an empty string
* Returns: 1 if it succeeded, 0 otherwise
* In case of collision, add the new node at the beginning of the list


4. >>> ht['betty']

Write a function that retrieves a value associated with a key.

* Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
    - where ht is the hash table you want to look into
    - and key is the key you are looking for
* Returns the value associated with the element, or NULL if key couldn’t be found


5. >>> print(ht)

Write a function that prints a hash table.

* Prototype: void hash_table_print(const hash_table_t *ht);
    - where ht is the hash table
* You should print the key/value in the order that they appear in the array of hash table
   - Order: array, list
* Format: see example
* If ht is NULL, don’t print anything


6. >>> del ht
mandatory
Write a function that deletes a hash table.

* Prototype: void hash_table_delete(hash_table_t *ht);
    - where ht is the hash table
