#include <string>

using namespace std;

class CStringPerso : public string
{
	public:
		CStringPerso(string strInit = "Qu'est ce que c'est bien le C++ !");
		void Reverse();
		int GetNbMots();
};
