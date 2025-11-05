#include <iostream>
using namespace std;

class counter{
private:
static int totalcount;
int objectid;
int count;

public:
counter() : count(0) {
totalcount++;
  objectid  = totalcount;
  cout << "coubter object" << objectid << "created<< endl;

    }

~counter(){
totalcount--;
cout<< "counter object" << objectid << "destroyed" << endl;

return *this;

counter operator ++ (int) {
  counter temp = *this;
  count++

    }

      void display() const {
        cout << "Counter " << objectID << ": " << count << endl;
    }

static int getotalcount(){
  return totalcount;
}
};

int main(){
  counter c1, c2;

cout << "total objects created: << counter:gettotalcount()<<endl;

  cout << "\n pre increment operations-- "<< endl;
++c1;
++c2;

