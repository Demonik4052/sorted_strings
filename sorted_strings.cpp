#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class SortedStrings {
public:
	void AddString(const string& s);
	vector<string> GetSortedStrings();

private:
	vector<string> strings;
};

void SortedStrings::AddString(const string& s)
{
	strings.push_back(s);
}

vector<string> SortedStrings::GetSortedStrings()
{
	sort(begin(strings), end(strings));
	return strings;
}

void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}

int main() {
	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);

	strings.AddString("second");
	PrintSortedStrings(strings);

	return 0;
}
