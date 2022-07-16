typedef int CustomInt;
const int max_itens = 100;

class Stack {
    private: 
    int size;
    CustomInt* scafold;

    public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();
    void push(CustomInt);
    CustomInt pop();
    void print();
    int lenght();

};