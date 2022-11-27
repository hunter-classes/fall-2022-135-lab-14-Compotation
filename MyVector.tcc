template<typename T>
MyVector<T>::MyVector() {
  maxSize = 10;
  arr = new T[maxSize];
  numItems = 0;
}

template<typename T>
void MyVector<T>::push_back(T item) {
  if (numItems >= maxSize) {
    // copy to new array with size maxSize + 10
    maxSize += 10;
    T *newArr = new T[maxSize];
    for (size_t i = 0; i < numItems; i++) {
      newArr[i] = arr[i];
    }
    arr = newArr;
  }

  arr[numItems] = item;
  numItems++;
}

template<typename T>
T &MyVector<T>::operator[](size_t i) {
  return arr[i];
}

template<typename T>
size_t MyVector<T>::size() {
  return numItems;
}

template<typename T>
size_t MyVector<T>::capacity() {
  return maxSize;
}

template<typename T>
bool MyVector<T>::empty() {
  return size() == 0;
}

template<typename T>
void MyVector<T>::pop_back(size_t n) {
  numItems -= n;
}

template<typename T>
void MyVector<T>::pop_back() {
  numItems--;
}
