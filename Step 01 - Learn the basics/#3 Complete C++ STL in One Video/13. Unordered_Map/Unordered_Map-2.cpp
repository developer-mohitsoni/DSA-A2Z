#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
  unordered_map<string, int> umap;

  // Insert some elements
  umap["one"] = 1;
  umap["two"] = 2;
  umap["three"] = 3;
  umap["four"] = 4;
  umap["five"] = 5;

  // Get information about buckets
  cout << "Bucket count: " << umap.bucket_count() << endl;
  cout << "Load factor: " << umap.load_factor() << endl;
  cout << "Max load factor: " << umap.max_load_factor() << endl;

  // Print which bucket each key is in
  for (const auto &pair : umap)
  {
    cout << "Key '" << pair.first << "' is in bucket "
         << umap.bucket(pair.first) << endl;
  }

  // Manually trigger rehashing
  cout << "\nReserving space for 20 elements..." << endl;
  umap.reserve(20);
  cout << "New bucket count: " << umap.bucket_count() << endl;

  return 0;
}
