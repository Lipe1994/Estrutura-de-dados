typedef int CustomInt;

struct No
{
    CustomInt value;
    No *next;
};

class DynamicStack
{
private:
    No *topNo;

public:
    DynamicStack();
    ~DynamicStack();
    bool isFull();
    bool isEmpty();
    void push(CustomInt);
    CustomInt pop();
    void print();
};