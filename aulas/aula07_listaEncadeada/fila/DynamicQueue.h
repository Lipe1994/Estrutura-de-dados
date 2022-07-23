typedef int CustomType;
const int max_itens = 5;

struct No
{
    CustomType value;
    No *next;
};

class DynamicQueue
{
private:
    No *first;
    No *last;
    CustomType *scaffold;

public:
    DynamicQueue();
    ~DynamicQueue();
    bool isEmpty();
    bool isFull();
    void push(CustomType);
    CustomType pop();
    void print();
};