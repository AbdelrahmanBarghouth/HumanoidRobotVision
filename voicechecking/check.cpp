#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
fstream myfile;
myfile.open ("/home/pi/mygamecodes/objectdetection/organ.txt");
char c[10];
myfile >> c;
myfile.close();
cout<< c << endl;
fstream myfile2;
myfile2.open("/home/pi/pocketsphinx-0.8/src/programs/organ.txt");
char a[10];
myfile2 >> a;
myfile2.close();
cout<< a << endl;
if(c[0] == a[0] && c[1] == a[1] )
{
cout<< "right answer"<<endl;
system("echo 'right answer' | festival --tts");
}
else
{
cout<< "wrong answer"<<endl;
system("echo 'wrong answer' | festival --tts");
}
return 0;
}
