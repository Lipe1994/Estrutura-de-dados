#include "aluno.h"

class Hash{
    private:
        int hash(Aluno);
        int max_items;
        int max_size;
        int quantity_items;
        Aluno* scaffold;

    public:
        Hash(int vatorSize, int max);
        ~Hash();
        bool isFull();
        int getCuttentLength();
        void push(Aluno aluno);
        void remove(Aluno aluno);
        void find(Aluno& aluno, bool& find);
        void print();


};