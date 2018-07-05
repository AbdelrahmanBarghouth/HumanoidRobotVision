#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int organsnum =4;
char organnames[4]={'h','k','l','n'};
int main ()
{
  system("sh ~/capture.sh");
  for(int k=0;k < organsnum;k++)
  {
	if(k==0)
	 system("./abdo heart.jpeg taken.jpeg");//liver has 280 descriptors
	else if(k==1)
	 system("./abdo kidney.jpeg taken.jpeg");//heart has 224 descriptors
	else if(k==2)
	 system("./abdo liver.jpeg taken.jpeg");//kidney has 108 descriptors
	else if(k==3)
	 system("./abdo lung.jpeg taken.jpeg");//lung has 230 descriptors
  	 fstream myfile;
 	 myfile.open ("example.txt");
	 char c[3];
 	 myfile >> c;
 	 myfile.close();
 	 if (c[0] == '1' )
 	  {
		char organname= organnames[k];
		cout<<organname<<endl;
		ofstream myfile2;
		  myfile2.open ("/home/pi/mygamecodes/objectdetection/organ.txt");
		if(organname == 'l')
		  myfile2 << "liver";
		else if(organname == 'h')
		  myfile2 << "heart";
		else if(organname == 'k')
		  myfile2 << "kidney";
		else if(organname == 'n')
		  myfile2 << "lung";

		  myfile2.close();
		k=5;
	  }
  }
system("sh ~/voice.sh");
system("~/./check");
  return 0;
}
//liver heart kidney lung
