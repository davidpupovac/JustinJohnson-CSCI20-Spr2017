//created by Justin Johnson
// created on 2/16/17
// lab 1.6: create two monster with objects

#include <iostream>
#include <string>
using namespace std;


struct Monster {
    string monsterName = "";
    string monsterHead = "";
    string monsterEars = "";
    string monsterEyes = "";
    string monsterNose = "";
    string monsterMouth = "";
};

int main()  {
Monster OneMonster; {          // first monster
   OneMonster.monsterName ;
   OneMonster.monsterHead ;
   OneMonster.monsterEars;
   OneMonster.monsterEyes;
   OneMonster.monsterNose;
   OneMonster.monsterMouth;
}
   
Monster TwoMonster; {           // second monster
   TwoMonster.monsterName ;
   TwoMonster.monsterHead ;
   TwoMonster.monsterEars;
   TwoMonster.monsterEyes;
   TwoMonster.monsterNose;
   TwoMonster.monsterMouth;
   }
   
Monster ThreeMonster; {        // thrid monster
   ThreeMonster.monsterName ;
   ThreeMonster.monsterHead ;
   ThreeMonster.monsterEars;
   ThreeMonster.monsterEyes;
   ThreeMonster.monsterNose;
   ThreeMonster.monsterMouth;   
   }
    
Monster FourMonster;{           // fourth monster
   FourMonster.monsterName ;
   FourMonster.monsterHead ;
   FourMonster.monsterEars;
   FourMonster.monsterEyes;
   FourMonster.monsterNose;
   FourMonster.monsterMouth;
    }
    
    OneMonster.monsterName = "OneMonster"; // start first monster
    OneMonster.monsterHead = "Zombus";
    OneMonster.monsterEyes = "Spritem";
    OneMonster.monsterEars = "Vegitas"; 
    OneMonster.monsterNose = "None";
    OneMonster.monsterMouth = "Wackus";
    
    cout << OneMonster.monsterName << ": " << OneMonster.monsterHead << ", " << OneMonster.monsterEyes << ", " << OneMonster.monsterEars << ", " << OneMonster.monsterNose << ", " << OneMonster.monsterMouth << endl;
    
   TwoMonster.monsterName = "TwoMonster" ;  // start second monster
   TwoMonster.monsterHead = "Franken" ;
   TwoMonster.monsterEars = "Wackus";
   TwoMonster.monsterEyes = "Vegitas";
   TwoMonster.monsterNose = "Wackus";
   TwoMonster.monsterMouth = "Vegitas";
   
   cout << TwoMonster.monsterName << ": " << TwoMonster.monsterHead << ", " << TwoMonster.monsterEyes << ", " << TwoMonster.monsterEars << ", " << TwoMonster.monsterNose << ", " << TwoMonster.monsterMouth << endl;
   
   ThreeMonster.monsterName = "" ;  // start thrid monster
   ThreeMonster.monsterHead = "" ;
   ThreeMonster.monsterEars = "";
   ThreeMonster.monsterEyes = "";
   ThreeMonster.monsterNose = ""; 
   ThreeMonster.monsterMouth = "";
   
   cout << "Now you get to create you own monster" << endl;
   cout << " First lets give you monster a name please enter a name when ready" << endl;
   getline(cin,ThreeMonster.monsterName);
   cout << " Your new monsters name is " << ThreeMonster.monsterName << ". That is a Wonderfull name!!!" << endl;
   
   cout << " Now lets pick a head type, The type you can choose from are; Zombus, Franken, and Happy. Now select one when you are ready." << endl;
   getline(cin,ThreeMonster.monsterHead);
   
   cout << " We get to pick out eyes now. The list for those are Vegitas, Wackus, and Spritem. Chose one now!" << endl;
   getline(cin,ThreeMonster.monsterEyes);
   
   cout <<  " Lets pick out some ears now the choice for those are Vegitas, Wackus, and Spritem. Chose when ready." << endl;
   getline(cin,ThreeMonster.monsterEars);
   
   cout << " Now you can have a nose for noses you have Vegitas, Wackus, and Spritem, chose when ready." << endl;
   getline(cin,ThreeMonster.monsterNose);
   
   cout << " The last thing to chose is the mouth for the monster and the options are Vegitas, Wackus and Spritem. Chose when readyy." << endl;
   getline(cin,ThreeMonster.monsterMouth);
   cout << " " << endl;
   
   cout << " Now the choices you have made are " << endl;
     cout << ThreeMonster.monsterName << ": " << ThreeMonster.monsterHead << ", " << ThreeMonster.monsterEyes << ", " << ThreeMonster.monsterEars << ", " << ThreeMonster.monsterNose << ", " << ThreeMonster.monsterMouth << endl
          << endl
          <<endl;
    
   
   FourMonster.monsterName ;  // start fourth monster
   FourMonster.monsterHead ;
   FourMonster.monsterEars;
   FourMonster.monsterEyes;
   FourMonster.monsterNose;
   FourMonster.monsterMouth;
   
   cout << " Lets create one more monster, the steps will be excatly the same as before." << endl;
   cout << " We will start will the name the again as follows head, eyes, ears,nose, and mouth." << endl;
   cout << " Please enter a name for your monster " << endl;
   getline(cin,FourMonster.monsterName);
   
   cout << " Now pick head" << endl;
   getline(cin,FourMonster.monsterHead);
   
   cout << " Now decide on a pair of eyes" << endl;
   getline(cin,FourMonster.monsterEyes);
   
   cout << " Ears are up next" << endl;
   cin >> FourMonster.monsterEars;
   
   cout << " Pick a nose now" << endl;
   cin >> FourMonster.monsterNose;
   
   cout << " For last part lets pick a mouth now" << endl;
   cin >> FourMonster.monsterMouth;
   
   cout << " your last monster is made of " << endl;
    cout << FourMonster.monsterName << ": " << FourMonster.monsterHead << ", " << FourMonster.monsterEyes << ", " << FourMonster.monsterEars << ", " << FourMonster.monsterNose << ", " <<FourMonster.monsterMouth << endl;
    
    return 0;
}