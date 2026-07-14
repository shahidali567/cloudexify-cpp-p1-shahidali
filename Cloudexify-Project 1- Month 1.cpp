#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int loadScore(){
    ifstream file("bestscore.txt");
    int best=0;

    if (file)
        file>>best;

return best;
}

void saveScore(int score){
    int best=loadScore();

    if (best==0 ||score<best){
        ofstream file("bestscore.txt");
        file<<score;
        cout<<"\n*** New Best Score Saved! ***\n";
    }
}


int SelectRange(){
    int level,range;
    cout<<"\nSelect Difficulty Level\n";
    cout<<"1. Easy   (1-50)\n";
    cout<<"2. Medium (1-100)\n";
    cout<<"3. Hard   (1-200)\n";
    cout<<"==-- Default range is 100 --==\n"<<endl;
    cout<<"Choice: ";
    cin>>level;

        switch (level)
        {
        case 1:
            range=50;
            break;
        case 2:
            range=100;
            break;
        case 3:
            range=200 ;
            break;
        default:
            range=100;
        }
        return range;
}
         
         
void Play(int range){
  int Snumber= rand() % range+1;
  int guess, counts=0;

  cout<<"\nGuess a number between 1 and "<<range<<endl;
  while (true){
  
     cout<<"Enter Guess: ";
     cin>>guess;

     if (guess<1 || guess>range){
     cout<<"Invalid! Enter a number between 1 and "<<range<<endl;
     continue;
     }
     counts++;

     if (guess==Snumber){
     cout<<"\nCongratulations You guessed correctly "<<endl;
     cout<<"Attempts: "<<counts<< endl;
     break;
        }
     else if (guess < Snumber){
          cout<<" Number is lower! Guess high \n";
            }
     else{
          cout<<" Number is higher! Guess low \n";
            }
     }
     saveScore(counts);
}
         
int main()
{
    srand(time(0));
    char tryagain;

  do{
    cout<<"\n========= NUMBER GUESSING GAME =========\n";
    
    int best=loadScore();
        if (best==0)
            cout<<"Best Score : No Record\n";
        else
            cout<<"Best Score :"<<best<<" Attempts\n";

        int range=SelectRange();
        Play(range);
        cout<<"\nPlay Again? (Y/N):";
        cin>>tryagain;

    } while(tryagain=='Y' || tryagain=='y');

  cout<<"\nThank You For Playing!\n";
  return 0;
}
