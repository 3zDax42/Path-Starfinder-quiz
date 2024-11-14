#include<iostream>
#include<vector>
using namespace std;
//What starfinder class would you be quiz by Ezri & Michael
//Sep 19 2024
//a quiz to that determines what StarFinder Ancestry, Background, and Class you are!!!


// Struct to represent a Starfinder class with its name and subclasses
struct SubBase {
    string name;
    int points;
};

struct Base {
    string name;
    int points; 
    vector<SubBase> subItem;  // Vector to store subclasses 
};

struct Question {
    string questionText; // The actual question
    vector<string> choices; // List of possible answers
    int response; 
};

// Create a vector to hold Starfinder Ancestries 
vector<Base> Ancestries = {
    {"Android", 0, {{"artisan", 0}, { "laborer", 0}, { "polyglot", 0}, { "warrior",0 }, { "scion", 0}, { "mod", 0}, { "networked",0 }, {"renewed", 0}}},
    {"Barathu", 0, {{"dreamer", 0}, { "earlystage", 0}, { "manufacturer", 0}, {"merged", 0}}},
    {"Human", 0, {{"azlanti",0}, {"golarion",0}, {"scavenger",0}, {"skilled",0}, {"urbanite",0}, {"versatile", 0}}},
    {"Kasatha", 0, {{"akitonian",0}, {"survivalist",0}, {"shipborn",0}, {"nomad",0}, {"tempreing",0}}},
    {"Lashunta", 0, {{"damaya",0}, {"korasha",0}, {"unbound",0}}},
    {"Pahtra", 0, {{"hunter",0}, {"krreyvash",0}, {"chosen",0}, {"pouncer",0}, {"sand",0}, {"rime",0}}},
    {"Shirren", 0, {{"courtier",0}, {"defiant",0}, {"infiltrator",0}, {"swarm",0}, {"winged",0}}},
    {"Skittermander", 0, {{"everwhelp",0}, {"gadraveech",0}, {"scrabbler",0}, {"skitter",0}}},
    {"Shirren", 0, {{"courtier",0}, {"defiant",0}, {"infiltrator",0}, {"swarm",0}, {"winged",0}}},
    {"Vesk", 0, {{"briskwander",0}, {"nightstalker",0}, {"plated",0}, {"venomthought",0}, {"warblood",0}}},
    {"Ysoki", 0, {{"akitonian",0}, {"deep",0}, {"longsnout",0}, {"shipborn",0}, {"tunnel",0}}}
};
vector<Base> Classes = {
    {"Envoy", 0, {{"From the Front", 0}, {"From the Shadows", 0}, {"Gunsblazing", 0}, {"In the Spotlight", 0}, {"Hotshot", 0}, {"Infosphere Director", 0}, {"Through Desperate Times", 0}}},
    {"Solarian", 0, {{"Solar Flare", 0}, {"Solar Nimbus", 0}, {"Solar Weopon", 0}, {"Balenced", 0}, {"Degradant", 0}, {"Radiant", 0}}},
    {"Witchwarper", 0, {{"Analyst", 0}, {"Anomaly", 0}, {"Gap Influenced", 0}, {"Precog", 0}, {"Core Memories", 0}, {"Focal Point", 0}, {"Tangible Object", 0}}},
    {"Operative", 0, {{"ghost",0}, {"infiltrator",0}, {"skirmisher",0}, {"sniper",0}, {"striker",0}}},
    {"Mystic", 0, {{"akashic",0}, {"elemental",0}, {"healing",0}, {"rhythm",0}, {"shadow",0}}},
    {"Soldier", 0, {{"action hero",0}, {"armor storm",0}, {"Bombard",0}, {"close quarters",0}, {"erudite warrior",0}}}
};

vector<SubBase> Backgrounds = {
    {"cleaner",0}, {"athlete",0}, {"comedian",0}, {"brutaris player",0}, {"corporate agent",0}, {"city slicker",0},
    {"cyberborn",0}, {"diplomat",0}, {"dream prophet",0}, {"disciple",0}, {"electrician",0}, {"doctor",0}, {"gene splicer",0},
    {"recluse",0}, {"grifter",0}, {"scientist",0}, {"hacker",0}, {"socialite",0}, {"icon",0}, {"smuggler",0}, {"outlaw",0},
    {"spacefarer",0}, {"space pirate",0}, {"street rat",0}, {"tech support",0}, {"trooper",0}, {"vidgamer",0}
};

vector<Question> quizQuestions = {
{
    "What attribute do you think is the most important?",
    {"1. Intelligence", "2. Wisdom", "3. Dexterity", "4. Strength", "5. Constitution", "6. Charisma"}, {0}
},
{
    "What would you do if there was a fight?",
    {"1. Join the fight", "2. Step in to stop the fight", "3. Descilate the fight", "4. Back seat fighting (telling someone how they should fight)", "5. start recording and cheer the fighters on", "6. report the fight", " 7.Close the Door"}, {0}

}
// Add more questions as needed
};



void Quiz(vector<Question>& QuizQuestions) {
    for (int i = 0; i < QuizQuestions.size(); i++) {
        cout << QuizQuestions[i].questionText << endl;
        for (int j = 0; j < QuizQuestions[i].choices.size(); j++) {
            cout << QuizQuestions[i].choices[j] << endl;
        }
        cin >> QuizQuestions[i].response;  // Capture the user's response
    }
}

int main() {


    Quiz(quizQuestions); 
    cout << "test";

    switch (quizQuestions[0].response)
    {
    case 1:
        Ancestries[2].points += 1; // Human
        Ancestries[0].points += 1; // Android
        Ancestries[10].points += 1; // Ysoki
        Classes[2].points += 2; // Witchwarper

        Classes[0].points -= 2; // Envoy
        Classes[4].points -= 2; // Mystic
        Classes[3].points -= 2; // Operative
        Classes[5].points -= 2; // Soldier
        Classes[1].points -= 2; // Solarian
        break;
    case 2:
        Ancestries[2].points += 1; // Human
        Ancestries[1].points += 1; // Barathu
        Ancestries[3].points += 1; // Kasatha
        Ancestries[6].points += 1; // Shirren 
        Classes[4].points += 2; // Mystic

        Ancestries[7].points -= 1; // Skittermander
        Ancestries[9].points -= 1; // Vesk
        Classes[0].points -= 2; // Envoy
        Classes[3].points -= 2; // Operative
        Classes[5].points -= 2; // Soldier
        Classes[2].points -= 2; // Witchwarper
        Classes[1].points -= 2; // Solarian
        break;
    case 3:
        Ancestries[2].points += 1; // Human
        Ancestries[0].points +=1 ; // Android
        Ancestries[5].points += 1; // Pahtra 
        Ancestries[7].points += 1; // Skittermander
        Ancestries[10].points +=1; // Ysoki
        Classes[3].points += 2; // Operative

        Ancestries[1].points -= 1; // Barathu
        Classes[0].points -= 2; // Envoy
        Classes[4].points -= 2; // Mystic 
        Classes[5].points -= 2; // Soldier
        Classes[2].points -= 2; // Witchwarper
        Classes[1].points -= 2; // Solarian
        break;
    case 4:
        Ancestries[2].points += 1; // Human
        Ancestries[3].points += 1; // Kasatha
        Ancestries[9].points += 1; // Vesk
        Classes[1].points += 2; // Solarian

        Ancestries[10].points -= 1; // Ysoki
        Classes[0].points -= 2; // Envoy
        Classes[4].points -= 2; // Mystic
        Classes[3].points -= 2; // Operative
        Classes[5].points -= 2; // Soldier
        Classes[2].points -= 2; // Witchwarper

        break;
    case 5:
        Ancestries[2].points += 1; // Human
        Ancestries[1].points += 1; // Barathu
        Ancestries[6].points += 1; // Shirren 
        Ancestries[9].points += 1; // Vesk
        Classes[5].points += 2; // Soldier

        Ancestries[5].points -= 1; // Pahtra
        Classes[0].points -= 2; // Envoy
        Classes[4].points -= 2; // Mystic
        Classes[3].points -= 2; // Operative 
        Classes[2].points -= 2; // Witchwarper
        Classes[1].points -= 2; // Solarian

        break; 
    case 6:
        Ancestries[2].points += 1; // Human
        Ancestries[4].points += 1; // Lashunta
        Ancestries[7].points += 1; // Skittermander
        Classes[0].points += 2; // Envoy

        Ancestries[0].points -= 1; // Android 
        Ancestries[3].points -= 1; // Kasatha
        Ancestries[6].points -= 1; // Shirren
        Classes[4].points -= 2; // Mystic 
        Classes[3].points -= 2; // Operative
        Classes[5].points -= 2; // Soldier
        Classes[2].points -= 2; // Witchwarper
        Classes[1].points -= 2; // Solarian
        break; 
    
    default:
        break;
    }

    switch (quizQuestions[1].response)
    {
    case 1:
        Ancestries[9].points += 1; // Vesk
        Classes[3].points += 2; // Operative
        Classes[5].points += 2; // Soldier
        break;
    case 2:
    Classes[1].points += 1; // Solarian
        break;
    case 3: 
    Classes[4].points += 1; // Mystic 
        break;
    case 4:
    Classes[0].points += 1; // Envoy
    Ancestries[5].points += 1; // Pahtra
        break;
    case 5:
    Ancestries[7].points += 1; // Skittermander
    Ancestries[2].points += 1; // Human
    Ancestries[4].points += 1; // Lashunta
        break;
    case 6:
    Ancestries[0].points += 1; // Android
    Ancestries[6].points += 1; // Shirren 

        break;
    case 7:
    Ancestries[10].points +=1; // Ysoki
    Classes[2].points += 1; // Witchwarper

        break;
    
    default:
        break;
    }

}




