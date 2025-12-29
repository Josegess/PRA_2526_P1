#ifndef LIST_H
#define LIST_H
#include <stdexcept>

template <typename T>
class List {
    public:
        virtual ~List() {}

        virtual void insert(int pos, T e) = 0;

        void append(T e) = 0;

        void prepend(T e) = 0;

        T remove(int pos) = 0;

        T get(int pos) const = 0;

        int search(T e) const = 0;

        bool empty() const = 0;

        int size() const = 0;
};

#endif

