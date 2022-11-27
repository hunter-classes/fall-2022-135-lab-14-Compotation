template<typename T>
MyVector<T>::MyVector() {
  maxSize = 10;
  arr = new T[maxSize];
  numItems = 0;
}

template<typename T>
void MyVector<T>::push_back(T item) {
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
