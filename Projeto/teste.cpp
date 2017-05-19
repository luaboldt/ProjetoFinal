#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string line;
  ifstream myfile("nomes_filmes.txt");
  if(myfile.is_open())
  {
    int ctrl = 0;
    while(getline(myfile, line))
    {
      ctrl++;
      if(ctrl==40)
      {
      cout << line << '\n';
      }
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}
