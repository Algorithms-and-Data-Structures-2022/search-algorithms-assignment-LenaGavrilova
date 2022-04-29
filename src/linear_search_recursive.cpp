#include "assignment/linear_search_recursive.hpp"

namespace assignment {

  std::optional<int> LinearSearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с индексом последнего элемента массива
    return search(arr, search_elem, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> LinearSearchRecursive::search(const std::vector<int>& arr, int search_elem, int curr_index) const {
    if(curr_index==arr.size()){
      return std::nullopt;
    }
    if(arr[curr_index]==search_elem){
      return std::nullopt;
    }
    return search(arr,search_elem,curr_index+1);

  }
}