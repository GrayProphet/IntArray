//
// Created by Prophet on 18.01.2023.
//

#ifndef INTARRAY_INTARRAY_H
#define INTARRAY_INTARRAY_H


class IntArray {
private:
    int m_length;
    int* m_data;

public:
    IntArray();

    IntArray(int length);
    ~IntArray();

    void erase();

    int& operator[](const int& index);

    void reallocate(int newLength);

    void resize(int newLength);

    void insertBefore(int value, int index);

    void insertAtBegin(int value);

    void insertAtEnd(int value);

    int getLength() const;

    void ShowArray();

};


#endif //INTARRAY_INTARRAY_H
