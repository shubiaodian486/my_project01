void selection_sort(int *array, size_t size) {
  for (size_t i = 0; i < size - 1; i++) {
    int min_index = i;
    for (size_t j = i + 1; j < size; j++) {
      if (array[j] < array[min_index]) {
        min_index = j;
      }
    }
    int temp = array[i];
    array[i] = array[min_index];
    array[min_index] = temp;
  }
}
