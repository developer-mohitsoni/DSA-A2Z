#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
  unordered_map<string, vector<string>> anagramMap;

  for (string s : strs)
  {
    // String ka sorted version banaye jo key ke roop me kaam karega
    string key = s;
    sort(key.begin(), key.end());

    // Anagram group me string add kare
    anagramMap[key].push_back(s);
  }

  // Result banaye
  vector<vector<string>> result;
  for (auto &pair : anagramMap)
  {
    result.push_back(pair.second);
  }

  return result;
}

int main()
{
  vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};

  vector<vector<string>> anagramGroups = groupAnagrams(words);

  cout << "Anagram Groups:" << endl;
  for (int i = 0; i < anagramGroups.size(); i++)
  {
    cout << "Group " << i + 1 << ": ";
    for (string word : anagramGroups[i])
    {
      cout << word << " ";
    }
    cout << endl;
  }

  return 0;
}
