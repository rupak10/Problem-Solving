
#include <string>
#include <iostream>
using namespace std;


int main()
{
    //Accepted
	string s = "";
	bool swap = true;
	while(getline(cin,s))
	{
		for(int a = 0; a < s.length(); a++)
		{
			if(s[a] == '"' && swap)
			{
				s.insert(a, "``");
				s.erase(a + 2,1);
				swap = false;
			}
			else if(s[a] == '"' && swap == false)
			{
				s.insert(a, "''");
				s.erase(a + 2,1);
				swap = true;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}

