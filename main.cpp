#include <iostream>
#include <string>

using namespace std;

class ReversibleString{
	private:
		string str;
	public:
	ReversibleString(){str = "";}
	ReversibleString(string inputStr){str = inputStr;}
	void Reverse(){
		string tmp;
		while(!str.empty()){
			tmp.push_back(str.back());
			str.pop_back();
		}
		str = tmp;
	}
	string ToString() const{
		return str;
	}
};

int main() {
	ReversibleString s("blablacar");
	s.Reverse();
	cout << s.ToString() << endl;
	
	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;
	
	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;
	
return 0;
}
