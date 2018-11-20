#pragma once

template <class T>
class MaxSizeQueue 
// Things put on MaxSizeQueue get indexes firstindex, 1,2,3, ....
// But once maxSize is reached first element will be deleted
// and innacesible
{
public:
    MaxSizeQueue(int maxSize, int firstIndex = 0);

    template <class... Args>
    int emplace(Args&&... args); // returns index for this element

    T& operator[](int index);
    const T& operator[](int index) const;

    int beginIndex() const; //First accesible index
    int endIndex() const; //Last accesible index

    bool empty() const;
    int size() const;

    ~MaxSizeQueue();
private:
    T* arr; //queue memory
    int maxSize;
    int Size;
    T* nxtFreePlace;
    int nxtIndex;
    int firstIndex;
};

template <class T>
MaxSizeQueue<T>::MaxSizeQueue(int MaxSize, int FirstIndex)
{   
    maxSize = MaxSize;
    arr = (T*)malloc(sizeof(T)*maxSize);
    Size = 0;
    nxtFreePlace = arr;
    firstIndex = FirstIndex;
    nxtIndex = firstIndex;
}

template <class T>
MaxSizeQueue<T>::~MaxSizeQueue()
    { free(arr); }

template <class T>
template <class... Args>
int MaxSizeQueue<T>::emplace(Args&&... args)
{
    if(Size == maxSize)
    {
        nxtFreePlace->~T();
        Size--;
    }

    new (nxtFreePlace) T(std::forward<Args...>(args...));
    Size++;

    nxtFreePlace++;
    if(nxtFreePlace == arr+maxSize)
        nxtFreePlace = arr;

    return nxtIndex++;
}

template <class T>
int MaxSizeQueue<T>::beginIndex() const
{
    if(Size < maxSize)
        return firstIndex;
    else
        return nxtIndex - maxSize;
}

template <class T>
int MaxSizeQueue<T>::endIndex() const
{ 
    return nxtIndex;
}

template <class T>
bool MaxSizeQueue<T>::empty() const
    { return Size==0; }

template <class T>
int MaxSizeQueue<T>::size() const
    {return Size;}



template <class T>
T& MaxSizeQueue<T>::operator[](int index)
{
    int howMuchBackFromNxtIndx = nxtIndex - index;
    T* pos = nxtFreePlace - howMuchBackFromNxtIndx;
    if(pos < arr)
        pos += maxSize;
    return *pos;
}

template <class T>
const T& MaxSizeQueue<T>::operator[](int index) const
{
    int howMuchBackFromNxtIndx = nxtIndex - index;
    T* pos = nxtFreePlace - howMuchBackFromNxtIndx;
    if(pos < arr)
        pos += maxSize;
    return *pos;
}