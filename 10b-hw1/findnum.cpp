//find_num should return a pointer
//return values should therefore be a memory address or nullptr
//we are running arrays through the function
//int a1[] is same as int* a1[], so we would be running the memory address of the first index
//the parameter however has int* so we would be accessing the value of said memory address
//once we have that, we can go through the rest of the array using *(arr+i) for values and arr+i for memory addresses (i being the indexes)
int* find_num(int* arr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == num)
        {
        return arr + i; //will loop until meets condition. otherwise keep looping.
        //note: return exits the entire function! so nothing below runs.
        }//close if statement
    } //close for loop
    return nullptr; //if loop continues until end of array, after loop, we just return nullptr.
} //closes function

/*
// Test case 1
int a1[] = {-5, 0, 1, 2, -3, 20, 15};
int* p1 = find_num(a1, 7, -3);

// Test case 2
int* a2 = new int[5]{1, 1, 1, 1, 1};
int* p2 = find_num(a2, 5, 1);

// Test case 3: nullptr
int* a3 = new int[1]{-1};
int* p3 = find_num(a3, 1, -2);

// Test case 4
int a4[] = {-1, -2, -3, -4, -5};
int* p4 = find_num(a4, 5, -5);

// Test case 5
int a5[] = {5, 4, 3, 2, 1};
int* p5 = find_num(a5, 5, 5);
*/