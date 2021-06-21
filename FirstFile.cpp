#include <iostream>

using namespace std;

class player
{
  int ivar1;
  int fvar2;
  public:
   player()
  {
      //cout<<"IN the constructor"<<endl;
  }
  player(int x,float f)
  {
      this->ivar1 = x;
      this->fvar2 = f;
  }
 virtual void playsports()
  {
      cout<<"play common sports ";
  }
  virtual int playsports(int x)
  {
      cout<<"play healthy sports";
      return 0;
  }
};
class superplayer
{
  int ivar1;
  int fvar2;
  public:
   superplayer()
  {
      //cout<<"IN the constructor"<<endl;
  }
  superplayer(int x,float f)
  {
      this->ivar1 = x;
      this->fvar2 = f;
  }
 void playsports()
  {
      cout<<"play football sports ";
  }
  virtual int playsports(int x)
  {
      cout<<"play healthy football";
      return 0;
  }
};

class cricketplayer : public player,superplayer
{
 public:
 cricketplayer()
 {
     //cout<<"cricket player";
 }
 void playsports()
 {
     cout<<" Play cricket as favourite sports";
 }
 int playsports(int x)
 {
     cout<<"\nPlay cricket healthy";
     return 0;
 }
};
int main()
{
  player * pl = new cricketplayer();
  //cricketplayer *cricpl = new cricketplayer();
  pl->playsports();
  pl->playsports(100);
    return 0;
}