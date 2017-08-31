#include<iostream>
#include<sstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;

string make_plural(int i, string a, string b) {
	if (i > 1)
		return a + b;
	else
		return a;
}

void elimDups(vector<string> &words) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

}

bool check(const string &a, string::size_type sz) {
	return a.size() > sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	ostream_iterator<string> os_iter(cout, " ");
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size(); });
	//auto wc = find_if(words.begin(), words.end(), [sz](const string &a) {return a.size() > sz; });
	auto wc = find_if(words.begin(), words.end(), bind(check, _1, sz));
	//auto count = words.end() - wc;
	auto count = count_if(words.begin(), words.end(), [sz](const string &a) {return a.size() > sz; });

	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	//for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	copy(wc, words.end(), os_iter);
	cout << endl;
}

int main() {
	//istream_iterator<string> string_iter(cin), eof;
	//vector<string> str(string_iter,eof);
	vector<string> str;
	str = { "the","quick","red","fox","jumps","over","slow","red","rurtle" };
	biggies(str,4);
	/*for (string s : str) {
		cout << s<<" ";
	}*/
}