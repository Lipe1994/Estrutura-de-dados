typedef int CustomInt;
const int max_itens = 5;

class Queue
{
    private:
    int first, last;
    CustomInt* scaffold;

    public:
    Queue();
    ~Queue();
    bool isEmpty();
    bool isFull();
    void push(CustomInt);
    CustomInt pop();
    void print();
};