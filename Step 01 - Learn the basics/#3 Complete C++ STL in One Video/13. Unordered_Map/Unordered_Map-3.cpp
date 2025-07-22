#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  unordered_map<int, int> numMap;

  for (int i = 0; i < nums.size(); i++)
  {
    int complement = target - nums[i];

    // Check kare ki kya complement already map me hai
    if (numMap.find(complement) != numMap.end())
    {
      return {numMap[complement], i};
    }

    // Current number aur index ko map me store kare
    numMap[nums[i]] = i;
  }

  return {}; // Koi solution nahi mila
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = twoSum(nums, target);

  if (result.size() == 2)
  {
    cout << "Indexes: " << result[0] << " aur " << result[1] << endl;
    cout << "Numbers: " << nums[result[0]] << " aur " << nums[result[1]] << endl;
  }
  else
  {
    cout << "Koi solution nahi mila!" << endl;
  }

  return 0;
}
