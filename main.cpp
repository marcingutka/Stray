#include <iostream>
#include <vector>


int stray(std::vector<int> numbers)
{

    int same = numbers[0];

    for(int i = 0; i < numbers.size(); ++i)
    {
      if (numbers[i] != same)
        {
          if (i>=2) return numbers[i];
          if (numbers[1] == numbers[2]) return numbers[0];
          else return numbers[1];
        }
    }
}

int main()
{
    std::vector<int> vec1{1, 1, 2};
    std::cout << stray(vec1) << std::endl;
    return 0;
}
